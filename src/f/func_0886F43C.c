#include "common.h"

s32 func_088586E8(void);
u8 *func_089B53BC(s32);
s32 func_08913AE0(char *);

s32 func_0886F43C(void) {
    return (u8)func_08913AE0((char *)func_089B53BC(func_088586E8())) == 1;
}
