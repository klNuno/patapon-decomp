#include "common.h"

void func_08804000(void *, void (*)(void *), s32, s32);
void func_0880416C(void *);
void func_0899D374(void);

void *func_0899D318(void *arg0, s16 arg1) {
    s16 temp = arg1;
    void *temp2 = arg0;

    if (temp2 != NULL) {
        func_08804000(temp2, (void (*)(void *))func_0899D374, 0xA0, 3);
        if (temp > 0) {
            func_0880416C(temp2);
        }
    }
    return temp2;
}
