#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    u32 unk_38;
} S_08955DEC_B;

typedef struct {
    u8 pad_00[0xAE8];
} S_08955DEC_8;

typedef struct {
    u8 pad_00[0x8];
    S_08955DEC_8 unk_08;
    u8 unk_AF0[0x1260];
    u8 unk_1D50[0x25C4];
    u32 unk_4314;
    u8 pad_4318[0xA8];
    u8 unk_43C0[0x1DCA0];
    u8 unk_22060[0x124];
    s32 unk_22184;
} S_08955DEC;

u32 func_0887AFCC(void *);
u32 func_0887A6EC(void *, u32);
void func_08951BC4(void *);
s32 func_0888AA98(void *);
S_08955DEC_B *func_0888AAA0(void *);
s32 func_0887AEC0(void *);
void func_0894DAC8(void *, u32);
s32 func_0894BDF4(void *);
void func_08953378(void *, u32, s32);
void func_089530CC(void *, u32, s32);

void func_08955DEC(S_08955DEC *arg0, void *arg1) {
    u32 n;

    func_08951BC4(arg0->unk_1D50);
    if (func_0888AA98(arg1) == 1) {
        return;
    }
    if (func_0888AAA0(arg1) == NULL) {
        return;
    }
    if (func_0888AAA0(arg1)->unk_38 & 2) {
        return;
    }
    n = func_0887AFCC(&arg0->unk_08);
    n *= func_0887AEC0(&arg0->unk_08);
    func_0894DAC8(arg0->unk_43C0, func_0887A6EC(&arg0->unk_08, n - (func_0887AFCC(&arg0->unk_08) >> 1)));
    if (arg0->unk_4314 > 1U) {
        if (func_0894BDF4(arg0->unk_22060) == 2) {
            func_08953378(arg0->unk_AF0, arg0->unk_4314, 1);
        } else {
            func_089530CC(arg0->unk_AF0, arg0->unk_4314, 0);
        }
    }
    arg0->unk_22184 = 4;
}
