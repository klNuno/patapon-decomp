#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x4318];
    s32 unk_4318;
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_0893874C(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_10->unk_4318;
    func_08852F00(arg1, 0);
}
