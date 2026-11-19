#include "common.h"

void func_0880416C(void *);
void func_0893F388(void *, s32);
void func_089D53A8(void *);

void *func_089D534C(void *arg0, s16 arg1) {
    s16 temp = arg1;
    void *temp2 = arg0;

    if (temp2 != NULL) {
        func_089D53A8(temp2);
        func_0893F388((u8 *)temp2 + 4, -1);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
