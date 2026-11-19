#include "common.h"

typedef struct V_089ADA00 {
    f32 unk_00;
    f32 unk_04;
} V_089ADA00;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088BCF70(s32 arg0);
void func_088CF75C(s32, V_089ADA00 *, s32);

void func_088ABCF0(T *arg0, void *arg1)
{
    V_089ADA00 temp;
    s32 *temp1 = func_0885356C(arg1, 0, 1, 4);
    s32 temp2 = func_088BCF70(arg0->unk_10);

    temp.unk_00 = (f32)*temp1;
    temp.unk_04 = 0.0f;
    func_088CF75C(temp2, &temp, 0);
    func_08852F00(arg1, 0);
}
