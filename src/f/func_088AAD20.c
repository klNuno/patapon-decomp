#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_088AAD20;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088890AC(s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AAD20(S_088AAD20 *arg0, void *arg1) {
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
    func_088890AC(o, *temp2);
    func_08852F00(arg1, 0);
}
