#include "common.h"

typedef struct Elem {
    u8 pad_00[0xA4];
} Elem;

typedef struct Vec {
    Elem *unk_00;
    s32 unk_04;
} Vec;

typedef struct S {
    u8 pad_00[0x524];
    Vec unk_524;
} S;

extern s32 func_0889B794(Elem *, s32);

void func_088A4838(S *arg0, s32 arg1) {
    Elem *p;
    Vec *vp;
    s32 *sp;

    vp = &arg0->unk_524;
    p = arg0->unk_524.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_524.unk_04)) {
        sp = &arg0->unk_524.unk_04;
        do {
            func_0889B794(p, arg1);
            p++;
        } while (p != vp->unk_00 + *sp);
    }
}
