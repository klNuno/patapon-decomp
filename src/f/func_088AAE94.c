#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_088AAE94;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_0888922C(s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AAE94(Obj_088AAE94 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp1;
    s32 temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp1 = func_0885356C(arg1, 1, 1, 4);
    if ((temp2 = func_0888A5A0(func_088BCF58(arg0->unk_10), *temp)) == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    func_0888922C(temp2, *temp1 == 1);
    func_08852F00(arg1, 0);
}
