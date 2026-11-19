#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    const u8 *unk_10;
} Unk;

u8 *func_0880E27C(const Unk *arg0, u8 *arg1, u8 *arg2) {
    if (arg2 > arg1) {
        do {
            *arg1 = arg0->unk_10[*arg1];
            arg1++;
        } while (arg1 < arg2);
    }
    return arg2;
}
