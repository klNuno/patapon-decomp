#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x8100];
    void *unk_8100;
    u8 pad_8104[0xC];
    u8 unk_8110[0x130A0];
    u8 unk_1B1B0[0x448];
    u8 unk_1B5F8[0x10858];
    u8 unk_2BE50[0x40B0];
    s32 unk_2FF00;
    u8 unk_2FF04[4];
} M_088C5F90;

struct VB_088C5F90 {
    u8 pad_00[0x8100];
};

struct V_088C5F90 : VB_088C5F90 {
    virtual void v0();
    virtual void v1();
};

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x1AF0 - 0x10];
    M_088C5F90 unk_1AF0;
    u8 pad_319F8[0x324A0 - 0x319F8];
    u8 unk_324A0[0x324D0 - 0x324A0];
    u8 unk_324D0[0x36A10 - 0x324D0];
    u8 unk_36A10[4];
} S_088C5F90;

void func_0880416C(void *);
void func_088821B0(void *, s32);
void func_088BC5CC(void *, s32);
void func_088CE04C(void *, s32);
void func_088DFA90(void *, s32);
void func_088E07A8(void *, s32);
void func_088E2548(void *, s32);
void func_088F6C10(void *, s32);
void func_0893B9F8(void *, s32);
void func_0898F728(void *, s32);
void func_089A8408(void *, s32);
extern u8 D_08A46458[];

S_088C5F90 *func_088C5F90(S_088C5F90 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_089A8408(arg0->unk_36A10, -1);
        func_088821B0(arg0->unk_324D0, -1);
        func_088CE04C(arg0->unk_324A0, -1);
        if (&arg0->unk_1AF0 != NULL) {
            arg0->unk_1AF0.unk_8100 = D_08A46458;
            ((V_088C5F90 *)&arg0->unk_1AF0)->v1();
            func_0893B9F8(arg0->unk_1AF0.unk_2FF04, -1);
            func_0898F728(arg0->unk_1AF0.unk_2BE50, -1);
            func_088F6C10(arg0->unk_1AF0.unk_1B5F8, -1);
            func_088E2548(arg0->unk_1AF0.unk_1B1B0, -1);
            func_088E07A8(arg0->unk_1AF0.unk_8110, -1);
            func_088BC5CC(&arg0->unk_1AF0, 0);
        }
        func_088DFA90(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
