#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} T;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A48560[];
extern u8 D_089EE778[];
extern u8 D_08A48544[];

T *func_08991F88(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A48560;
    arg0->unk_04 = 0x15;
    arg0->unk_08 = D_089EE778;
    arg0->unk_0C = 2;
    arg0->unk_00 = D_08A48544;
    arg0->unk_10 = arg2;
    arg0->unk_14 = 0;
    return arg0;
}
