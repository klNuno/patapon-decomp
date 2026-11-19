#include "common.h"

typedef struct S_08961998 S_08961998;

typedef struct {
    u8 pad_00[8];
    u8 *volatile unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    u8 pad_24[0xC];
    s32 unk_30;
    u8 unk_34[0x404];
    u8 *unk_438;
    s32 unk_43C;
} T;

extern u8 D_08A47974[];
extern u8 D_08A47B5C[];
void func_0895EFB8(S_08961998 *, s32);
void func_08962FE8(T *);

T *func_08962E2C(T *arg0, s32 arg1, s32 arg2)
{
    func_0895EFB8((S_08961998 *)arg0, arg1);
    arg0->unk_08 = D_08A47974;
    arg0->unk_20 = arg2;
    arg0->unk_08 = D_08A47B5C;
    arg0->unk_30 = 0;
    arg0->unk_438 = (u8 *)(((u32)arg0->unk_34 & 3) + (u32)arg0 + 0x34);
    arg0->unk_43C = 0;
    func_08962FE8(arg0);
    return arg0;
}
