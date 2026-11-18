#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} Obj_08930060;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
s32 func_0892CABC(s32);

void func_08930060(Obj_08930060 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    *temp2 = func_0892CABC(func_0892AB90(arg0->unk_10, *temp));
    func_08852F00(arg1, 0);
}
