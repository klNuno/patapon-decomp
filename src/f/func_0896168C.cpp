#include "common.h"

extern "C" {

struct Sub114_088978E4;

struct Obj_0896168C_A {
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Obj_0896168C_B {
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct T0896168C {
    u8 pad_00[0xD4];
    u8 unk_D4;
    u8 pad_D5[0x3B];
    Obj_0896168C_A *unk_110;
    Sub114_088978E4 *unk_114;
    Obj_0896168C_B *unk_118;
    Obj_0896168C_B *unk_11C;
    Obj_0896168C_B *unk_120;
};

void func_088F5A7C(Sub114_088978E4 *);

void func_0896168C(T0896168C *arg0) {
    if (arg0->unk_D4 != 0) {
        if (arg0->unk_110 != NULL) {
            arg0->unk_110->v2();
        }
        if (arg0->unk_114 != NULL) {
            func_088F5A7C(arg0->unk_114);
        }
        if (arg0->unk_118 != NULL) {
            arg0->unk_118->v3();
        }
        if (arg0->unk_11C != NULL) {
            arg0->unk_11C->v3();
        }
        if (arg0->unk_120 != NULL) {
            arg0->unk_120->v3();
        }
    }
}

}
