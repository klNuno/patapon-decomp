#include "common.h"

extern s32 func_088586E8(void);
u8 *func_089B53BC(s32);
s32 func_08913AE0(char *);
void func_089139A4(void *, s32, void *, s32);

void func_0886F474(u8 *arg0)
{
    if ((u8)func_08913AE0((char *)func_089B53BC(func_088586E8())) == 1) {
        func_089139A4(func_089B53BC(func_088586E8()), 1, arg0 + 0x30, 1);
    }
}
