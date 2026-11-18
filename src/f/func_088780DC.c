#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} Elem18_088780DC;

typedef struct {
    Elem18_088780DC *unk_00;
    s32 unk_04;
} VecA_088780DC;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} VecB_088780DC;

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[0x283C - 0x14];
    u8 unk_283C;
    u8 pad_283D[3];
    s32 unk_2840;
    u8 pad_2844[0x3098 - 0x2844];
    u8 unk_3098;
    u8 pad_3099[0x36A0 - 0x3099];
    VecA_088780DC unk_36A0;
    u8 pad_36A8[0x3F10 - 0x36A8];
    VecB_088780DC unk_3F10;
} Obj_088780DC;

void func_088780DC(Obj_088780DC *arg0) {
    VecA_088780DC *temp;
    VecB_088780DC *temp2;
    Elem18_088780DC *temp3;
    s32 *temp4;

    arg0->unk_283C = 0;
    arg0->unk_2840 = 0x80;
    arg0->unk_10 = 1.0f;
    temp = &arg0->unk_36A0;
    temp3 = arg0->unk_36A0.unk_00;
    if ((u32)temp3 != (u32)(temp3 + arg0->unk_36A0.unk_04)) {
        do {
            temp3++;
        } while (temp3 != temp->unk_00 + arg0->unk_36A0.unk_04);
    }
    arg0->unk_36A0.unk_04 = 0;
    temp2 = &arg0->unk_3F10;
    temp4 = arg0->unk_3F10.unk_00;
    if ((u32)temp4 != (u32)(temp4 + arg0->unk_3F10.unk_04)) {
        do {
            temp4++;
        } while (temp4 != temp2->unk_00 + arg0->unk_3F10.unk_04);
    }
    arg0->unk_3F10.unk_04 = 0;
    arg0->unk_3098 = 0;
}
