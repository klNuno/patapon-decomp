#include "common.h"

extern "C" {
struct T {
    s8 unk_00;
};

extern void func_0880DEBC(char *, s32, T);

void func_0880DE9C(char *arg0, s32 arg1)
{
    T temp = { 0 };
    func_0880DEBC(arg0, arg1, temp);
}
}
