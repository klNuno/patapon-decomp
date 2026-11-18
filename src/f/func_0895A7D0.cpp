#include "common.h"

extern "C" {

class Elem {
public:
    u8 pad_00[0x18];
    virtual void func_0(s32);
};

typedef struct Vec {
    Elem *unk_00;
    s32 unk_04;
} Vec;

typedef struct S {
    u8 pad_00[0x710];
    Vec unk_710;
} S;

void func_0895A7D0(S *arg0) {
    Elem *p;
    Vec *vp;
    s32 *sp;

    vp = &arg0->unk_710;
    p = arg0->unk_710.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_710.unk_04)) {
        sp = &arg0->unk_710.unk_04;
        do {
            p->func_0(-1);
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_710.unk_04 = 0;
}

}
