#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
} Unk1C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    Unk1C unk_1C;
} Unk;

Unk *func_088B02D8(Unk *arg0, const Unk *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_18 = arg1->unk_18;
    arg0->unk_1C = arg1->unk_1C;
    return arg0;
}
