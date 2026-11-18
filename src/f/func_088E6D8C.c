#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} T_088E6D8C;

typedef struct {
    u8 pad_00[0xDA0];
    T_088E6D8C *unk_DA0;
} U_088E6D8C;

typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
} S_088E6D8C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
U_088E6D8C *func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088E6D8C(S_088E6D8C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 *g;
    U_088E6D8C *u;
    T_088E6D8C *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    if (arg0->unk_14 != NULL && !(*a != 0 && *a != 1)) {
        u = func_08894FBC(func_08899E18(*(s32 *)(arg0->unk_14 + 0x36B10), *a), *b, 1);
        if (u != NULL) {
            t = u->unk_DA0;
            *c = t->unk_18;
            *d = t->unk_1C;
            *e = t->unk_20;
            *f = t->unk_24;
            *g = t->unk_28;
        }
    }
    func_08852F00(arg1, 0);
}
