#include "common.h"

extern u8 D_08A45AF8[];
void func_0880416C(void *);
void func_0884E54C(void **, s32);


void **func_088A8864(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A45AF8;
        func_0884E54C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
