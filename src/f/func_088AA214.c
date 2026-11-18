#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
f32 func_088B4E10(void *, s32);
s32 func_088BCF58(s32);

void func_088AA214(Unk *arg0, void *arg1)
{
    s32 *a;
    s32 *b;
    f32 *c;
    u8 *temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    temp = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (temp == NULL) {
        func_08852F00(arg1, 0);
    } else {
        *c = func_088B4E10(temp + 0xF0, *b);
        func_08852F00(arg1, 0);
    }
}
