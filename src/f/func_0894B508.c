#include "common.h"

extern u8 D_08A477CC[];
void func_0880416C(void *);

u8 **func_0894B508(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A477CC;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
