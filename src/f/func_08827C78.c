#include "common.h"

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0xC];
    s32 *unk_14;
    s32 *unk_18;
    u8 pad_1C[4];
    s32 *unk_20;
} T;

void func_08827C78(T *arg0, s32 arg1)
{
    s32 *temp = arg0->unk_20;
    *temp++ = arg1;
    if ((u32)arg0->unk_18 <= (u32)temp) {
        temp = arg0->unk_14;
    }
    arg0->unk_20 = temp;
    arg0->unk_04++;
}
