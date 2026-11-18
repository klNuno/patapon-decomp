#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    s32 unk_18;
} Unk88;

typedef struct {
    void *unk_00;
    Unk88 *unk_04;
} Unk38;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[4];
    Unk38 *unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[4];
    s32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    s32 unk_70;
    u8 pad_74[4];
    f32 unk_78;
    f32 unk_7C;
    u8 pad_80[8];
    Unk88 unk_88;
} Unk;

void func_088D68BC(Unk *arg0) {
    Unk38 *temp;
    Unk88 *temp2;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0.0f;
    arg0->unk_60 = 0.0f;
    arg0->unk_64 = 0.0f;
    arg0->unk_68 = 1.0f;
    arg0->unk_6C = 0.0f;
    arg0->unk_70 = 0;
    arg0->unk_88.unk_00 = 0;
    arg0->unk_88.unk_04 = 0.0f;
    arg0->unk_88.unk_08 = 0.0f;
    arg0->unk_88.unk_0C = 1.0f;
    arg0->unk_88.unk_10 = 0.0f;
    arg0->unk_88.unk_14 = 0.0f;
    arg0->unk_88.unk_18 = 0;
    arg0->unk_40 = 0.0f;
    arg0->unk_44 = 0.0f;
    arg0->unk_48 = 1.0f;
    arg0->unk_50 = 1.0f;
    arg0->unk_4C = 0.0f;
    arg0->unk_78 = 0.0f;
    arg0->unk_7C = 0.0f;
    arg0->unk_30 = 0;
    temp = arg0->unk_38;
    if (temp != NULL && temp->unk_00 != NULL) {
        temp2 = temp->unk_04;
        arg0->unk_88.unk_00 = temp2->unk_00;
        arg0->unk_88.unk_04 = temp2->unk_04;
        arg0->unk_88.unk_08 = temp2->unk_08;
        arg0->unk_88.unk_0C = temp2->unk_0C;
        arg0->unk_88.unk_10 = temp2->unk_10;
        arg0->unk_88.unk_14 = temp2->unk_14;
        arg0->unk_88.unk_18 = temp2->unk_18;
    }
}
