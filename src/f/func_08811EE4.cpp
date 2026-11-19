#include "common.h"

extern "C" {
extern char D_089D9500[];
s32 func_08806C38(void *, char *);
s32 func_08811F24(void *);

s32 func_08811EE4(void *arg0, void *arg1)
{
    return func_08806C38(arg1, D_089D9500) != 0
        ? func_08811F24((u8 *)arg0 + 0xC) : 0;
}
}
