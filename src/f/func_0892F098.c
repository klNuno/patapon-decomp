#include "common.h"

typedef struct A_0892F098 {
    u8 pad_00[0x10];
    s32 unk_10;
} A_0892F098;

void func_08852F00(s32, s32);
void *func_0885356C(s32, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_0892C14C(s32, f32, f32);

void func_0892F098(A_0892F098 *arg0, s32 arg1) {
    s32 *a;
    f32 *b;
    f32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_0892C14C(func_0892AB90(arg0->unk_10, *a), *b, *c);
    func_08852F00(arg1, 0);
}
