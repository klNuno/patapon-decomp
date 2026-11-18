#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S_088AB7F0_14;

typedef struct {
    u8 pad_00[0x14];
    S_088AB7F0_14 *unk_14;
} S_088AB7F0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
struct T {
    f32 unk_00;
    f32 unk_04;
    T(f32 arg0, f32 arg1) : unk_00(arg0), unk_04(arg1) {}
};

void func_088D6204(s32, s32, T *, f32);

void func_088ABAB0(S_088AB7F0 *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    f32 *d;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    func_0885356C(arg1, 3, 1, 4);
    d = (f32 *)func_0885356C(arg1, 4, 1, 4);
    s32 temp2 = arg0->unk_14->unk_36B10;
    T temp(*b, *c);
    func_088D6204(temp2 + 0x3E8, *a, &temp, *d);
    func_08852F00(arg1, 0);
}
}
