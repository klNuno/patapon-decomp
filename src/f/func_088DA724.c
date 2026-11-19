#include "common.h"

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} Unk;

typedef struct {
    u8 pad_00[0x30];
    Unk unk_30;
} Unk2;

void func_088DA724(Unk2 *arg0)
{
    s32 *temp;
    Unk *temp2;
    u32 temp3;

    temp3 = arg0->unk_30.unk_04;
    temp = arg0->unk_30.unk_00;
    temp2 = &arg0->unk_30;
    if ((u32)temp != (u32)(temp + temp3)) {
        s32 *temp4 = *(s32 *volatile *)&temp2->unk_00 + temp3;
        do {
            temp++;
        } while (temp != temp4);
    }
    arg0->unk_30.unk_04 = 0;
}
