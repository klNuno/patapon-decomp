#include "common.h"

extern void func_0880416C(void *);
void func_088F23D0(void *, s32);
extern u8 D_08A4625C[];

void *func_088D4E74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)arg0 = D_08A4625C;
        func_088F23D0((u8 *)arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
