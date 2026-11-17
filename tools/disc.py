#!/usr/bin/env python3
"""Read a Patapon UMD dump: CSO to ISO, file extraction, and the facts phase 1 needs.

  disc.py iso <in.cso|in.iso> <out.iso>     decompress a CSO (v1, zlib) or copy an ISO
  disc.py extract <disk.iso> <outdir>       copy every file of the UMD into outdir (keeps paths)
  disc.py info <disk.iso|outdir>            game id, sizes, sha1, executable formats, redump match

Run with the project venv (pycdlib): .venv/bin/python -I tools/disc.py ...
"""
import hashlib
import os
import struct
import sys
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
REDUMP = os.path.join(HERE, "..", "config", "redump.tsv")
SECTOR = 2048


def sha1_file(path):
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for block in iter(lambda: f.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest()


def cso_to_iso(src, dst):
    with open(src, "rb") as f:
        head = f.read(24)
        if head[:4] != b"CISO":
            raise SystemExit(f"{src}: not a CSO (magic {head[:4]!r})")
        _hsize, total, block, ver, align = struct.unpack("<IQIBB", head[4:22])
        if ver > 1:
            raise SystemExit(f"{src}: CSO version {ver} is not handled (v1 only)")
        nblocks = (total + block - 1) // block
        index = struct.unpack(f"<{nblocks + 1}I", f.read(4 * (nblocks + 1)))
        tmp = dst + ".part"
        with open(tmp, "wb") as out:
            for i in range(nblocks):
                raw = index[i] & 0x7FFFFFFF
                plain = index[i] & 0x80000000
                start = raw << align
                end = (index[i + 1] & 0x7FFFFFFF) << align
                f.seek(start)
                data = f.read(end - start)
                if plain:
                    data = data[:block]
                else:
                    data = zlib.decompressobj(-15).decompress(data)
                out.write(data)
            out.truncate(total)
        os.replace(tmp, dst)


def iso_open(path):
    import pycdlib  # installed by tools/setup.sh

    iso = pycdlib.PyCdlib()
    iso.open(path)
    return iso


def walk(iso):
    for root, _dirs, files in iso.walk(iso_path="/"):
        for name in files:
            yield (root.rstrip("/") + "/" + name)


def extract(disk, outdir):
    iso = iso_open(disk)
    n = 0
    for p in walk(iso):
        clean = p.split(";")[0].lstrip("/")
        dst = os.path.join(outdir, clean)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        with open(dst, "wb") as out:
            iso.get_file_from_iso_fp(out, iso_path=p)
        n += 1
    iso.close()
    print(f"extract: {n} files into {outdir}")


def param_sfo(data):
    """PARAM.SFO key/value table (PSF v1.1)."""
    if data[:4] != b"\0PSF":
        return {}
    keys_off, data_off, count = struct.unpack("<III", data[8:20])
    out = {}
    for i in range(count):
        kofs, fmt, length, _maxlen, dofs = struct.unpack("<HHIII", data[20 + 16 * i:36 + 16 * i])
        key = data[keys_off + kofs:data.index(b"\0", keys_off + kofs)].decode()
        val = data[data_off + dofs:data_off + dofs + length]
        out[key] = struct.unpack("<I", val)[0] if fmt == 0x0404 else val.rstrip(b"\0").decode("utf-8", "replace")
    return out


def exe_kind(data):
    if not data:
        return "absent"
    if data[:4] == b"\x7fELF":
        e_type, = struct.unpack("<H", data[16:18])
        entry, = struct.unpack("<I", data[24:28])
        kind = {2: "ELF ET_EXEC", 0xFFA0: "PRX (ET 0xFFA0)"}.get(e_type, f"ELF type 0x{e_type:X}")
        return f"plain {kind}, entry 0x{entry:08X}"
    if data[:4] == b"~PSP":
        tag, = struct.unpack("<I", data[0xD0:0xD4])
        name = data[0x0A:0x0A + 28].split(b"\0")[0].decode("ascii", "replace")
        return f"encrypted ~PSP, module {name!r}, tag 0x{tag:08X}"
    if not any(data[:0x10000]):
        return "zero-filled (decrypt EBOOT.BIN instead)"
    return f"unknown (magic {data[:4].hex()})"


def redump_match(sha1):
    if not os.path.exists(REDUMP):
        return "no config/redump.tsv"
    with open(REDUMP, encoding="utf-8") as f:
        for line in f:
            if line.startswith("#") or not line.strip():
                continue
            cols = line.rstrip("\n").split("\t")
            if cols[-1] == sha1:
                return ("redump " if cols[3] != "-" else "known dump, not in redump: ") + " ".join(c for c in cols[:-2] if c != "-")
    return "no redump match"


def info(target):
    files = {}
    if os.path.isdir(target):
        for name in ("UMD_DATA.BIN", "PSP_GAME/PARAM.SFO", "PSP_GAME/SYSDIR/BOOT.BIN", "PSP_GAME/SYSDIR/EBOOT.BIN"):
            p = os.path.join(target, name)
            files[name] = open(p, "rb").read() if os.path.exists(p) else b""
    else:
        size = os.path.getsize(target)
        sha1 = sha1_file(target)
        print(f"image: {os.path.basename(target)} {size} B, {size // SECTOR} sectors, sha1 {sha1}")
        print(f"match: {redump_match(sha1)}")
        iso = iso_open(target)
        names = {p.split(";")[0].lstrip("/"): p for p in walk(iso)}
        import io
        for name in ("UMD_DATA.BIN", "PSP_GAME/PARAM.SFO", "PSP_GAME/SYSDIR/BOOT.BIN", "PSP_GAME/SYSDIR/EBOOT.BIN"):
            buf = io.BytesIO()
            if name in names:
                iso.get_file_from_iso_fp(buf, iso_path=names[name])
            files[name] = buf.getvalue()
        iso.close()
    umd = files["UMD_DATA.BIN"].split(b"|")
    if umd[0]:
        print(f"UMD_DATA.BIN: id {umd[0].decode('ascii', 'replace')}, fields {[u.decode('ascii', 'replace') for u in umd[1:]]}")
    sfo = param_sfo(files["PSP_GAME/PARAM.SFO"])
    for k in ("DISC_ID", "DISC_VERSION", "TITLE", "PSP_SYSTEM_VER", "REGION", "PARENTAL_LEVEL"):
        if k in sfo:
            print(f"PARAM.SFO {k}: {sfo[k]}")
    for name in ("PSP_GAME/SYSDIR/BOOT.BIN", "PSP_GAME/SYSDIR/EBOOT.BIN"):
        d = files[name]
        extra = f", {len(d)} B, sha1 {hashlib.sha1(d).hexdigest()}" if d else ""
        print(f"{name}: {exe_kind(d)}{extra}")


def main(argv):
    if len(argv) < 3:
        raise SystemExit(__doc__)
    cmd = argv[1]
    if cmd == "iso" and len(argv) == 4:
        with open(argv[2], "rb") as f:
            magic = f.read(4)
        if magic == b"CISO":
            cso_to_iso(argv[2], argv[3])
        else:
            import shutil
            shutil.copyfile(argv[2], argv[3])
    elif cmd == "extract" and len(argv) == 4:
        extract(argv[2], argv[3])
    elif cmd == "info" and len(argv) == 3:
        info(argv[2])
    else:
        raise SystemExit(__doc__)


if __name__ == "__main__":
    main(sys.argv)
