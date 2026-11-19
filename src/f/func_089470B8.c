#include "common.h"

typedef struct {
    u8 pad_00[0x414];
    u32 unk_414;
} S;

s32 func_089470B8(void *arg0, S *arg1, S *arg2) {
    return arg1->unk_414 > arg2->unk_414;
}
