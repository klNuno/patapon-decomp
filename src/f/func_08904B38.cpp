#include "common.h"

extern "C" {
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_088C6474(void *);
void func_0898FDD4(void *, s32);

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[1];
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} T;

void func_08904B38(T *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    void *ptr = func_088C6474(arg0->unk_10->unk_506F0);
    func_0898FDD4(ptr, *temp);
    func_08852F00(arg1, 0);
}
}
