#include "common.h"

extern "C" {

struct C {
    u8 pad_00[0x100];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
};

extern void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_08864BF8(void *, s32);
void func_088DF644(void *, s32);
void func_088F44BC(void *, s32);
void func_08925560(void *, s32);
extern u8 D_08A4643C[];

C *func_088DFA90(C *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((u8 *)arg0 + 0x100) = D_08A4643C;
        arg0->vfunc_18();
        func_088DF644((u8 *)arg0 + 0x1A30, -1);
        func_088F44BC((u8 *)arg0 + 0x19A0, -1);
        func_0885C534((u8 *)arg0 + 0x550, -1);
        func_08925560((u8 *)arg0 + 0x110, 0);
        func_08864BF8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
