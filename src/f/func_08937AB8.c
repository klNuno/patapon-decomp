#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} Obj;

extern u8 D_089E81D8[];
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A471E4[];
extern u8 D_08A47200[];

Obj *func_08937AB8(Obj *arg0, s32 arg1) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A47200;
    arg0->unk_04 = 0xC;
    arg0->unk_08 = D_089E81D8;
    arg0->unk_0C = 0x23;
    arg0->unk_00 = D_08A471E4;
    arg0->unk_10 = arg1;
    arg0->unk_14 = 0;
    return arg0;
}
