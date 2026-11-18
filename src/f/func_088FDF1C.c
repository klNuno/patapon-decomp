#include "common.h"

typedef struct Obj2_088FDF1C {
    u8 pad_00[0x2C];
    s32 unk_2C;
} Obj2_088FDF1C;

typedef struct Obj_088FDF1C {
    u8 pad_00[0x10];
    Obj2_088FDF1C *unk_10;
} Obj_088FDF1C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0887EDA8(s32, s32);
void func_08852C5C(void *, s32, s32);

void func_088FDF1C(Obj_088FDF1C *arg0, void *arg1) {
    s32 temp;

    func_0885356C(arg1, 0, 1, 4);
    temp = *func_0885356C(arg1, 1, 0, 4);
    if (func_0887EDA8(arg0->unk_10->unk_2C, 0x2000) != 0) {
        func_08852C5C(arg1, temp, 0);
    }
    func_08852F00(arg1, 0);
}
