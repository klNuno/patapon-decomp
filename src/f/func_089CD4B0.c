#include "common.h"

typedef struct {
    u8 pad_00[0x98];
    s32 unk_98;
} T;

void func_089CD4B0(T *arg0, s32 arg1) {
    if (arg1 == 0) {
        arg0->unk_98 = 0x34;
    } else if (arg1 == 1) {
        arg0->unk_98 = 0x33;
    } else if (arg1 == 2) {
        arg0->unk_98 = 0x32;
    } else if (arg1 == 3) {
        arg0->unk_98 = 0x31;
    }
}
