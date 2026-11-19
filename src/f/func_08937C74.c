#include "common.h"

typedef struct {
    u8 pad_00[0x1E6B0];
    u8 unk_1E6B0[1];
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089548DC(void *, s32);

void func_08937C74(T *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_089548DC(arg0->unk_10->unk_1E6B0, *temp);
    func_08852F00(arg1, 0);
}
