#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0[1];
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} U;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0898A2CC(void *);

void func_08905F10(U *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = (u8)func_0898A2CC(arg0->unk_10->unk_1212D0);
    func_08852F00(arg1, 0);
}
}
