#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    u8 unk_0C;
} P;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x58];
    u8 unk_80;
} S;

extern s32 D_089E9648[];
extern s32 D_089E9664[];
extern s32 D_089E9680[];
extern s32 D_089E969C[];
extern s32 *D_08A04308[];
extern s8 D_08AD9BFC[];
extern P D_08AD9C00[];

void func_08899DAC(s32, P *, s32);

void func_0894DE7C(S *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4) {
    s32 *t;

    if (arg0->unk_80 != 0) {
        if (arg1 >= 2) {
            t = D_089E969C;
            D_08A04308[0] = t;
        } else {
            t = D_089E9680;
            D_08A04308[0] = t;
        }
    } else if (arg1 >= 2) {
        t = D_089E9664;
        D_08A04308[0] = t;
    } else {
        t = D_089E9648;
        D_08A04308[0] = t;
    }
    t = (s32 *)t[arg2];
    if (D_08AD9BFC[0] == 0) {
        D_08AD9C00[0].unk_00 = -1;
        D_08AD9C00[0].unk_04 = 0.5f;
        D_08AD9C00[0].unk_08 = 0;
        D_08AD9C00[0].unk_0C = 0;
        D_08AD9BFC[0] = 1;
    }
    D_08AD9C00[0].unk_00 = (s32)t;
    D_08AD9C00[0].unk_04 = arg3;
    D_08AD9C00[0].unk_08 = arg4;
    if (arg0->unk_24 != 0) {
        func_08899DAC(arg0->unk_24, D_08AD9C00, 0);
    }
}
