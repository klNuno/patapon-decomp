#include "common.h"

typedef struct {
    u8 pad_00[0x50];
} E0891E1DC;

typedef struct {
    E0891E1DC *unk_00;
    s32 unk_04;
} V0891E1DC;

typedef struct {
    u8 pad_00[0x2884];
    V0891E1DC unk_2884;
    u8 pad_288C[4];
    s32 unk_2890;
    s32 unk_2894;
    u8 pad_2898[0x28CC - 0x2898];
    s32 unk_28CC;
    u8 pad_28D0[4];
    u8 unk_28D4;
} T0891E1DC;

s32 func_0891E894(T0891E1DC *, s32);

void func_0891E1DC(T0891E1DC *arg0, volatile u16 *arg1, s32 arg2) {
    V0891E1DC *v;
    E0891E1DC *p;
    struct { s32 unk_00; } n;
    u16 c;

    p = arg0->unk_2884.unk_00;
    v = &arg0->unk_2884;
    if ((u32)p != (u32)(p + arg0->unk_2884.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_2884.unk_04);
    }
    arg0->unk_2884.unk_04 = 0;
    arg0->unk_2890 = 0;
    arg0->unk_2894 = 0;
    arg0->unk_28D4 = 0;
    n.unk_00 = 0;
    for (; *arg1 != 0; arg1++) {
        c = *arg1;
        if (c != 0x5C && c != 0x5F) {
            n.unk_00++;
        }
    }
    arg0->unk_28CC = n.unk_00 + func_0891E894(arg0, arg2);
}
