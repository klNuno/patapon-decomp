#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} V_088E6BDC;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E6BDC;

typedef struct {
    u8 pad_00[0x14];
    W_088E6BDC *unk_14;
} A_088E6BDC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088901E4(s32, V_088E6BDC *);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088E6BDC(A_088E6BDC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 *g;
    W_088E6BDC *w;
    s32 r;
    V_088E6BDC v;
    u8 *p;
    s32 n;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && !(*a != 0 && *a != 1)) {
        r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (r != 0) {
            p = (u8 *)&v;
            n = 0x14;
            if (p != NULL) {
                do {
                    *p++ = 0;
                } while (--n);
            }
            v.unk_00 = *c;
            v.unk_04 = *d;
            v.unk_08 = *e;
            v.unk_0C = *f;
            v.unk_10 = *g;
            func_088901E4(r, &v);
        }
    }
    func_08852F00(arg1, 0);
}
