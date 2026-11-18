#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} Obj_08911BC0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088F511C(s32, s32, s32);
s32 func_089AE598(s32);

void func_08911BC0(Obj_08911BC0 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    func_088F511C(func_089AE598(arg0->unk_1C), *temp, *temp2);
    func_08852F00(arg1, 0);
}
