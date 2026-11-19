#include "common.h"

extern void func_08810708(void *, s32);
extern void func_0880416C(void *);

void *func_0880E85C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08810708(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
