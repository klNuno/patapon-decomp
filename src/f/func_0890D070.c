#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} T;

extern T D_089E4B30[];

T *func_0890D070(s32 arg0)
{
    return &D_089E4B30[arg0];
}
