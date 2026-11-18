#include "common.h"

extern "C" {

struct A_088F73F4 {
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

struct R_088F73F4 {
    s32 *unk_00;
    s32 get() {
        s32 v;
        if (unk_00 != NULL) {
            v = *unk_00;
        } else {
            v = 0;
        }
        return v;
    }
    s32 release() { --*unk_00; return get(); }
};

struct H_088F73F4 {
    s32 unk_00;
    A_088F73F4 *unk_04;
    s32 unk_08;
    R_088F73F4 unk_0C;
};

typedef struct {
    u8 pad_00[0x218];
    H_088F73F4 *unk_218;
    s32 unk_21C;
    u8 pad_220[0x10834 - 0x220];
    u8 unk_10834[0x14];
    s32 unk_10848;
    s32 unk_1084C;
    u8 unk_10850;
} S_088F73F4;

void func_088F6A0C(void *);
void func_088F935C(s32, s32);

void func_088F73F4(S_088F73F4 *arg0) {
    H_088F73F4 *p;
    H_088F73F4 **dp;
    s32 *sp;

    func_088F6A0C(arg0->unk_10834);
    p = arg0->unk_218;
    dp = &arg0->unk_218;
    if ((u32)p != (u32)(p + arg0->unk_21C)) {
        sp = &arg0->unk_21C;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    s32 *q = &p->unk_08;
                    if (*q != 0) {
                        if (p->unk_0C.release() == 0) {
                            p->unk_04->v1(*q, p->unk_0C.unk_00, p->unk_00);
                            func_088F935C(*q, p->unk_00);
                        }
                    }
                }
            }
            p++;
        } while (p != *dp + *sp);
    }
    arg0->unk_21C = 0;
    arg0->unk_10848 = 0;
    arg0->unk_1084C = 0;
    arg0->unk_10850 = 1;
}

}
