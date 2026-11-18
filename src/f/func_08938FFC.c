#include "common.h"

typedef struct T08909AC8_S {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
    void *unk_28;
    u8 pad_2C[4];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} T08909AC8_S;

s32 func_088E5574(s32);
void func_0890979C(T08909AC8_S *, s32);
void func_0890AA8C(s32, s32, s32, s32);
void func_0890AB10(s32, s32, f32, f32, s32);
void func_08939194(T08909AC8_S *);
extern u8 D_08A4721C[];

T08909AC8_S *func_08938FFC(T08909AC8_S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0890979C(arg0, arg1);
    arg0->unk_28 = D_08A4721C;
    arg0->unk_30 = arg2;
    arg0->unk_34 = arg3;
    arg0->unk_38 = arg4;
    arg0->unk_3C = 0;
    func_0890AA8C(func_088E5574(arg0->unk_10), 0, 1, 1);
    if (arg4 >= 0) {
        s32 temp = func_088E5574(arg0->unk_10);
        func_0890AB10(temp, arg0->unk_38, -1.0f, -1.0f, 0);
    } else {
        arg0->unk_3C = 1;
        func_08939194(arg0);
    }
    return arg0;
}
