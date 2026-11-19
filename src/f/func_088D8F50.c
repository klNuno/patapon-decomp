#include "common.h"

void func_0880416C(void *);
void func_08852860(void *, s16);
extern u8 D_08A4638C[];

void *func_088D8F50(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4638C;
        func_08852860(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
