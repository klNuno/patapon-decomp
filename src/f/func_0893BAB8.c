#include "common.h"

typedef struct Elem {
    u8 pad_00[0x28];
} Elem;

typedef struct Vec {
    Elem *unk_00;
    s32 unk_04;
} Vec;

typedef struct S {
    u8 pad_00[0xA04];
    Vec unk_A04;
} S;

extern s32 func_088804C0(Elem *, s32);

void func_0893BAB8(S *arg0) {
    Elem *p;
    Vec *vp;
    s32 *sp;

    vp = &arg0->unk_A04;
    p = arg0->unk_A04.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_A04.unk_04)) {
        sp = &arg0->unk_A04.unk_04;
        do {
            if (p != NULL) {
                func_088804C0(p, -1);
            }
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_A04.unk_04 = 0;
}
