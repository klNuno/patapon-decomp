#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_088B5598(void *, f32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S088AAA30;

void func_088AAA30(S088AAA30 *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    s32 p = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);

    if (p == 0) {
        func_08852F00(arg1, 0);
    } else {
        func_088B5598((u8 *)p + 0x28, *b);
        func_08852F00(arg1, 0);
    }
}
