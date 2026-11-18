#include "common.h"

extern "C" {

struct T088E1E7C_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_0886A45C(s32, s32);
void func_0880416C(void *);

struct T088E1E7C_R {
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

struct T088E1E7C_H {
    s32 unk_00;
    T088E1E7C_A *unk_04;
    s32 unk_08;
    T088E1E7C_R unk_0C;
};

T088E1E7C_H *func_088E1E7C(T088E1E7C_H *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                s32 *p = &arg0->unk_08;
                if (*p != 0) {
                    T088E1E7C_R *r = &arg0->unk_0C;
                    if (r->release() == 0) {
                        arg0->unk_04->vfunc_0C(*p, *(s32 **)r, arg0->unk_00);
                        func_0886A45C(*p, arg0->unk_00);
                    }
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
