#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
void func_088B4B10(void *, s32, f32);
s32 func_088BCF58(s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_088A9B04(T *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    u8 *temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    if ((temp = func_0888A5A0(func_088BCF58(arg0->unk_10), *a)) == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    func_088B4B10(temp + 0xF0, *b, *c);
    func_08852F00(arg1, 0);
}
