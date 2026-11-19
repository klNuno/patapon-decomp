#include "common.h"

extern "C" {
void func_0882D98C(f32, void *, s32);

void func_0893EB8C(void **arg0, s32 arg1)
{
    void *temp = *arg0;
    if (temp != NULL) {
        func_0882D98C(-1.0f, temp, arg1);
    }
}
}
