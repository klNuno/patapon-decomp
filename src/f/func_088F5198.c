#include "common.h"

typedef struct {
    u8 pad_00[0x4AD4];
    u8 (*unk_4AD4)[4];
} T;

void func_088F5198(T *arg0, u8 arg1, s32 arg2) {
    u8 *temp = arg0->unk_4AD4[arg2];
    u32 i = 0;
    u8 *ptr = temp;
    do {
        if (*ptr == 0xFF) {
            *(u8 *)(i + (u32)temp) = arg1;
            break;
        }
        ++i;
        ++ptr;
    } while (i < 4);
}
