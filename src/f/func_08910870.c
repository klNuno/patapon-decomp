#include "common.h"

void func_0881F5C0(void *, s32, s32);

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s8 unk_0C;
    s8 unk_0D;
    u8 pad_0E[2];
    u8 unk_10[0xC];
    u8 unk_1C[0x30];
    u8 pad_4C[8];
    u8 unk_54[0x20];
} T;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} U;

T *func_08910870(T *arg0, const U *arg1, s32 arg2, s8 arg3, s8 arg4)
{
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg2;
    arg0->unk_0C = arg3;
    arg0->unk_0D = arg4;
    func_0881F5C0(arg0->unk_54, 0, 0x20);
    func_0881F5C0(arg0->unk_10, 0, 0xC);
    func_0881F5C0(arg0->unk_1C, 0, 0x30);
    return arg0;
}
