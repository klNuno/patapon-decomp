#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u32 *unk_08;
    u32 *unk_0C;
    u32 *unk_10;
    s32 unk_14;
} S0885A4E4;

extern S0885A4E4 *D_08A87FA4[];

u32 *func_088147A4(s32 *);
void func_088154E8(s32, s32);
s32 func_08856400(s32);

void func_0885A4E4(S0885A4E4 *arg0, s32 arg1, s32 arg2) {
    s32 sp1C;
    u32 *temp_v0;

    D_08A87FA4[0] = arg0;
    if (arg2 == 0) {
        func_088154E8(1, -1);
    } else {
        func_088154E8(1, func_08856400(arg2));
    }
    temp_v0 = func_088147A4(&sp1C);
    arg0->unk_00 = arg1;
    arg0->unk_14 = 0;
    arg0->unk_04 = 0;
    temp_v0[0] = ((((u32)temp_v0 >> 24) & 0xF) << 16) | 0x10000000;
    arg0->unk_08 = temp_v0 + 1;
    temp_v0[1] = 0x08000000;
    arg0->unk_10 = temp_v0 + 2;
    arg0->unk_0C = temp_v0 + 2;
}
