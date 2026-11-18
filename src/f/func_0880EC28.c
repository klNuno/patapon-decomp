#include "common.h"

void func_0880416C(void *);
void func_0880DCAC(void *, s32);
void func_0880E7BC(void *, s32);
void func_0880E8AC(void *, s32);
extern u8 D_08A446B8[];

void *func_0880EC28(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)arg0 = D_08A446B8;
        func_0880E7BC(arg0 + 0x20, -1);
        func_0880E7BC(arg0 + 0x14, -1);
        func_0880E8AC(arg0 + 8, -1);
        func_0880DCAC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
