#include "common.h"

typedef struct {
    u8 pad_00[0x22178];
    u8 unk_22178[5];
    u8 unk_2217D;
} W_08951110;

typedef struct {
    s32 unk_00;
    W_08951110 *unk_04;
    u8 pad_08[0x1E8 - 0x8];
    u32 unk_1E8;
    u8 pad_1EC[0x31D - 0x1EC];
    u8 unk_31D;
    u8 pad_31E[0x25CC - 0x31E];
    u8 unk_25CC[4];
} T_08951110;

s32 func_08879AF4(s32);
u32 func_0887B068(s32);
s32 func_0887B024(s32);
void func_08951208(T_08951110 *, s32, u32, s32);
void func_08950C88(T_08951110 *, u32, s32);
void func_088A3CB4(void *);

void func_08951110(T_08951110 *arg0, s32 arg1) {
    s32 i;
    u32 a;
    s32 b;

    i = func_08879AF4(arg1);
    if (i >= 0 && arg0->unk_04->unk_22178[i] != 0) {
        i = -1;
    }
    if (arg0->unk_04->unk_2217D == 0) {
        i = -1;
    }
    if (arg0->unk_31D != 0) {
        i = -1;
    }
    a = func_0887B068(arg0->unk_00);
    b = func_0887B024(arg0->unk_00);
    func_08951208(arg0, i, a, b);
    func_08950C88(arg0, a, b);
    if (arg0->unk_1E8 + 0x10 <= a) {
        func_088A3CB4(arg0->unk_25CC);
        arg0->unk_1E8 = a;
    }
}
