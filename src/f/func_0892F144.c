#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

void func_08852F00(void *, s32);
void *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_0893346C(void *, V *);

void func_0892F144(S *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    V v;
    u8 *p;
    f32 x;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    p = (u8 *)func_0892AB90(arg0->unk_10, *a);
    y = *c;
    x = *b;
    v.unk_00 = x;
    v.unk_04 = y;
    func_0893346C(p + 0x170, &v);
    func_08852F00(arg1, 0);
}
