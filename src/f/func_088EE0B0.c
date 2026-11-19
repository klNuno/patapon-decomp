#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} Obj;

extern u8 D_089E27E8[];
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A465B4[];
extern u8 D_08A465D0[];

Obj *func_088EE0B0(Obj *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A465D0;
    arg0->unk_04 = 5;
    arg0->unk_08 = D_089E27E8;
    arg0->unk_0C = 0xA;
    arg0->unk_00 = D_08A465B4;
    arg0->unk_10 = arg1;
    arg0->unk_14 = arg2;
    return arg0;
}
