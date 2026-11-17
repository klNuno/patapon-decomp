# patapon-decomp: matching decompilation of Patapon (PSP). The game and region come from the dump.
#   make check-disk  turn the dump in disks/ into extract/, print its ids, check it against redump and config/
#   make split       regenerate asm/ and linker/ with splat from config/$(VERSION)/splat.boot.yaml
#   make check       build build/$(VERSION)/BOOT.BIN and compare its sha1 with the retail one
#   make clean       remove build/; make distclean also removes extract/, asm/, linker/

SHELL       := /bin/bash
.SHELLFLAGS := -eo pipefail -c

# Serial of the dump in disks/ (UCES-00995, UCUS-98711, UCJS-10077, ...): config/VERSION, written in phase 1.
VERSION ?= $(strip $(shell cat config/VERSION 2>/dev/null))
DISK    ?= $(firstword $(wildcard disks/*.iso disks/*.ISO disks/*.cso disks/*.CSO))
EXTRACT := extract
BUILD   := build/$(VERSION)
PYTHON  := .venv/bin/python -I
CONFIG  := config/$(VERSION)
SPLAT   := $(CONFIG)/splat.boot.yaml
EXE     := $(EXTRACT)/PSP_GAME/SYSDIR/BOOT.BIN
CROSS   := $(if $(wildcard tools/bin/mipsel-linux-gnu-as),tools/bin/,)mipsel-linux-gnu-
AS      := $(CROSS)as
LD      := $(CROSS)ld
PSPTOOLS := tools/src/psp-decomp-tools

ASFLAGS := -march=allegrex -mabi=eabi -EL -G0 -no-pad-sections -Iinclude

.PHONY: all check split check-disk extract clean distclean
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
	 else echo "no config/<serial>/BOOT.BIN.sha1 yet (VERSION=$(VERSION)): phase 1 records it"; fi

split: $(SPLAT) | extract
	@test -f "$(SPLAT)" || { echo "no $(SPLAT): phase 1 writes it"; exit 1; }
	rm -rf asm linker
	.venv/bin/python -m splat split $(SPLAT)

# Phase 1 adds the build: splat's linker script, assemble.py for the VFPU words, then the ELF rebuilt
# around the linked sections. Until then check says what is missing instead of passing.
check: $(BUILD)/BOOT.BIN
	echo "$$(cat $(CONFIG)/BOOT.BIN.sha1)  $<" | sha1sum -c -

$(BUILD)/BOOT.BIN:
	@echo "no build rule yet for $(VERSION): phase 1 (asm-only rebuild) adds it"; exit 1

clean:
	rm -rf build/$(VERSION)

distclean:
	rm -rf build $(EXTRACT) asm linker

print-%:
	@echo '$($*)'
