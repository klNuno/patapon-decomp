#include "common.h"

s32 func_0893D560(s8 *arg0) {
    s32 count = 0;
    s32 i;
    s32 state;

    state = 0;
    i = 0;

    while (arg0[i] != 0) {
        if (state == 0 && ((((u8 *)arg0)[i] >= 0x81 && ((u8 *)arg0)[i] <= 0x9F) || (((u8 *)arg0)[i] >= 0xE0 && ((u8 *)arg0)[i] < 0xFD))) {
            state = 1;
        } else if (state == 1 && ((u8 *)arg0)[i] != 0x7F && ((u8 *)arg0)[i] >= 0x40 && ((u8 *)arg0)[i] < 0xFD) {
            state = 2;
        } else if (state == 2 && ((((u8 *)arg0)[i] >= 0x81 && ((u8 *)arg0)[i] <= 0x9F) || (((u8 *)arg0)[i] >= 0xE0 && ((u8 *)arg0)[i] < 0xFD))) {
            state = 1;
        } else {
            state = 0;
        }
        if (state != 1) {
            count++;
            i++;
        } else {
            i++;
        }
    }
    return count;
}
