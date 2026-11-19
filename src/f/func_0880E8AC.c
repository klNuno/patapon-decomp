#include "common.h"

void func_0880416C(void *);
void *func_0880E8FC(void *, s16);

void *func_0880E8AC(void *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_0880E8FC(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
