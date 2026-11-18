#include "common.h"

void func_089457D8(void *);
extern u8 D_089DF8E8[];
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A45BF0[];
extern u8 D_08A45C0C[];

typedef struct {
    void *unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18[0x8];
    s32 unk_20;
} S_088A94B0;

S_088A94B0 *func_088A94B0(S_088A94B0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A45C0C;
    arg0->unk_04 = 1;
    arg0->unk_08 = D_089DF8E8;
    arg0->unk_0C = 0x36;
    arg0->unk_00 = D_08A45BF0;
    arg0->unk_10 = arg2;
    arg0->unk_14 = arg3;
    func_089457D8(arg0->unk_18);
    arg0->unk_20 = arg4;
    return arg0;
}
