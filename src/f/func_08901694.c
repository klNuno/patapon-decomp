#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
} E08901694;

typedef struct {
    u8 pad_00[0x404];
    E08901694 *unk_404;
    s32 unk_408;
} O08901694;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W08901694;

typedef struct {
    u8 pad_00[0x10];
    W08901694 *unk_10;
} T08901694;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} F08901694;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O08901694 **);
void func_088F9778(void *, F08901694 *, s32);
s32 func_088F9858(void *);

void func_08901694(T08901694 *arg0, void *arg1) {
    O08901694 *o;
    s32 *a;
    f32 *b;
    f32 *c;
    s32 w;
    E08901694 *p;
    E08901694 *end;
    void *v;
    F08901694 t;
    f32 x;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                y = *c;
                x = *b;
                t.unk_00 = x;
                t.unk_04 = y;
                func_088F9778(v, &t, func_088F9858(v));
            }
        }
    }
    func_08852F00(arg1, 0);
}
