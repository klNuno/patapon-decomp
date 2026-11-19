#include "common.h"

typedef struct {
    u8 pad_00[0x8C];
    u8 *unk_8C;
} T;

s32 func_0885AD48(T *arg0, s32 arg1)
{
    u8 *temp = arg0->unk_8C;
    if (temp != NULL && arg1 != 0) {
        *temp = (*temp != 0) ^ 1;
    }
    return 1;
}
