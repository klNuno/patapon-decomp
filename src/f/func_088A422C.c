#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x24];
    u8 unk_28;
    u8 pad_29[0x2];
    u8 unk_2B;
} T;

extern void func_0889B16C(T *);

void func_088A422C(T *arg0, s32 arg1) {
    u32 temp = 0;
    T *temp2 = arg0;
    do {
        if (arg1 == 0 || arg1 == (temp2->unk_28 != 0 ? 0 : temp2->unk_00)) {
            func_0889B16C(temp2);
            ++temp;
        } else {
            ++temp;
        }
        ++temp2;
    } while (temp < 0x20U);
}
