#include "common.h"

extern "C" {

class Del_08868628 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_0880416C(void *);
void func_08869E08(s32, s32);

class Ptr_08868628 {
public:
    s32 unk_00;
    Del_08868628 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08869E08(p, unk_00);
            }
        }
    }
};

Ptr_08868628 *func_08868628(Ptr_08868628 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            arg0->release();
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
