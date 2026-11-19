#include "common.h"

extern u8 D_08A4437C[];
extern u8 D_08A4435C[];
extern void func_0880416C(void *);

u8 *volatile *func_08804EE8(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4437C;
        if (arg0 != NULL) {
            *arg0 = D_08A4435C;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
