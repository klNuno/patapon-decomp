#include "common.h"

extern "C" {
struct T {
    s8 unk_00;
};

extern void func_08812570(s32 *, s32, u32, T);

void func_08812550(s32 *arg0, s32 arg1, u32 arg2)
{
    T temp = { 0 };
    func_08812570(arg0, arg1, arg2, temp);
}
}
