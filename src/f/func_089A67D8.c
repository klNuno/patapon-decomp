#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A486C0[];
extern u8 D_089EFA08[];
extern u8 D_08A486A4[];

typedef struct {
    u8 *volatile unk_00;
    s32 unk_04;
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
} T;

T *func_089A67D8(T *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A486C0;
    arg0->unk_04 = 22;
    arg0->unk_08 = D_089EFA08;
    arg0->unk_0C = 30;
    arg0->unk_00 = D_08A486A4;
    arg0->unk_10 = arg1;
    return arg0;
}
