#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} Obj_088E6900;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
void func_08873BB8(s32, s32);

void func_088E6900(Obj_088E6900 *arg0, s32 arg1) {
    s32 *temp;

    temp = func_0885356C(arg1, 0, 1, 4);
    if (arg0->unk_14 != 0) {
        if (*temp == 0) {
            func_08873BB8(arg0->unk_14, 2);
        } else if (*temp == 1) {
            func_08873BB8(arg0->unk_14, 1);
        } else {
            func_08873BB8(arg0->unk_14, 3);
        }
    }
    func_08852F00(arg1, 0);
}
