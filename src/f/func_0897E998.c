#include "common.h"

typedef struct {
    u8 pad_00[0x950];
    f32 unk_950;
} UnkObject;

void func_08865BA0(u32, f32, f32, f32, f32);

void func_0897E998(UnkObject *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4,
                   f32 arg5, f32 arg6, f32 arg7, f32 arg8)
{
    f32 temp = arg0->unk_950;
    f32 temp2 = temp;

    if (arg3 > 0.0f) {
        temp2 = arg3;
    }

    if (arg7 > 0.0f) {
        temp = arg7;
    }
    func_08865BA0(0xFF226AC1, arg1, arg2, temp2 - 2.0f, arg4);
    func_08865BA0(0xFF5FDBFF, arg5, arg6, temp - 2.0f, arg8);
}
