#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V_088A45BC;

typedef struct {
    void *unk_00;
    u8 unk_04[0x24];
    V_088A45BC unk_28;
    s32 unk_30;
    s32 unk_34;
    f32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    u8 unk_54;
    u8 pad_55[3];
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    u8 unk_68;
    u8 pad_69[3];
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    f32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    u8 unk_9C;
    u8 unk_9D;
    u8 pad_9E[2];
    s32 unk_A0;
} Obj_088A45BC;

extern u8 D_08A458E8[];
extern u8 D_08A458F8[];
extern u8 D_08A45908[];

Obj_088A45BC *func_088A45BC(Obj_088A45BC *arg0, Obj_088A45BC *arg1) {
    s32 *s;
    s32 *p;
    V_088A45BC *v;
    s32 *n;

    arg0->unk_00 = D_08A45908;
    arg0->unk_00 = D_08A458F8;
    arg0->unk_28.unk_00 = (s32 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_28.unk_04 = arg1->unk_28.unk_04;
    p = arg0->unk_28.unk_00;
    s = arg1->unk_28.unk_00;
    v = &arg0->unk_28;
    if ((u32)p != (u32)(p + arg0->unk_28.unk_04)) {
        n = &arg0->unk_28.unk_04;
        do {
            if (p != NULL) {
                *p = *s;
                s++;
            }
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_00 = D_08A458E8;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_3C = arg1->unk_3C;
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
    arg0->unk_74 = arg1->unk_74;
    arg0->unk_78 = arg1->unk_78;
    arg0->unk_7C = arg1->unk_7C;
    arg0->unk_80 = arg1->unk_80;
    arg0->unk_84 = arg1->unk_84;
    arg0->unk_88 = arg1->unk_88;
    arg0->unk_8C = arg1->unk_8C;
    arg0->unk_90 = arg1->unk_90;
    arg0->unk_94 = arg1->unk_94;
    arg0->unk_98 = arg1->unk_98;
    arg0->unk_9C = arg1->unk_9C;
    arg0->unk_9D = arg1->unk_9D;
    arg0->unk_A0 = arg1->unk_A0;
    return arg0;
}
