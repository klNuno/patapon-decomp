#include "common.h"

extern "C" {

struct A0881030C {};

u32 func_088102F0(s32);
void func_0880F6B4(void *, s32, s32, u8 *, u8 *, A0881030C);

void func_0880F484(void *arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    A0881030C temp;

    func_0880F6B4(arg0, arg1, arg2, arg3, arg3 + func_088102F0((s32)arg3), temp);
}

}
