#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} T;

s32 func_08811240(s32 arg0, s32 arg1);

s32 func_08811AA0(s32 arg0, s32 arg1)
{
    T temp;
    s32 temp2;
    temp2 = arg0;
    temp.unk_00 = arg1;
    return func_08811240((s32)&temp.unk_00, (s32)&temp2);
}
