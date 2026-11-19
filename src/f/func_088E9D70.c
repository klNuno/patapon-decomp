#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0xC];
} T;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
void func_08858024(s32);
extern s32 func_088581B0(s32);

void func_088E9D70(void *arg0, void *arg1)
{
    T temp;
    f32 *out = func_0885356C(arg1, 0, 1, 4);

    func_08858024(1);
    func_088581B0((s32)&temp);
    func_08858024(2);
    *out = -temp.unk_30;
    func_08852F00(arg1, 0);
}
