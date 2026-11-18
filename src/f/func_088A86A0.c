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
    u8 pad_00[0x10];
    s32 unk_10;
} S1;

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
} R;

typedef struct {
    S2 *unk_00;
    s32 unk_04;
    u8 pad_08[0x48];
    R *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
} S0;

extern u8 *D_08AD1F14[];

R *func_0885AB7C(s32, s32, s32);
S1 *func_08877444(u8 *);
void func_0897664C(s32, s32);
void func_0888FC44(S3 *, s32);
s32 func_088A87C4(S0 *);

s32 func_088A86A0(S0 *arg0, s32 arg1, s32 arg2) {
    struct { s32 unk_00; } temp;
    S4 *q;

    if (arg1 != arg0->unk_04 || arg2 != 0) {
        arg0->unk_04 = arg1;
        arg0->unk_54 = 0;
        arg0->unk_58 = 0;
        arg0->unk_5C = 0;
        arg0->unk_60 = 0;
        arg0->unk_64 = 0;
        arg0->unk_68 = 0;
        arg0->unk_6C = -1;
        if (arg1 == 4) {
            if (arg0->unk_00 != NULL) {
                func_0888FC44(arg0->unk_00->unk_3A0, 1);
            }
        } else {
            if (arg0->unk_00 != NULL) {
                func_0888FC44(arg0->unk_00->unk_3A0, 0);
            }
        }
        temp.unk_00 = func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_10;
        arg0->unk_50 = func_0885AB7C(temp.unk_00, 0, func_088A87C4(arg0));
        if (arg0->unk_50 == NULL) {
            return 0;
        }
        arg0->unk_54 = arg0->unk_50->unk_40;
        if (arg0->unk_00 != NULL) {
            q = &arg0->unk_00->unk_3A0->unk_6B0;
            func_0897664C(q->unk_240 == 0 ? 0 : q->unk_224->unk_08, (s32)arg0->unk_50 + 0x100);
        }
        return 1;
    }
    return 0;
}
