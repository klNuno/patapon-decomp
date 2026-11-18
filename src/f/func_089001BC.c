#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);
void func_088F40B4(void *, f32, f32);

void func_089001BC(S0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    func_088F40B4(arg0->unk_10 + 0x50560, *a, *b);
    func_08852F00(arg1, 0);
}
