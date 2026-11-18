#include "common.h"
extern "C" {
struct M {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
struct T {
    void *unk_00;
    u8 pad_04[8];
    M unk_0C;
    u8 pad_10[0xA34];
    u8 unk_A44[4];
};
void func_0880416C(void *);
void func_0886B11C(void *, s32);
void func_089BF2DC(void *, s32);
extern u8 D_08A478D8[];
extern u8 D_08A48024[];
extern u8 D_08A48BDC[];
T *func_089BEF68(T *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A48BDC;
        func_089BF2DC(arg0->unk_A44, -1);
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
