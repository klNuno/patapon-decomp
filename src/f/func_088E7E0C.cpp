#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual s32 unk_0C();
};

struct U {
    u8 pad_00[0xD80];
    f32 unk_D80;
    f32 unk_D84;
};

struct W {
    u8 pad_00[8];
    U **unk_08;
};

struct Q {
    u8 pad_00[0x3B0];
    V unk_3B0;
    u8 pad_3B4[0x25C];
    W *unk_610;
};

struct R {
    u8 pad_00[0x50];
    f32 unk_50;
    f32 unk_54;
};

struct T {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
};

struct S {
    u8 pad_00[0x14];
    T *unk_14;
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, u32);
extern s32 func_08894FBC(s32, s32, s32);
R *func_08895090(s32, s32, s32);

void func_088E7E0C(S *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    f32 *e;
    f32 *f;
    Q *q;
    T *temp;
    U *u;
    R *r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    *c = 0;
    *d = 0;
    temp = arg0->unk_14;
    if (temp != NULL) {
        q = (Q *)func_08894FBC(func_08899E18(temp->unk_36B10, *a), *b, 0);
        if (q != NULL) {
            if (q->unk_3B0.unk_0C() > 0) {
                u = *q->unk_610->unk_08;
                if (u != NULL) {
                    *c = 1;
                    *d = 1;
                    *e = u->unk_D80;
                    *f = u->unk_D84;
                }
            }
        } else {
            r = func_08895090(func_08899E18(arg0->unk_14->unk_36B10, *a), *b, 1);
            if (r != NULL) {
                *c = 1;
                *e = r->unk_54;
                *f = r->unk_50;
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
