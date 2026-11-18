#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} V_088E8A5C;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} W_088E8A5C;

typedef struct {
    u8 pad_00[0x14];
    W_088E8A5C *unk_14;
} A_088E8A5C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0888FEB4(s32, V_088E8A5C *);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088E8A5C(A_088E8A5C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    W_088E8A5C *w;
    s32 r;
    V_088E8A5C v;
    f32 x;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    w = arg0->unk_14;
    if (w != NULL && !(*a != 0 && *a != 1)) {
        r = func_08894FBC(func_08899E18(w->unk_36B10, *a), *b, 1);
        if (r != 0) {
            y = *d;
            x = *c;
            v.unk_00 = x;
            v.unk_04 = y;
            v.unk_08 = 0;
            v.unk_0C = 0;
            func_0888FEB4(r, &v);
        }
    }
    func_08852F00(arg1, 0);
}
