#include "common.h"

typedef struct {
    f32 unk_00[4];
} V;

typedef struct {
    V unk_00;
    V unk_10;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[0x4];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    s32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
    s32 unk_6C;
    s32 unk_70;
    u8 pad_74[0x4];
    s32 unk_78;
    s32 unk_7C;
    u8 unk_80;
    u8 pad_81[0x7];
    s32 unk_88;
    f32 unk_8C;
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    f32 unk_9C;
    s32 unk_A0;
} T;

T *func_088D637C(T *arg0, const T *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_20 = arg1->unk_20;
    arg0->unk_24 = arg1->unk_24;
    arg0->unk_28 = arg1->unk_28;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_44 = arg1->unk_44;
    arg0->unk_48 = arg1->unk_48;
    arg0->unk_4C = arg1->unk_4C;
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_54 = arg1->unk_54;
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_5C = arg1->unk_5C;
    arg0->unk_60 = arg1->unk_60;
    arg0->unk_64 = arg1->unk_64;
    arg0->unk_68 = arg1->unk_68;
    arg0->unk_6C = arg1->unk_6C;
    arg0->unk_70 = arg1->unk_70;
    arg0->unk_78 = arg1->unk_78;
    arg0->unk_7C = arg1->unk_7C;
    arg0->unk_80 = arg1->unk_80;
    arg0->unk_88 = arg1->unk_88;
    arg0->unk_8C = arg1->unk_8C;
    arg0->unk_90 = arg1->unk_90;
    arg0->unk_94 = arg1->unk_94;
    arg0->unk_98 = arg1->unk_98;
    arg0->unk_9C = arg1->unk_9C;
    arg0->unk_A0 = arg1->unk_A0;
    return arg0;
}
