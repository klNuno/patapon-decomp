#include "common.h"

typedef struct T_089B472C {
    u8 unk_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 unk_20[0x30];
    u8 unk_50[0x30];
    u8 unk_80[8];
    u8 unk_88[8];
    s32 unk_90;
    u8 unk_94;
} T_089B472C;

s32 sceCtrlSetSamplingMode(s32);
s32 sceCtrlSetSamplingCycle(s32);
s32 sceCtrlSetIdleCancelThreshold(s32, s32);
void func_0881F5C0(void *, s32, s32);

T_089B472C *func_089B472C(T_089B472C *arg0) {
    arg0->unk_94 = 0;
    sceCtrlSetSamplingMode(1);
    sceCtrlSetSamplingCycle(0);
    sceCtrlSetIdleCancelThreshold(-1, -1);
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    func_0881F5C0(arg0->unk_00, 0, 0x10);
    func_0881F5C0(arg0->unk_20, 0, 0x30);
    func_0881F5C0(arg0->unk_50, 0, 0x30);
    func_0881F5C0(arg0->unk_80, 0, 8);
    func_0881F5C0(arg0->unk_88, 0, 8);
    arg0->unk_90 = 0;
    return arg0;
}
