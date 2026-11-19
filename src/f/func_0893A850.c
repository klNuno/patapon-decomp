#include "common.h"

void func_0880416C(void *);
void func_0893A8A8(void *, s32);

static inline void func_0893A850_unk(void *arg0) {
    if (arg0 != NULL) {
        func_0893A8A8(arg0, -1);
    }
}

void *func_0893A850(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0893A850_unk(arg0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
