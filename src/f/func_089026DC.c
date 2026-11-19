#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} S;

s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6484(void *arg0);
s32 func_088BCF70(s32 arg0);
void func_088CF8C0(s32, s32, s32);
void func_08852F00(void *, s32);

void func_089026DC(S *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 temp1 = func_088C6484(&arg0->unk_10->unk_506F0);
    s32 temp2 = func_088BCF70(temp1);
    func_088CF8C0(temp2, *temp, 0);
    func_08852F00(arg1, 0);
}
