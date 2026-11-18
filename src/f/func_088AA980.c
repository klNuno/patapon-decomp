#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_088AA980;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
u8 func_088B5A88(char *arg0);

void func_088AA980(S_088AA980 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;
    s32 o;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    o = func_0888A5A0(func_088BCF58(arg0->unk_10), *temp);
    if (o == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    *temp2 = func_088B5A88((char *)(o + 0x28));
    func_08852F00(arg1, 0);
}
