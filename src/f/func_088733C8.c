#include "common.h"
typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
    u8 pad_1520[0x6556C];
    u8 unk_66A8C;
} T;

s32 func_088733C8(T *arg0) {
    s32 temp;
    arg0->unk_66A8C = 1;
    temp = arg0->unk_151C + 1;
    if (temp > 10) {
        return 0;
    }
    if (temp < 0) {
        return 10;
    }
    return temp;
}
