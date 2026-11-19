#include "common.h"

extern u8 D_08A4435C[];
void func_0880416C(void *);

u8 **func_088041A8(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4435C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
