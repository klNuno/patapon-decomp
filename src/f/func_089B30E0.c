#include "common.h"

typedef struct T0 T0;

typedef struct {
    u8 pad_00[0x58];
    u8 *unk_58;
} T;

T0 *func_089B17F8(T0 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern u8 D_08A489F8[];

T *func_089B30E0(T *arg0, void *arg1, s32 arg2, s32 arg3)
{
    func_089B17F8((T0 *)arg0, (s32)arg1, arg2, arg3);
    arg0->unk_58 = D_08A489F8;
    return arg0;
}
