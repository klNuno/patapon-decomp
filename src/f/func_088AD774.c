#include "common.h"

void func_0881F5C0(void *, s32, s32);
s32 func_088AC9A8(s16 *, u8 *);
s32 func_088ACA44(u8 *, u16 *);

u16 *func_088AD774(u16 *arg0, u16 *arg1) {
    u8 buf[0x300];
    s32 j;
    u32 i;

    j = 0;
    i = 0;
    while (arg0[i] != 0) {
        if (arg0[i] == 0x3C) {
            func_0881F5C0(buf, 0, 0x300);
            i += func_088AC9A8((s16 *)arg0 + i, buf);
            j += func_088ACA44(buf, &arg1[j]);
        }
        arg1[j++] = arg0[i];
        if (arg0[i] == 0) {
            break;
        }
        if (i >= 0x180) {
            j--;
            break;
        }
        i++;
    }
    arg1[j] = 0;
    return arg1;
}
