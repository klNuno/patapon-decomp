#include "common.h"

extern "C" {
extern char D_089D92B0[];
s32 func_08806C38(void *, char *);
s32 func_08806C30(void *);

s32 func_08806BF0(void *arg0, void *arg1)
{
    return func_08806C38(arg1, D_089D92B0) != 0
        ? func_08806C30((u8 *)arg0 + 0xC) : 0;
}
}
