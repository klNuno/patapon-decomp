#!/usr/bin/env bash
# Install the pinned decomp toolchain into tools/ and .venv/. Safe to re-run, and after moving the checkout.
#   tools/setup.sh          install, verified against tools/toolchain.sha256 and tools/requirements.lock
#   tools/setup.sh --lock   rewrite both lock files first (only when bumping tools/versions.env)
set -euo pipefail
cd "$(dirname "$0")/.."
T=tools
LOCK=0
if [ "${1:-}" = "--lock" ]; then LOCK=1; fi
# shellcheck source=versions.env
. "$T/versions.env"
mkdir -p "$T/dl" "$T/bin" "$T/src" "$T/compilers"

fetch() { # url file
  local f="$T/dl/$2"
  if [ ! -f "$f" ]; then curl -fsSL --retry 3 -o "$f.part" "$1"; mv "$f.part" "$f"; fi
}

git_pin() { # url rev name
  local d="$T/src/$3"
  if [ ! -d "$d/.git" ]; then git clone -q "$1" "$d"; fi
  if ! git -C "$d" cat-file -e "$2^{commit}" 2>/dev/null; then git -C "$d" fetch -q origin; fi
  git -C "$d" -c advice.detachedHead=false checkout -q "$2"
}

# MIPS binutils: the system's (apt install binutils-mipsel-linux-gnu), else Debian's package unpacked
# into tools/binutils/ with wrappers in tools/bin/ (no root needed). The Makefile prefers the wrappers.
if ! command -v mipsel-linux-gnu-as >/dev/null || [ -x "$T/bin/mipsel-linux-gnu-as" ]; then
  fetch "https://deb.debian.org/debian/$BINUTILS_DEB" "$(basename "$BINUTILS_DEB")"
  if [ ! -x "$T/binutils/usr/bin/mipsel-linux-gnu-as" ]; then
    tmp=$(mktemp -d)
    (cd "$tmp" && ar x "$OLDPWD/$T/dl/$(basename "$BINUTILS_DEB")" && mkdir root && tar -xf data.tar.* -C root)
    rm -rf "$T/binutils"; mv "$tmp/root" "$T/binutils"; rm -rf "$tmp"
  fi
  # The cross binutils link the host's libsframe.so.1, which a system without binutils lacks.
  if [ ! -e "$T/binutils/usr/lib/x86_64-linux-gnu/libsframe.so.1" ]; then
    ver=$(basename "$BINUTILS_DEB" | sed -E 's/^binutils-mipsel-linux-gnu_([0-9.]+-[0-9]+)cross.*/\1/')
    fetch "https://deb.debian.org/debian/pool/main/b/binutils/libsframe1_${ver}_amd64.deb" "libsframe1_${ver}_amd64.deb"
    tmp=$(mktemp -d)
    (cd "$tmp" && ar x "$OLDPWD/$T/dl/libsframe1_${ver}_amd64.deb" && mkdir root && tar -xf data.tar.* -C root)
    cp -a "$tmp"/root/usr/lib/x86_64-linux-gnu/libsframe.so.1* "$T/binutils/usr/lib/x86_64-linux-gnu/"; rm -rf "$tmp"
  fi
  for b in as ld objcopy objdump nm readelf; do
    printf '#!/bin/sh\nd=$(dirname "$(readlink -f "$0")")/../binutils/usr\nLD_LIBRARY_PATH="$d/lib/x86_64-linux-gnu${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}" exec "$d/bin/mipsel-linux-gnu-%s" "$@"\n' "$b" > "$T/bin/mipsel-linux-gnu-$b"
    chmod 755 "$T/bin/mipsel-linux-gnu-$b"
  done
fi

