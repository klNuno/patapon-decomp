#include "common.h"

extern "C" {

class Del {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_08869DB4(s32, s32);
void func_0880416C(void *);

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_08869DB4(p, unk_00);
            }
        }
    }
};

class Obj : public Ptr {
public:
    s32 unk_10;
    void *unk_14;
};

extern u8 D_08A44BA4[];
void func_088696FC(Ptr *);

Obj *func_08869628(Obj *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_14 = D_08A44BA4;
        func_088696FC(arg0);
        arg0->unk_10 = 0;
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                arg0->release();
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
