#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S0892F854;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_0892C7B8(s32, s32);

void func_0892F854(S0892F854 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    func_0892C7B8(func_0892AB90(arg0->unk_10, *temp), *temp2 == 1);
    func_08852F00(arg1, 0);
}
