#include "common.h"

typedef struct {
    u8 pad_00[0x151C];
    s32 unk_151C;
    u8 pad_1520[0x6556D];
    u8 unk_66A8D;
} A_0887327C;

extern s32 D_08AD1EEC[];

s32 func_0887327C(A_0887327C *arg0) {
    s32 x;
    s32 r;

    if (arg0->unk_66A8D != 0) {
        x = arg0->unk_151C + 1;
        r = x > 10 ? 0 : (x < 0 ? 10 : x);
    } else {
        if (D_08AD1EEC[0] == 0) {
            return -1;
        }
        x = arg0->unk_151C;
        D_08AD1EEC[0] = 0;
        x++;
        r = x > 10 ? 0 : (x < 0 ? 10 : x);
    }
    return r;
}
