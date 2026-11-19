#include "common.h"

extern "C" {
struct A0881030C {};

void func_0880DA00(void *);
s32 func_0880DA4C(s32);
void func_0880F6B4(void *, s32, s32, u8 *, u8 *, A0881030C);
void func_0880FFF4(void *, u32);
u32 func_088102F0(s32);

void *func_0880F3C8(void *arg0, u8 *arg1)
{
    A0881030C temp;
    u32 n;

    func_0880DA4C((s32)arg0);
    func_0880DA00(arg0);
    n = func_088102F0((s32)arg1);
    func_0880FFF4(arg0, n);
    func_0880F6B4(arg0, 0, 0, arg1, arg1 + n, temp);
    return arg0;
}
}
