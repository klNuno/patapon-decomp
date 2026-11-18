#include "common.h"

typedef struct S {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x7C];
    s32 unk_98;
    u8 pad_9C[0x4];
    u32 unk_A0;
    u32 unk_A4;
    s32 unk_A8;
    s32 unk_AC;
    s32 unk_B0;
    u32 unk_B4;
} S;

typedef struct A {
    u8 pad_00[0x4];
    s8 *unk_04;
} A;

u8 *func_08804778(u8 *arg0, u32 *arg1);

void func_08805F0C(S *arg0, A *arg1) {
    s8 *p;
    s32 flag;
    u8 *q;

    p = arg1->unk_04;
    flag = *p & 0x40;
    arg0->unk_B0 = *p & 0x20;
    arg0->unk_AC = *p & 0x10;
    arg0->unk_A8 = *p & 0xF;
    q = func_08804778((u8 *)p + 1, &arg0->unk_A0);
    q = func_08804778(q, &arg0->unk_A4);
    if (arg0->unk_B0 != 0) {
        arg0->unk_18 = arg0->unk_98;
    } else {
        arg0->unk_18 = arg0->unk_14;
    }
    if (flag) {
        func_08804778(q, &arg0->unk_B4);
    } else {
        arg0->unk_B4 = 0;
    }
}
