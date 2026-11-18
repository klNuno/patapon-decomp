#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_088D7134;

typedef struct {
    void *unk_00;
    u8 unk_04[0x24];
    Vec_088D7134 unk_28;
    s32 unk_30;
    s32 unk_34;
} Obj_088D7134;

extern u8 D_08A458F8[];
extern u8 D_08A45908[];

Obj_088D7134 *func_088D7134(Obj_088D7134 *arg0, Obj_088D7134 *arg1) {
    s32 *src;
    s32 *p;
    Vec_088D7134 *vp;
    s32 *sp;

    arg0->unk_00 = D_08A45908;
    arg0->unk_00 = D_08A458F8;
    arg0->unk_28.unk_00 = (s32 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_28.unk_04 = arg1->unk_28.unk_04;
    src = arg1->unk_28.unk_00;
    p = arg0->unk_28.unk_00;
    vp = &arg0->unk_28;
    if ((u32)p != (u32)(p + arg0->unk_28.unk_04)) {
        sp = &arg0->unk_28.unk_04;
        do {
            if (p != NULL) {
                *p = *src;
                src++;
            }
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    return arg0;
}
