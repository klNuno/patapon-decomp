#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0xB];
    u8 unk_14[4];
} T_089A6AF8;

typedef struct {
    u8 pad_00[0x114];
    T_089A6AF8 *unk_114;
} U_089A6AF8;

typedef struct {
    u8 pad_00[0x10];
    U_089A6AF8 *unk_10;
} S_089A6AF8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
bool func_088F5BA0(T_089A6AF8 *);
f32 *func_08992A3C(void *, s32);

void func_089A6AF8(S_089A6AF8 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    T_089A6AF8 *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    t = arg0->unk_10->unk_114;
    if (t != NULL) {
        *a = func_088F5BA0(t);
        *b = *func_08992A3C(t->unk_14, 3) > 0.0f;
        *c = t->unk_08;
        *d = t->unk_04;
    }
    func_08852F00(arg1, 0);
}

}
