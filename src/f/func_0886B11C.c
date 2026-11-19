#include "common.h"

extern void func_0880416C(void *);
extern void func_0886B180(void *, s16);
extern u8 D_08A44F28[];

void *func_0886B11C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u8 *temp = (u8 *)arg0 + 4;
        *(void **)arg0 = D_08A44F28;
        if (temp != NULL) {
            func_0886B180(temp, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
