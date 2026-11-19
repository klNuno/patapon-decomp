#include "common.h"

extern void func_0880416C(void *);
extern void func_0880644C(void *, s16);
extern u8 D_08A44508[];

void *func_08807250(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)arg0 = D_08A44508;
        func_0880644C((u8 *)arg0 + 0x1C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
