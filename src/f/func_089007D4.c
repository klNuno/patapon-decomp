#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    u8 pad_0C[4];
} E_089007D4;

typedef struct {
    u8 pad_00[0x404];
    E_089007D4 *unk_404;
    s32 unk_408;
} O_089007D4;

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[4];
} W_089007D4;

typedef struct {
    u8 pad_00[0x10];
    W_089007D4 *unk_10;
} T_089007D4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6464(void *);
s32 func_088F8DCC(s32, s32, O_089007D4 **);
void func_0890A494(u8 *, s32, s32, s32);

void func_089007D4(T_089007D4 *arg0, void *arg1) {
    O_089007D4 *o;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 w;
    E_089007D4 *p;
    E_089007D4 *end;
    u8 *v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    w = func_088C6464(arg0->unk_10->unk_506F0);
    o = NULL;
    if (func_088F8DCC(w, *a, &o) != 0) {
        p = o->unk_404;
        end = p + o->unk_408;
        for (; p != end; p++) {
            v = p->unk_08;
            if (v != NULL) {
                func_0890A494(v + 0x3F0, *b, *c, *d != 0);
            }
        }
    }
    func_08852F00(arg1, 0);
}
