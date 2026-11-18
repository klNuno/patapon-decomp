#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} S0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S1;

typedef struct {
    u8 pad_00[0x92E4];
    s32 unk_92E4;
} S2;

typedef struct {
    u8 pad_00[0x3A0];
    S2 *unk_3A0;
    u8 pad_3A4[0x9FC];
    S0 *unk_DA0;
    u8 pad_DA4[0x710];
    S1 *unk_14B4;
} S3;

typedef struct {
    u8 pad_00[0x3A0];
    S3 *unk_3A0;
} S4;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
} S5;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} S6;

typedef struct {
    u8 pad_00[0x5C];
    f32 unk_5C;
} S7;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} S8;

extern u8 *D_08AD1F14[];
extern u8 D_08AD2504[];
extern s32 func_0885AB7C(s32, s32, s32);
S8 *func_08877444(u8 *);
s32 func_0889E854(s32, S4 *, S5 *, S6 *, f32);
void func_0889E7E0(s32, S4 *, S5 *, S6 *, S6 *, f32);

s32 func_0889E398(s32 arg0, S4 *arg1, S5 *arg2, S6 *arg3) {
    S6 a, b;
    s32 c;
    S3 *p;
    S1 *q;
    s32 n;
    f32 x;
    s32 k;
    u8 *g;

    p = arg1->unk_3A0;
    k = 0;
    if (p != NULL && p->unk_DA0 != NULL && p->unk_DA0->unk_04 == 0) {
        k = 1;
    }
    if (arg2 != NULL) {
        arg3->unk_00 = arg2->unk_10;
        arg3->unk_04 = 1;
        n = p->unk_3A0->unk_92E4;
        g = D_08AD1F14[0];
        g = g != NULL ? g : NULL;
        x = ((S7 *)func_0885AB7C(func_08877444(g)->unk_1C, 1, n))->unk_5C;
        c = (u8)func_0889E854(arg0, arg1, arg2, arg3, x);
        q = arg1->unk_3A0->unk_14B4;
        if (q != NULL && q->unk_10 >= 0) {
            c = q->unk_10 != 0;
        }
        if (D_08AD2504[0] != 0 || (c != 0 && k == 0)) {
            arg3->unk_04 = 2;
        } else {
            switch (arg2->unk_18) {
            case 1:
                a.unk_00 = 0;
                a.unk_04 = 0;
                func_0889E7E0(arg0, arg1, arg2, arg3, &a, x);
                break;
            case 0:
                b.unk_00 = 0;
                b.unk_04 = 0;
                func_0889E7E0(arg0, arg1, arg2, arg3, &b, x);
                break;
            }
            arg3->unk_04 = 1;
        }
    }
    return 1;
}
