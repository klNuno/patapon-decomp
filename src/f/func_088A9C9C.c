#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} O_088A9C9C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_088B4C40(void *, s32, s32);

void func_088A9C9C(O_088A9C9C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    u8 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    p = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (p == NULL) {
        func_08852F00(arg1, 0);
    } else {
        func_088B4C40(p + 0xF0, *b, *c == 1);
        func_08852F00(arg1, 0);
    }
}
