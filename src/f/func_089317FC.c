#include "common.h"

void func_08880CDC(void *, s32);

void func_089317FC(u8 *arg0, s32 arg1, s32 arg2)
{
    func_08880CDC(arg0 + arg2 * 0xA0 + 0x10, arg1);
}
