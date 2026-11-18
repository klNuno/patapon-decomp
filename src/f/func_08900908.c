#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} E_08900908;

typedef struct {
    u8 pad_00[0x404];
    E_08900908 *unk_404;
    s32 unk_408;
} O_08900908;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08900908;

typedef struct {
    u8 pad_00[0x10];
    W_08900908 *unk_10;
} T_08900908;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O_08900908 **);
void func_0890A3D0(u8 *, s32, s32, s32, f32, f32);

void func_08900908(T_08900908 *arg0, void *arg1) {
    O_08900908 *o;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    f32 *e;
    f32 *f;
    s32 w;
    E_08900908 *p;
    E_08900908 *end;
    u8 *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                func_0890A3D0(v + 0x3F0, *b, *c, *d, *e, *f);
            }
        }
    }
    func_08852F00(arg1, 0);
}
