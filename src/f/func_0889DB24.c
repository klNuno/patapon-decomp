#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
} T_0889DB24;

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[0x40C - 0x60];
    s32 unk_40C;
} U_0889DB24;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0x3C];
} R_0889DB24;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} S_0889DB24;

extern u8 *D_08AD1F14[];
R_0889DB24 *func_0885AB7C(s32, s32, s32);
S_0889DB24 *func_08877444(u8 *);

s32 func_0889DB24(T_0889DB24 *arg0, U_0889DB24 *arg1, s32 *arg2, s32 *arg3, u8 *arg4, u8 *arg5) {
    s32 r;
    s32 b;
    s32 a;
    s32 c;
    R_0889DB24 *q;

    if (arg0->unk_00 > 0) {
        r = 0;
        if (arg0->unk_05 != 0 && arg0->unk_00 > 0) {
            arg0->unk_05 = 0;
            b = *arg3;
            a = arg1->unk_40C;
            q = func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_0C, 0, 0);
            if (((R_0889DB24 *)((u8 *)q + (b << 7)))->unk_40 <= ((R_0889DB24 *)((u8 *)q + (a << 7)))->unk_40) {
                *arg5 = 1;
            }
        } else if (arg0->unk_00 <= 0) {
            r = 1;
        } else if (arg1->unk_4C == arg0->unk_00) {
            c = arg1->unk_5C <= arg1->unk_54;
            if (c) {
                c = !arg1->unk_50;
            }
            if (c) {
                if (arg0->unk_06 != 0) {
                    return 1;
                }
                arg0->unk_00 = -1;
                r = 1;
            }
        }
        if (r == 0) {
            *arg2 = arg0->unk_00;
            *arg4 = arg0->unk_04;
        }
    }
    return 0;
}
