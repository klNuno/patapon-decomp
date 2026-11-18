#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S7_0896FDA0;

typedef struct {
    S7_0896FDA0 *unk_00;
} Obj_0896FDA0;

void func_08890458(s32, s32, s32);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32);

void func_0896FDA0(Obj_0896FDA0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    if (arg1 != 0 && arg1 != 1) {
        return;
    }
    temp_v0 = func_08894FBC(func_08899E18(arg0->unk_00->unk_36B10), arg2, 1);
    if (temp_v0 != 0) {
        func_08890458(temp_v0, arg3, arg4);
    }
}
