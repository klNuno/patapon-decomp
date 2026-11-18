#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} V;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} W;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, u8 *);
s32 func_0892AB90(s32, s32);
s32 func_0892A498(s32, s32, V *, W *, s32, s32, f32);
void func_0892BF8C(s32, s32, s32);
void func_0892BFA4(s32, s32, u8 *);

void func_0892F8E4(T *arg0, void *arg1) {
    u8 temp[0x20];
    V v;
    W w;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 x;
    s32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    func_08853894(arg1, temp);
    x = func_0892AB90(arg0->unk_10, *a);
    w.unk_00 = 0.0f;
    v.unk_00 = 0.0f;
    v.unk_04 = 0.0f;
    w.unk_04 = 1.0f;
    y = func_0892A498(arg0->unk_10, *b, &v, &w, -1, 0, 0.0f);
    if (y != 0) {
        func_0892BF8C(y, *c, *d == 1);
        func_0892BFA4(x, y, temp);
    }
    func_08852F00(arg1, 0);
}
