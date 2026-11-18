#include "common.h"

typedef struct S {
    u8 pad_00[0x1058];
    void *unk_1058;
    s32 unk_105C;
    s32 unk_1060;
    s32 unk_1064;
    u8 unk_1068;
    u8 unk_1069;
    u8 pad_106A[0x2];
    s32 unk_106C;
    s32 unk_1070;
    s32 unk_1074;
    u8 unk_1078[0x404];
    u8 *unk_147C;
    s32 unk_1480;
} S;

extern u8 D_08A485A8[];
extern u8 D_08A485BC[];
void func_08925AB0(void *);
s32 func_08998D28(s32);

S *func_0899404C(S *arg0, s32 arg1, s32 arg2) {
    arg0->unk_1058 = D_08A485BC;
    func_08925AB0(arg0);
    arg0->unk_1058 = D_08A485A8;
    arg0->unk_105C = arg1;
    arg0->unk_1060 = arg2;
    arg0->unk_1064 = func_08998D28(arg2);
    arg0->unk_1068 = 0;
    arg0->unk_1069 = 0;
    arg0->unk_106C = 0;
    arg0->unk_1070 = 0;
    arg0->unk_1074 = 0;
    arg0->unk_147C = (u8 *)(((u32)arg0->unk_1078 & 3) + (u32)arg0 + 0x1078);
    arg0->unk_1480 = 0;
    return arg0;
}
