#include "common.h"

void func_08852F00(void *, s32);
extern s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} S;

typedef struct {
    u8 pad_00[0x220];
    S *unk_220;
} T;

void func_088EFBC4(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = arg0->unk_220->unk_14;
    func_08852F00(arg1, 0);
}
