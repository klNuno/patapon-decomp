#include "common.h"

extern void func_08865F78(void *, s32);
extern void func_0880416C(void *);

void *func_0899D374(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
