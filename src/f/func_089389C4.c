#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08956F28(s32, s32);
void func_08852F00(void *, s32);

void func_089389C4(Obj *arg0, void *arg1)
{
    s32 temp = *func_0885356C(arg1, 0, 1, 4);

    func_08956F28(arg0->unk_10, temp != 0);
    func_08852F00(arg1, 0);
}
