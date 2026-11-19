#include "common.h"

typedef struct {
    u8 pad_00[0x2C];
} T;

void func_0889B014(T *, s32);

void func_088A4040(T *arg0, s32 arg1) {
    u32 i;
    T *temp;

    temp = arg0;
    i = 0;
    do {
        func_0889B014(temp, arg1);
        i++;
        temp++;
    } while (i < 0x20U);
}
