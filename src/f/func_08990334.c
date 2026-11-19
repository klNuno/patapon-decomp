#include "common.h"

extern u8 D_08A48530[];
void func_0880416C(void *);

void func_08975D5C(void **, s32);


void **func_08990334(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A48530;
        func_08975D5C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
