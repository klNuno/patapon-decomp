#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} E_08900C4C;

typedef struct {
    u8 pad_00[0x404];
    E_08900C4C *unk_404;
    s32 unk_408;
} O_08900C4C;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08900C4C;

typedef struct {
    u8 pad_00[0x10];
    W_08900C4C *unk_10;
} T_08900C4C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O_08900C4C **);
void func_0890A2EC(u8 *, s32, s32, s32, f32, f32 *, s32);

void func_08900A80(T_08900C4C *arg0, void *arg1) {
    O_08900C4C *o;
    union { f32 unk_00[2]; f64 unk_00_f64; } v;
    s32 *h;
    s32 *d;
    s32 *c;
    s32 *b;
    s32 *a;
    f32 *e;
    f32 *f;
    f32 *g;
    s32 w;
    E_08900C4C *p;
    E_08900C4C *end;
    u8 *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = (f32 *)func_0885356C(arg1, 6, 1, 4);
    h = func_0885356C(arg1, 7, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            q = p->unk_08;
            if (q != NULL) {
                f32 y = *f;
                f32 x = *e;
                v.unk_00[0] = x;
                v.unk_00[1] = y;
                func_0890A2EC(q + 0x3F0, *b, *c, *d, *g, v.unk_00, *h != 0);
            }
        }
    }
    func_08852F00(arg1, 0);
}
