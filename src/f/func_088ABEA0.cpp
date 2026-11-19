#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Unk;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088BCF70(s32);
void func_088CFBE0(s32, s32, s32);

void func_088ABEA0(Unk *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 temp2 = func_088BCF70(arg0->unk_10);

    func_088CFBE0(temp2, *temp, 0);
    func_08852F00(arg1, 0);
}
}

