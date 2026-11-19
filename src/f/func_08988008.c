#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
} T;

typedef struct {
    u8 pad_00[0x30];
    T unk_30;
} Unk_08988064;

s32 func_08988064(Unk_08988064 *arg0, s32 arg1);

void func_08988008(Unk_08988064 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    s32 temp = arg1 * 16;
    u8 temp2 = arg5;
    Unk_08988064 *temp3 = arg0;
    Unk_08988064 *temp4 = (Unk_08988064 *)(temp + (u32)temp3);

    temp4->unk_30.unk_00 = arg2;
    temp4->unk_30.unk_08 = arg3;
    temp4->unk_30.unk_0C = arg4;
    arg2 = func_08988064(temp3, arg2);
    temp4 = (Unk_08988064 *)((u8 *)temp + (u32)temp3);
    temp4->unk_30.unk_04 = arg2;
    temp4->unk_30.unk_0D = temp2;
}
