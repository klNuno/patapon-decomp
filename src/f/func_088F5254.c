#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_088F5254;

typedef struct {
    u8 pad_00[0x40E0];
    u8 unk_40E0[0x4B04 - 0x40E0];
    Vec_088F5254 unk_4B04;
} Obj_088F5254;

u32 func_089B0ADC(void *);
s32 func_089B0AE4(void *, u32);

void func_088F5254(Obj_088F5254 *arg0) {
    s32 *p;
    Vec_088F5254 *vp;
    s32 *sp;
    u32 i;
    s32 *q;

    p = arg0->unk_4B04.unk_00;
    vp = &arg0->unk_4B04;
    if ((u32)p != (u32)(p + arg0->unk_4B04.unk_04)) {
        sp = &arg0->unk_4B04.unk_04;
        do {
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_4B04.unk_04 = 0;
    for (i = 0; i < func_089B0ADC(arg0->unk_40E0); i++) {
        s32 v = func_089B0AE4(arg0->unk_40E0, i);
        q = arg0->unk_4B04.unk_00 + arg0->unk_4B04.unk_04;
        if (q != NULL) {
            *q = v;
        }
        arg0->unk_4B04.unk_04++;
    }
}
