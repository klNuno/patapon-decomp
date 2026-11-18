#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S_088AB7F0_14;

typedef struct {
    u8 pad_00[0x14];
    S_088AB7F0_14 *unk_14;
} S_088AB7F0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D6020(s32, s32, f32);

void func_088AB7F0(S_088AB7F0 *arg0, void *arg1) {
    s32 *a;

    a = func_0885356C(arg1, 0, 1, 4);
    func_088D6020(arg0->unk_14->unk_36B10 + 0x3E8, *a, *(f32 *)func_0885356C(arg1, 1, 1, 4));
    func_08852F00(arg1, 0);
}
