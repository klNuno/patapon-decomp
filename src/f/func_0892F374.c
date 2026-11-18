#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

typedef struct {
    u8 pad_00[0x170];
    u8 unk_170[4];
} T;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
V *func_0893349C(void *);

void func_0892F374(S *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    T *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    t = (T *)func_0892AB90(arg0->unk_10, *a);
    *b = func_0893349C(t->unk_170)->unk_00;
    *c = func_0893349C(t->unk_170)->unk_04;
    func_08852F00(arg1, 0);
}
