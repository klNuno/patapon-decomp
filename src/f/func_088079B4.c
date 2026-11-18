#include "common.h"

void func_0880416C(void *);
void *func_08806D24(void *);
void func_088070B4(s64 *, s32);
void func_088072B0(s64 *, void *);
void func_08807A88(void *);
void func_08807B88(void *);
void func_088093BC(void *);
extern s32 D_08A4914C[];
extern u8 D_08A49294[];
extern u8 D_08A492E8[];
extern u8 D_08A49338[];
extern u8 D_08A49388[];

void *func_088079B4(void *arg0, s16 arg1) {
    s64 sp18;

    if (arg0 != NULL) {
        func_088072B0(&sp18, func_08806D24(arg0));
        if (--D_08A4914C[0] == 0) {
            func_088093BC(D_08A492E8);
            func_088093BC(D_08A49388);
            func_088093BC(D_08A49338);
            func_08807B88(D_08A49294);
            func_08807A88(D_08A492E8);
            func_08807A88(D_08A49388);
            func_08807A88(D_08A49338);
        }
        func_088070B4(&sp18, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
