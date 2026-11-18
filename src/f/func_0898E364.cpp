#include "common.h"

extern "C" {

class Alloc_0898E364 {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

struct RC_0898E364 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        } else {
            return 0;
        }
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct M_0898E364 {
    s32 unk_00;
    Alloc_0898E364 *unk_04;
    s32 unk_08;
    RC_0898E364 unk_0C;
};

struct W_0898E364 {
    M_0898E364 unk_00;
};

typedef struct Obj_0898E364 {
    u8 pad_00[0x10];
    u8 unk_10[0x90];
    W_0898E364 unk_A0;
    u8 pad_B0[0x34];
    void *unk_E4;
} Obj_0898E364;

extern u8 D_08A484B4[];

void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_0886A45C(s32, s32);

Obj_0898E364 *func_0898E364(Obj_0898E364 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_E4 = D_08A484B4;
        if (&arg0->unk_A0 != NULL) {
            if (&arg0->unk_A0.unk_00 != NULL) {
                s32 *h = &arg0->unk_A0.unk_00.unk_08;
                if (arg0->unk_A0.unk_00.unk_08 != 0) {
                    RC_0898E364 *rc = &arg0->unk_A0.unk_00.unk_0C;
                    if (arg0->unk_A0.unk_00.unk_0C.release() == 0) {
                        arg0->unk_A0.unk_00.unk_04->unk_0C(*h, rc->unk_00, arg0->unk_A0.unk_00.unk_00);
                        func_0886A45C(*h, arg0->unk_A0.unk_00.unk_00);
                    }
                }
            }
        }
        func_08865F78(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
