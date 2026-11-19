#include "common.h"

extern u8 D_08A447D8[];
extern u8 D_08A447EC[];
extern void func_0880416C(void *);

u8 *volatile *func_08827AE0(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A447D8;
        if (arg0 != NULL) {
            *arg0 = D_08A447EC;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
