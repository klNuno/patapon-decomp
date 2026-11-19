#include "common.h"

extern "C" {
s32 func_088F5BA0(s32);
void func_088F5BD4(char *arg0);
void func_08992778(void *, u32);
void func_0899288C(void *, s32);

void func_088F5A24(char *arg0, u32 arg1)
{
    if (func_088F5BA0((s32)arg0) != 0) {
        func_0899288C(arg0 + 0x14, 6);
    }
    func_08992778(arg0 + 0x14, arg1);
    func_088F5BD4(arg0);
}
}
