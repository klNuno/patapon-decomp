#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088BCF70(s32);
void func_088CFA9C(s32, s32, s32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj;

void func_088ABE38(Obj *arg0, void *arg1)
{
    s32 *temp;
    s32 value;
    temp = func_0885356C(arg1, 0, 1, 4);
    value = func_088BCF70(arg0->unk_10);
    func_088CFA9C(value, *temp, 0);
    func_08852F00(arg1, 0);
}
