#include "common.h"

s32 func_08811458(void *arg0, u16 *arg1);

typedef struct {
    u16 unk_00;
    u16 unk_02;
} T;

T *func_0880EEAC(u8 *arg0, T *arg1, T *arg2) {
    if (arg1 < arg2) {
        do {
            arg1->unk_00 = func_08811458(arg0 + 0x20, &arg1->unk_00);
            arg1++;
        } while (arg1 < arg2);
    }
    return arg2;
}
