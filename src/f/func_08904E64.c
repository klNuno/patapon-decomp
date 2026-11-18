#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_08904E64;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088DE800(s32, u32, u32, f32);

void func_08904E64(S_08904E64 *arg0, void *arg1) {
    s32 *a;
    s32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_088DE800(arg0->unk_10, *a, *b, *(f32 *)func_0885356C(arg1, 2, 1, 4));
    func_08852F00(arg1, 0);
}
