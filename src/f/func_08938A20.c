#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089579E8(s32, s32, s32, f32);
void func_08958374(s32, f32);

void func_08938A20(S *arg0, void *arg1) {
    f32 *a;
    s32 *b;

    a = (f32 *)func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_0885356C(arg1, 2, 1, 4);
    if (*b == 0) {
        func_089579E8(arg0->unk_10, 0, 1, *a);
    } else {
        func_08958374(arg0->unk_10, 0.0f);
    }
    func_08852F00(arg1, 0);
}
