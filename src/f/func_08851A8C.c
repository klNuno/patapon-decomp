#include "common.h"

s32 func_08852E24(void *);
void func_08852E6C(void *);
void func_08852F00(void *, s32);
s32 func_088539E8(void *);
void func_088539F0(void *, s32);

void func_08851A8C(void *arg0, void *arg1)
{
    if (func_08852E24(arg1) == 0) {
        func_088539F0(arg1, func_088539E8(arg1) - 1);
    } else {
        func_08852E6C(arg1);
    }
    func_08852F00(arg1, 0);
}
