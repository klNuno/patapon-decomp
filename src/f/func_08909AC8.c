#include "common.h"

typedef struct T08909AC8_S {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
    void *unk_28;
    u8 pad_2C[0x4];
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
} T08909AC8_S;

s32 func_088E5574(s32);
void func_0890979C(T08909AC8_S *, s32);
void func_0890AA8C(s32, s32, s32, s32);
s32 func_0890AC7C(s32);
extern u8 D_08A468C8[];

T08909AC8_S *func_08909AC8(T08909AC8_S *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    func_0890979C(arg0, arg1);
    arg0->unk_28 = D_08A468C8;
    arg0->unk_30 = arg2;
    arg0->unk_34 = arg3;
    arg0->unk_38 = arg4;
    if (arg0->unk_30 != func_0890AC7C(func_088E5574(arg0->unk_10))) {
        func_0890AA8C(func_088E5574(arg0->unk_10), *(s32 *)&arg0->unk_30, 1, 1);
    }
    if (arg2 == arg3) {
        arg0->unk_34 = -1;
    }
    return arg0;
}
