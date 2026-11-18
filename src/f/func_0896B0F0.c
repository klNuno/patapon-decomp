#include "common.h"

typedef struct Elem_0896B0F0 {
    s32 unk_00;
    s32 unk_04;
} Elem_0896B0F0;

typedef struct Vec_0896B0F0 {
    Elem_0896B0F0 *unk_00;
    s32 unk_04;
} Vec_0896B0F0;

typedef struct Obj_0896B0F0 {
    u8 pad_00[0x1004];
    Vec_0896B0F0 unk_1004;
} Obj_0896B0F0;

Obj_0896B0F0 *func_0896B0F0(Obj_0896B0F0 *arg0, Obj_0896B0F0 *arg1) {
    Elem_0896B0F0 *src;
    Elem_0896B0F0 *end;
    Elem_0896B0F0 *p;
    Vec_0896B0F0 *vp;

    if (arg0 != arg1) {
        src = arg1->unk_1004.unk_00;
        end = src + arg1->unk_1004.unk_04;
        p = arg0->unk_1004.unk_00;
        vp = &arg0->unk_1004;
        if ((u32)p != (u32)(p + arg0->unk_1004.unk_04)) {
            do {
                p++;
            } while (p != vp->unk_00 + arg0->unk_1004.unk_04);
        }
        arg0->unk_1004.unk_04 = 0;
        p = arg0->unk_1004.unk_00;
        for (; src != end; src++, p++) {
            if (p != NULL) {
                p->unk_00 = src->unk_00;
                p->unk_04 = src->unk_04;
            }
            arg0->unk_1004.unk_04++;
        }
    }
    return arg0;
}
