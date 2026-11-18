#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} E_08903F60;

typedef struct {
    u8 pad_00[0x404];
    E_08903F60 *unk_404;
    s32 unk_408;
} O_08903F60;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_08903F60;

typedef struct {
    u8 pad_00[0x10];
    W_08903F60 *unk_10;
} T_08903F60;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O_08903F60 **);
void func_088F9D48(u8 *, s32, f32);

void func_08903F60(T_08903F60 *arg0, void *arg1) {
    O_08903F60 *o;
    s32 *a;
    s32 *b;
    f32 *c;
    s32 w;
    E_08903F60 *p;
    E_08903F60 *end;
    u8 *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                func_088F9D48(v, *b, *c);
            }
        }
    }
    func_08852F00(arg1, 0);
}
