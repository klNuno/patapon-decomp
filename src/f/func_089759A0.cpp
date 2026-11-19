#include "common.h"

extern "C" {
void func_08814BB4(s32);
s32 func_08814C0C(s32);
void func_08859B80(s32);
extern s32 func_088CB02C(s32);
s32 func_088CB0F8(s32, s32, s32);

void func_089759A0(s32 *arg0, s32 arg1, s32 arg2)
{
    s32 temp = *arg0;
    func_08814BB4(4);
    func_08859B80(func_088CB0F8(func_088CB02C(temp), arg1, arg2));
    func_08814C0C(4);
    func_08814C0C(9);
}
}
