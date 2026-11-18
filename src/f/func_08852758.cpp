#include "common.h"

extern "C" {

class Del_08852758 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08853A80(s32, s32);
void func_0880416C(void *);

class Ptr_08852758 {
public:
    s32 unk_00;
    Del_08852758 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_08853A80(p, unk_00);
            }
        }
    }
};

typedef struct {
    Ptr_08852758 *unk_00;
    s32 unk_04;
} V_08852758;

typedef struct {
    u8 pad_00[0x104];
    V_08852758 unk_104;
} Obj_08852758;

Obj_08852758 *func_08852758(Obj_08852758 *arg0, s16 arg1) {
    Ptr_08852758 *p;
    Ptr_08852758 **d;
    s32 *n;

    if (arg0 != NULL) {
        p = arg0->unk_104.unk_00;
        d = &arg0->unk_104.unk_00;
        if ((u32)p != (u32)(p + arg0->unk_104.unk_04)) {
            n = &arg0->unk_104.unk_04;
            do {
                if (p != NULL) {
                    if (p != NULL) {
                        p->release();
                    }
                }
                p++;
            } while (p != *d + *n);
        }
        arg0->unk_104.unk_04 = 0;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
