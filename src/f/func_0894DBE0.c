#include "common.h"

void func_0880416C(void *);
extern u8 D_08A47820[];
extern u8 D_08A477CC[];

u8 *volatile *func_0894DBE0(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[0] = D_08A47820;
        if (arg0 != NULL) {
            arg0[0] = D_08A477CC;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
