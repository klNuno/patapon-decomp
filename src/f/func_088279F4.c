#include "common.h"

extern u8 D_08A447A0[];
extern u8 D_08A44770[];
void func_0880416C(void *);

u8 *volatile *func_088279F4(u8 *volatile *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A447A0;
        if (arg0 != NULL) {
            *arg0 = D_08A44770;
        }
        if (arg1 > 0) {
            func_0880416C((void *)arg0);
        }
    }
    return arg0;
}
