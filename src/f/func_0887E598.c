#include "common.h"

typedef struct {
    s32 unk_00[4];
    s32 unk_10[4];
    u8 pad_20[0x90];
    s32 unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    f32 unk_BC;
    f32 unk_C0;
} A_0887E598;

A_0887E598 *func_0887E598(A_0887E598 *arg0) {
    s32 *q;
    s32 *p;

    p = arg0->unk_00;
    do {
        *p = 0;
        p++;
    } while (p < arg0->unk_00 + 4);
    q = arg0->unk_10;
    do {
        *q = 0;
        q++;
    } while (q < arg0->unk_10 + 4);
    arg0->unk_B0 = 0;
    arg0->unk_B4 = 12;
    arg0->unk_B8 = 6;
    arg0->unk_BC = 0.2f;
    arg0->unk_C0 = 0.5f;
    return arg0;
}
