#include "common.h"

extern "C" {

class Del_089195FC {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_0891A900(s32, s32);
void func_0880416C(void *);
void func_08925D14(void *, s32);
void func_089191D8(void *, s32);

class Ptr_089195FC {
public:
    s32 unk_00;
    Del_089195FC *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_0891A900(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_089195FC *unk_00;
    s32 unk_04;
} V_089195FC;

typedef struct {
    u8 pad_00[0x410];
    V_089195FC unk_410;
} S_089195FC;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} B_089195FC;

typedef struct {
    u8 pad_00[0x8];
    B_089195FC unk_08;
    u8 pad_10[0x230];
    S_089195FC unk_240;
    u8 pad_658[0x20];
    u8 unk_678[0x1058];
    u8 unk_16D0[1];
} Obj_089195FC;

Obj_089195FC *func_089195FC(Obj_089195FC *arg0, s16 arg1) {
    Ptr_089195FC *p;
    Ptr_089195FC **d;
    s32 *n;

    if (arg0 != NULL) {
        func_08925D14(arg0->unk_16D0, -1);
        func_08925D14(arg0->unk_678, -1);
        if (&arg0->unk_240 != NULL) {
            p = arg0->unk_240.unk_410.unk_00;
            d = &arg0->unk_240.unk_410.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_240.unk_410.unk_04)) {
                n = &arg0->unk_240.unk_410.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_240.unk_410.unk_04 = 0;
        }
        if (&arg0->unk_08 != NULL) {
            func_089191D8(&arg0->unk_08.unk_04, -1);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
