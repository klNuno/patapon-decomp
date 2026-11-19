#include "common.h"

void func_0880416C(void *);
void func_0880E85C(void *, s32);

void *func_0880E80C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0880E85C(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
