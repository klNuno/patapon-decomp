#include "common.h"

typedef struct S_08873BB8 S_08873BB8;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08874610(S_08873BB8 *, s32);

typedef struct {
    u8 pad_00[0x14];
    S_08873BB8 *unk_14;
} Obj;

void func_088EDCCC(Obj *arg0, void *arg1)
{
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    S_08873BB8 *obj = arg0->unk_14;
    if (obj != NULL) {
        func_08874610(obj, *temp == 1);
    }
    func_08852F00(arg1, 0);
}
