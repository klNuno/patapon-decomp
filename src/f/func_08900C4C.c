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
void func_0890A5EC(f32, u8 *, f32 *);

void func_08900C4C(T_08900C4C *arg0, void *arg1) {
    O_08900C4C *o;
    s32 *a;
    union { f32 unk_00[2]; f64 unk_00_f64; } p2;
    f32 *b;
    f32 *c;
    f32 *d;
    s32 w;
    E_08900C4C *p;
    E_08900C4C *end;
    u8 *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                f32 y = *c;
                f32 x = *b;
                p2.unk_00[0] = x;
                p2.unk_00[1] = y;
                func_0890A5EC(*d, v + 0x3F0, p2.unk_00);
            }
        }
    }
    func_08852F00(arg1, 0);
}
