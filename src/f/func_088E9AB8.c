#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W;

typedef struct {
    u8 pad_00[0x14];
    W *unk_14;
} Obj;

s32 *func_0885356C(s32, s32, s32, s32);
void func_08852F00(s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);
u8 func_0889080C(s32, s32, s32);

void func_088E9AB8(Obj *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 r;
    W *w;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    *e = 0;
    w = arg0->unk_14;
    if (w != NULL) {
        if (*a == 0 || *a == 1U) {
            r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
            if (r != 0) {
                *e = func_0889080C(r, *c, *d);
            }
        }
    }
    func_08852F00(arg1, 0);
}
