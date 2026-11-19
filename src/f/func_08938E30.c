#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089548E4(void *, s32);

typedef struct {
    u8 pad_00[0x1E6B0];
    u8 unk_1E6B0[1];
} T0;

typedef struct {
    u8 pad_00[0x10];
    T0 *unk_10;
} T1;

void func_08938E30(T1 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_089548E4(arg0->unk_10->unk_1E6B0, *temp != 0);
    func_08852F00(arg1, 0);
}
