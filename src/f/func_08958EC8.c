#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} S;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    S unk_0C;
    f32 unk_18;
    s32 unk_1C;
    u8 unk_20;
} T;

void func_08958EC8(T *arg0, const S *arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6) {
    volatile S temp = *arg1;

    arg0->unk_04 = arg3;
    arg0->unk_00 = arg2;
    arg0->unk_08 = arg4;
    arg0->unk_0C = *(S *)&temp;
    arg0->unk_18 = arg5;
    arg0->unk_1C = arg6;
    arg0->unk_20 = 0;
}
