#include "common.h"

u32 *func_088147A4(s32 *arg0);
void func_088147E0(u32 *arg0);
extern u8 D_089DCF80[];

void func_08859B80(u32 arg0) {
    s32 sp1C;
    u32 *temp;

    temp = func_088147A4(&sp1C);
    temp[0] = (((u32)D_089DCF80 >> 24) << 16) | 0x10000000;
    temp[1] = (((u32)D_089DCF80 << 8) >> 8) | 0x0A000000;
    temp[2] = ((arg0 >> 16) & 0xFFF) | 0x0E110000;
    temp[3] = (arg0 & 0xFFFF) | 0x0C110000;
    temp[4] = 0;
    func_088147E0(temp + 5);
}
