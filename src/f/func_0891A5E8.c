#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x64C];
    s32 unk_654;
    f32 unk_658;
    u8 pad_65C[0x1C];
    u8 unk_678[0x20B0];
    u8 unk_2728, unk_2729, unk_272A;
    u8 pad_272B;
    u8 unk_272C;
} S;

extern f32 D_08A00984[], D_08A00988[];

s32 func_0887EDA8(s32, s32);
s32 func_0887ED98(s32, s32);
void func_089261F8(void *, s32);

s32 func_0891A5E8(S *arg0, s32 arg1) {
    f32 a, b, c, d;
    f32 *p;
    f32 t = 25.0f;

    if (!arg0->unk_272A) {
        return 0;
    }
    if (func_0887EDA8(arg0->unk_04, 0x6000) != 0) {
        arg0->unk_272C = 1;
    }
    b = t * (f32)(arg0->unk_654 - 5);
    if (D_08A00984[0] < b) {
        p = &b;
    } else {
        p = D_08A00984;
    }
    a = -*p;
    if ((u32)arg0->unk_654 > 5U) {
        arg0->unk_2728 = arg0->unk_658 < -12.5f;
        arg0->unk_2729 = arg0->unk_658 - a > 12.5f;
    }
    if (func_0887ED98(arg0->unk_04, 0x10) != 0) {
        c = 25.0f + arg0->unk_658;
        if (D_08A00988[0] < c) {
            p = D_08A00988;
        } else {
            p = &c;
        }
        arg0->unk_658 = *p;
    }
    if (func_0887ED98(arg0->unk_04, 0x40) != 0) {
        d = arg0->unk_658 - 25.0f;
        if (d < a) {
            p = &a;
        } else {
            p = &d;
        }
        arg0->unk_658 = *p;
    }
    func_089261F8(arg0->unk_678, arg1);
    return 0;
}
