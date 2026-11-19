#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    s32 unk_506F0;
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088C6474(void *);
s32 func_0898FF2C(s32);

void func_08904BA8(T *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_0898FF2C(func_088C6474(&arg0->unk_10->unk_506F0));
    func_08852F00(arg1, 0);
}
