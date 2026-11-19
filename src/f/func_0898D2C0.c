#include "common.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 *unk_1C;
} T0;

extern u8 D_08A48480[];

T0 *func_0898D2C0(T0 *arg0) {
    arg0->unk_1C = D_08A48480;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    return arg0;
}
