#include "common.h"

extern "C" {
struct T {
    s8 unk_00;
};

extern void func_08813178(char *, s32, T);

void func_08813158(char *arg0, s32 arg1)
{
    T temp = { 0 };
    func_08813178(arg0, arg1, temp);
}
}
