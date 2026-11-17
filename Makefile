# patapon-decomp: matching decompilation of Patapon (PSP). The game and region come from the dump.
#   make check-disk  turn the dump in disks/ into extract/, print its ids, check it against redump and config/
#   make split       regenerate asm/$(VERSION)/ and build/$(VERSION)/boot.ld with splat from config/$(VERSION)/splat.boot.yaml
#   make check       assemble and link build/$(VERSION)/BOOT.BIN and compare its sha1 with the retail one
#   make clean       remove build/$(VERSION)/; make distclean also removes extract/, asm/, orig/

SHELL       := /bin/bash
.SHELLFLAGS := -eo pipefail -c
MAKEFLAGS   += --no-builtin-rules
.SUFFIXES:

# Serial of the dump in disks/ (UCES-00995, UCUS-98711, UCJS-10077, ...): config/VERSION.
VERSION ?= $(strip $(shell cat config/VERSION 2>/dev/null))
DISK    ?= $(firstword $(wildcard disks/*.iso disks/*.ISO disks/*.cso disks/*.CSO))
EXTRACT := extract
BUILD   := build/$(VERSION)
PYTHON  := .venv/bin/python -I
# psp-decomp-tools import their siblings from the script's folder, which -I would drop
TOOLPY  := .venv/bin/python
CONFIG  := config/$(VERSION)
SPLAT   := $(CONFIG)/splat.boot.yaml
EXE     := $(EXTRACT)/PSP_GAME/SYSDIR/BOOT.BIN
ORIG    := orig/$(VERSION)/BOOT.BIN
CROSS   := $(if $(wildcard tools/bin/mipsel-linux-gnu-as),tools/bin/,)mipsel-linux-gnu-
AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy
PSPTOOLS := tools/src/psp-decomp-tools

ASFLAGS  := -march=allegrex -mabi=32 -EL -G0 -no-pad-sections -Iinclude
LDSCRIPT := $(BUILD)/boot.ld
UNDEF    := $(BUILD)/undefined_syms_auto.txt $(BUILD)/undefined_funcs_auto.txt

.PHONY: all check split check-disk extract orig link clean distclean
.DELETE_ON_ERROR:

all: $(BUILD)/BOOT.BIN

# The UMD image: a CSO is decompressed once into build/disk.iso (git-ignored, about 350 to 600 MB).
build/disk.iso: $(DISK)
	@test -n "$(DISK)" || { echo "no dump: put your own UMD image (.iso or .cso) in disks/ (see disks/README.md)"; exit 1; }
	@mkdir -p $(@D)
	$(PYTHON) tools/disc.py iso "$<" $@

extract: $(EXTRACT)/PSP_GAME/PARAM.SFO

$(EXTRACT)/PSP_GAME/PARAM.SFO: build/disk.iso
	rm -rf $(EXTRACT)
	$(PYTHON) tools/disc.py extract $< $(EXTRACT)

check-disk: extract
	$(PYTHON) tools/disc.py info build/disk.iso
	@if [ -f $(CONFIG)/BOOT.BIN.sha1 ]; then echo "$$(cat $(CONFIG)/BOOT.BIN.sha1)  $(EXE)" | sha1sum -c -; \
	 else echo "no config/<serial>/BOOT.BIN.sha1 yet (VERSION=$(VERSION))"; fi

# The retail executable the split reads, checked against config/<serial>/BOOT.BIN.sha1 first.
orig: $(ORIG)

$(ORIG): | extract
	@test -f "$(CONFIG)/BOOT.BIN.sha1" || { echo "no $(CONFIG)/BOOT.BIN.sha1 (VERSION=$(VERSION))"; exit 1; }
	echo "$$(cat $(CONFIG)/BOOT.BIN.sha1)  $(EXE)" | sha1sum -c -
	@mkdir -p $(@D)
	cp $(EXE) $@

# splat writes asm/$(VERSION)/, the linker script, the undefined symbol lists and the ELF header
# and section header blobs (build/$(VERSION)/bin/, cut from the dump at split time).
split: $(LDSCRIPT)

$(LDSCRIPT): $(SPLAT) $(CONFIG)/symbol_addrs.boot.txt $(ORIG)
	@test -n "$(VERSION)" || { echo "no VERSION (config/VERSION)"; exit 1; }
	rm -rf asm/$(VERSION) $(BUILD)
	.venv/bin/python -m splat split $(SPLAT)

# The whole file, ELF header and section headers included, is laid out by the linker script at its
# file offsets (AT), so objcopy -O binary gives BOOT.BIN back byte for byte.
check: $(BUILD)/BOOT.BIN
	echo "$$(cat $(CONFIG)/BOOT.BIN.sha1)  $<" | sha1sum -c -

$(BUILD)/BOOT.BIN: $(LDSCRIPT)
	+$(MAKE) --no-print-directory link

ifneq ($(wildcard $(LDSCRIPT)),)
OBJS := $(shell grep -oE 'build/[^ ()]+\.o' $(LDSCRIPT) | sort -u)
endif

link: $(BUILD)/boot.elf
	$(OBJCOPY) -O binary $< $(BUILD)/BOOT.BIN

$(BUILD)/boot.elf: $(OBJS) $(LDSCRIPT) $(UNDEF)
	$(LD) -EL $(foreach u,$(UNDEF),-T $(u)) -T $(LDSCRIPT) -Map $(@:.elf=.map) -o $@

$(BUILD)/asm/%.s.o: asm/%.s
	$(TOOLPY) $(PSPTOOLS)/assemble.py $(AS) $< $@ $(ASFLAGS)

$(BUILD)/bin/%.bin.o: $(BUILD)/bin/%.bin
	$(OBJCOPY) -I binary -O elf32-tradlittlemips -B mips $< $@

clean:
	rm -rf build/$(VERSION)

distclean:
	rm -rf build $(EXTRACT) asm linker orig

print-%:
	@echo '$($*)'
