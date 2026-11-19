#include "common.h"

extern u8 D_08A44904[];
extern u8 D_08A44770[];
extern void func_0880416C(void *);

u8 *volatile *func_08858BE4(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A44904;
        if (arg0 != NULL) {
            *arg0 = D_08A44770;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
