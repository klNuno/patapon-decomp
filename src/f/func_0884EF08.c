#include "common.h"

void func_0880416C(void *);
extern u8 D_08A4489C[];

void **func_0884EF08(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4489C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
