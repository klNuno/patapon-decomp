#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} S5;

typedef struct {
    u8 pad_00[0x224];
    S5 *unk_224;
    u8 pad_228[0x18];
    s32 unk_240;
} S4;

typedef struct {
    u8 pad_00[0x6B0];
    S4 unk_6B0;
} S3;

typedef struct {
    u8 pad_00[0x3A0];
    S3 *unk_3A0;
} S2;

typedef struct {
    u8 pad_00[0x14];
    S2 *unk_14;
} S0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S1;

extern u8 *D_08AD1F14[];

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_0885AB7C(s32, s32, s32);
S1 *func_08877444(u8 *);
void func_0897664C(s32, s32);

void func_08936EC4(S0 *arg0, s32 arg1) {
    s32 *temp;
    struct { s32 unk_00; } v;
    S4 *q;

    temp = func_0885356C(arg1, 0, 1, 4);
    v.unk_00 = func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_10, 0, *temp);
    q = &arg0->unk_14->unk_3A0->unk_6B0;
    func_0897664C(q->unk_240 == 0 ? 0 : q->unk_224->unk_08, v.unk_00 + 0x100);
    func_08852F00(arg1, 0);
}
