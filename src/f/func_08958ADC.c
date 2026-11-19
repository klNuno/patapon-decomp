#include "common.h"
void func_0880416C(void *);
extern u8 D_08A478D8[];

u8 **func_08958ADC(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A478D8;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
