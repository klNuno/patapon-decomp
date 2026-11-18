#include "common.h"

typedef struct A_088ABC64 {
    u8 pad_00[0x10];
    s32 unk_10;
} A_088ABC64;

void func_08852F00(s32, s32);
void *func_0885356C(s32, s32, s32, s32);
s32 func_088BCF70(s32);
void func_088CF3B4(s32, s32, f32, s32);

void func_088ABC64(A_088ABC64 *arg0, s32 arg1) {
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_088CF3B4(func_088BCF70(arg0->unk_10), *a, *b, 0);
    func_08852F00(arg1, 0);
}
