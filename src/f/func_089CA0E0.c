#include "common.h"

typedef struct {
    u8 pad_00[0xEBC];
    u8 unk_EBC[1];
} S089CA0E0;

s32 func_089CA0E0(S089CA0E0 *arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 i;

    n = 0;
    for (i = 0; i <= arg2; i++) {
        if (i > 7U && n < 4U) {
            n = 4;
        }
        if (arg0->unk_EBC[i] != 0) {
            n++;
        }
    }
    n--;
    if (arg2 < 16U && arg2 > 7U && n < 4U) {
        n = 4;
    }
    if (n < 0) {
        n = 0;
    }
    return n;
}
