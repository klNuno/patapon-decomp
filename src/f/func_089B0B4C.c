#include "common.h"

typedef struct T0 T0;

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
    u8 pad_5C[0x11B4];
    s32 unk_1210;
    s32 unk_1214;
    u8 pad_1218[0x14];
    u8 *unk_122C;
    s32 unk_1230;
    s32 unk_1234;
    s32 unk_1238;
} T;

extern u8 D_08A480A0[];
extern u8 D_08A48928[];
T0 *func_089B17F8(T0 *arg0, s32 arg1, s32 arg2, s32 arg3);

T *func_089B0B4C(T *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    func_089B17F8((T0 *)arg0, arg1, arg2, arg5);
    arg0->unk_58 = D_08A48928;
    arg0->unk_122C = D_08A480A0;
    arg0->unk_1210 = 0;
    arg0->unk_1214 = 0;
    arg0->unk_1230 = arg3;
    arg0->unk_1234 = -1;
    arg0->unk_1238 = arg4;
    return arg0;
}
