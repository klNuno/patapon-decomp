#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C, unk_10;
    u8 pad_14[0x24];
} T;

typedef struct {
    u8 pad_00[4];
    T *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[4];
    u32 unk_14;
    u8 unk_18;
} S;

typedef struct S_088BFCB4 S_088BFCB4;
typedef struct N_088BFCB4 N_088BFCB4;
void func_088BFCB4(S_088BFCB4 *, N_088BFCB4 *, s32);

void func_088BFC38(S *arg0) {
    if (arg0->unk_18 != 0) {
        T *p;
        arg0->unk_18 = 0;
        p = arg0->unk_04;
        if (p != NULL) {
            s32 i = arg0->unk_0C;
            T *q = p + i;
            u32 a, b, c;
            arg0->unk_0C = i + 1;
            a = q->unk_10;
            b = q->unk_0C;
            c = arg0->unk_14;
            func_088BFCB4((S_088BFCB4 *)arg0, (N_088BFCB4 *)q, ((a & 3) + b * 4) % c);
        }
    }
}
