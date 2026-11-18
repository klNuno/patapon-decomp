#include "common.h"

void func_0880416C(void *);
void func_089290DC(void *, s32);
void func_08929268(void *, s32);
void func_08929354(void *);
void func_0895EFE4(void *, s32);
extern u8 D_08A46F14[];

u8 *func_089292CC(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)(arg0 + 8) = D_08A46F14;
        func_08929354(arg0);
        if (arg0 + 0x24 != NULL) {
            func_089290DC(arg0 + 0x1838, 0);
            func_08929268(arg0 + 0x24, 0);
        }
        func_0895EFE4(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
