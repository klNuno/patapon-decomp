#include "common.h"

typedef struct T0895B830 T0895B830;

void func_0880416C(void *);
void func_0895B8EC(T0895B830 *, s32);

T0895B830 *func_0895B7E0(T0895B830 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0895B8EC(arg0, 1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