# Compiler kits and objdiff, checked by sha256
for k in $DECOMPME_KITS $MWCCPSP_KITS; do fetch "https://github.com/decompme/compilers/releases/download/compilers/$k.tar.gz" "$k.tar.gz"; done
fetch "https://github.com/decompals/wibo/releases/download/$WIBO_TAG/wibo-x86_64" "wibo-x86_64-$WIBO_TAG"
fetch "https://github.com/encounter/objdiff/releases/download/$OBJDIFF_TAG/objdiff-cli-linux-x86_64" objdiff-cli-linux-x86_64
fetch "https://deb.debian.org/debian/$LIBC6_I386_DEB" "$(basename "$LIBC6_I386_DEB")"
if [ $LOCK = 1 ]; then sha256sum "$T"/dl/* > "$T/toolchain.sha256"; fi
sha256sum -c --quiet "$T/toolchain.sha256"

for k in $DECOMPME_KITS $MWCCPSP_KITS; do
  d="$T/compilers/$k"
  if [ ! -d "$d" ]; then mkdir -p "$d"; tar -xzf "$T/dl/$k.tar.gz" -C "$d"; fi
done
install -m 755 "$T/dl/objdiff-cli-linux-x86_64" "$T/bin/objdiff-cli"
install -m 755 "$T/dl/wibo-x86_64-$WIBO_TAG" "$T/bin/wibo"
# tools/bin/i386-run <program> [args]: runs a 32-bit x86 program (the psp-gcc kits' cc1) through the unpacked loader
if [ ! -e "$T/i386/usr/lib/ld-linux.so.2" ]; then
  tmp=$(mktemp -d)
  (cd "$tmp" && ar x "$OLDPWD/$T/dl/$(basename "$LIBC6_I386_DEB")" && mkdir root && tar -xf data.tar.* -C root)
  rm -rf "$T/i386"; mv "$tmp/root" "$T/i386"; rm -rf "$tmp"
fi
printf '#!/bin/sh\nd=$(dirname "$(readlink -f "$0")")/../i386/usr/lib\nexec "$d/ld-linux.so.2" --library-path "$d/i386-linux-gnu" "$@"\n' > "$T/bin/i386-run"
chmod 755 "$T/bin/i386-run"

# Source tools, pinned by commit
git_pin https://github.com/YggdrasziI/psp-decomp-tools "$PSP_DECOMP_TOOLS_REV" psp-decomp-tools
git_pin https://github.com/matt-kempster/m2c "$M2C_REV" m2c
git_pin https://github.com/simonlindholm/decomp-permuter "$PERMUTER_REV" decomp-permuter
git_pin https://github.com/simonlindholm/asm-differ "$ASM_DIFFER_REV" asm-differ

# Python: splat, pycdlib and the helpers of m2c, permuter and asm-differ.
# A venv keeps absolute paths: one made for another python3 or another checkout path is rebuilt.
want="$(command -v python3) $PWD"
if [ -e .venv ] && [ "$(cat .venv/.made-for 2>/dev/null)" != "$want" ]; then
  echo "setup: .venv was made for another python3 or path, rebuilding it"; rm -rf .venv
fi
if [ ! -x .venv/bin/python ]; then python3 -m venv .venv; echo "$want" > .venv/.made-for; fi
if [ $LOCK = 1 ]; then
  .venv/bin/python -m pip install -q -r "$T/requirements.in"
  .venv/bin/python -m pip freeze > "$T/requirements.lock"
fi
.venv/bin/python -m pip install -q -r "$T/requirements.lock"

echo "== toolchain"
if [ -x "$T/bin/mipsel-linux-gnu-as" ]; then AS="$T/bin/mipsel-linux-gnu-as"; else AS=mipsel-linux-gnu-as; fi
"$AS" --version | head -1
printf 'allegrex: '; printf 'ext $2,$3,4,8\n' | "$AS" -march=allegrex -o /dev/null - && echo ok
probe=$(mktemp --suffix=.c); printf 'int f(int a, int b) { return a * b + 3; }\n' > "$probe"
for k in $DECOMPME_KITS $MWCCPSP_KITS; do
  cc1=$(find "$T/compilers/$k" -path '*gcc-lib*' -name cc1 -type f | head -1)
  exe=$(find "$T/compilers/$k" -maxdepth 1 \( -iname pspsnc.exe -o -iname mwccpsp.exe \) | head -1)
  if [ -n "$cc1" ]; then
    printf '%s: ' "$k"; "$T/bin/i386-run" "$cc1" -quiet -O2 -G0 "$probe" -o - | grep -c '^[[:space:]]*[a-z]' | sed 's/$/ asm lines from a probe/'
  elif [ -n "$exe" ]; then
    # Windows kit: compile the probe to an object under wibo; "runs" or the exact error
    obj="${probe%.c}.o"; rm -f "$obj"
    if out=$("$T/bin/wibo" "$exe" -c -O2 -o "$obj" "$probe" 2>&1) && [ -s "$obj" ]; then
      echo "$k: runs (wibo $WIBO_TAG, $(basename "$exe"))"
    else
      echo "$k: fails under wibo $WIBO_TAG: $(printf '%s' "$out" | tr '\n' ' ' | cut -c1-200)"
    fi
    rm -f "$obj"
  else
    echo "$k: no compiler found in $T/compilers/$k"
  fi
done
rm -f "$probe"
"$T/bin/objdiff-cli" --version
.venv/bin/python -c 'import importlib.metadata as m; print("splat64", m.version("splat64"), "spimdisasm", m.version("spimdisasm"), "pycdlib", m.version("pycdlib"))'
echo "setup ok"
