#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 *unk_14;
    u32 unk_18;
} Unk_088A3998;

void func_088A3F0C(s32 arg0, s32 arg1, s32 arg2);

void func_088A3998(char *arg0, s32 arg1)
{
    u32 temp2 = ((Unk_088A3998 *)arg0)->unk_18;
    Unk_088A3998 *temp = (Unk_088A3998 *)arg0;
    s32 *temp3;

    arg0 = (char *)temp->unk_14;
    temp3 = (s32 *)arg0 + temp2;
    for (; (s32 *)arg0 != temp3 && *(s32 *)arg0 != arg1; arg0 += 4) {
    }
    if ((s32 *)arg0 != temp3) {
        func_088A3F0C((s32)arg0, (s32)(arg0 + 4), (s32)temp3);
        --temp->unk_18;
    }
}
