#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x1C];
    u8 unk_20[1];
} S;

u8 *func_088CB534(S *arg0)
{
    return arg0 != NULL ? (arg0->unk_00 != 10 ? NULL : arg0->unk_20) : NULL;
}
