#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0x24];
    s32 *unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[4];
    s32 unk_44[4];
    u8 unk_54;
    u8 pad_55[3];
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    u8 unk_68;
    u8 pad_69[3];
    s32 unk_6C;
    u8 pad_70[8];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[4];
    s32 unk_84;
    s32 unk_88;
    s32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    u8 pad_9C;
    u8 unk_9D;
    u8 pad_9E[2];
    s32 unk_A0;
} Obj_0889B278;

extern u8 D_08A458E8[];
extern u8 D_08A458F8[];
extern u8 D_08A45908[];

Obj_0889B278 *func_0889B278(Obj_0889B278 *arg0, s32 arg1) {
    s32 *p;

    arg0->unk_00 = D_08A45908;
    arg0->unk_00 = D_08A458F8;
    arg0->unk_28 = (s32 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_2C = 0;
    arg0->unk_34 = 0;
    arg0->unk_30 = 0;
    arg0->unk_00 = D_08A458E8;
    arg0->unk_38 = 0x3C888723;
    arg0->unk_3C = 0;
    p = arg0->unk_44;
    do {
        *p = -1;
        p++;
    } while (p < arg0->unk_44 + 4);
    arg0->unk_54 = 1;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = 0;
    arg0->unk_78 = 0;
    arg0->unk_7C = 0;
    arg0->unk_84 = 0;
    arg0->unk_88 = 0;
    arg0->unk_8C = 0x3F800000;
    arg0->unk_90 = 0;
    arg0->unk_94 = 1;
    arg0->unk_98 = 0;
    arg0->unk_9D = 0;
    arg0->unk_A0 = arg1;
    return arg0;
}
