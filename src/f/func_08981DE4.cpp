#include "common.h"

extern "C" {

struct Obj_08981DE4_M {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct Obj_08981DE4 {
    void *unk_00;
    u8 pad_04[8];
    Obj_08981DE4_M unk_0C;
    u8 pad_10[0xA40];
    u8 unk_A50[0x3E50];
    u8 unk_48A0[4];
};

void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_08983348(void *);
void func_08980550(void *, s32);
void func_08982394(void *, s32);
extern u8 D_08A478D8[];
extern u8 D_08A48024[];
extern u8 D_08A48120[];

Obj_08981DE4 *func_08981DE4(Obj_08981DE4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A48120;
        func_08983348(arg0->unk_A50);
        func_08980550(arg0->unk_48A0, -1);
        func_08982394(arg0->unk_A50, -1);
        if (&arg0->unk_0C != NULL) {
            *(void **)&arg0->unk_0C = D_08A48024;
            arg0->unk_0C.v3();
            func_0886B11C(&arg0->unk_0C, 0);
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A478D8;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
