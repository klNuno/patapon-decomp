#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} P;

typedef struct {
    u8 pad_00[0x14];
    P *unk_14;
} T;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} A;

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
} R;

typedef struct {
    u8 pad_00[0x14CC];
    u8 unk_14CC;
} Q;

typedef struct {
    u8 pad_00[0x2A];
    s16 unk_2A;
} S;

extern u8 *D_08AD1F14[];
void func_08852F00(void *, s32);
u8 func_088533F8(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
R *func_0885AB7C(s32, s32, s32);
A *func_08877444(u8 *);
Q *func_08894FBC(s32, s32, s32);
S *func_08895090(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088E7BCC(T *arg0, void *arg1)
{
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    u8 f;
    P *p;
    s32 n;
    s32 e;
    s32 x;
    u8 *g;
    Q *r;
    S *s;
    R *t;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    f = func_088533F8(arg1, 3);
    p = arg0->unk_14;
    if (p != NULL) {
        n = *a;
        switch (n) {
        case 0:
            break;
        case 1:
        case 2:
            e = 0;
            if (n == 2) {
                e = 1;
            }
            r = func_08894FBC(func_08899E18(p->unk_36B10, e), *b, 0);
            if (r != NULL) {
                switch (*c) {
                case 0:
                    if (f & 0x70) {
                        x = (s32)*(f32 *)d;
                    } else {
                        x = *d;
                    }
                    r->unk_14CC = x != 0;
                    break;
                case 1:
                    s = func_08895090(func_08899E18(arg0->unk_14->unk_36B10, e), *b, 0);
                    if (s != NULL) {
                        if (f & 0x70) {
                            x = (s32)*(f32 *)d;
                        } else {
                            x = *d;
                        }
                        s->unk_2A = (s16)x;
                    }
                    break;
                }
            }
            break;
        case 3:
            break;
        case 4:
            g = D_08AD1F14[0];
            t = func_0885AB7C(func_08877444(g != NULL ? g : NULL)->unk_1C, 0, 0);
            switch (*c) {
            case 0:
                if (f & 0x70) {
                    y = *(f32 *)d;
                } else {
                    y = (f32)*d;
                }
                t->unk_40 = y;
                break;
            }
            break;
        }
    }
    func_08852F00(arg1, 0);
}
