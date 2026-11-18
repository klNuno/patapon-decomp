#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} Obj_08937D18;

void func_08852F00(s32, s32);
s32 func_0885356C(s32, s32, s32, s32);
void func_0894DD84(s32, s32, s32);

void func_08937D18(Obj_08937D18 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_0885356C(arg1, 0, 1, 4);
    temp_v0 = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != 0) {
        func_0894DD84(arg0->unk_14, temp_s0, temp_v0);
    }
    func_08852F00(arg1, 0);
}
