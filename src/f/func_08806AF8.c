#include "common.h"

void func_0880416C(void *);
s32 *func_08806934(void *);
void func_08806B7C(s32, s32);
s32 func_08806B98(void *);

void *func_08806AF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (*func_08806934(arg0) != 0) {
            func_08806B7C(func_08806B98(arg0), *func_08806934(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
