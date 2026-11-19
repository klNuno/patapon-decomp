#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088DE128(s32);

void func_088FE938(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_088DE128(arg0->unk_10);
    func_08852F00(arg1, 0);
}
