#include "common.h"

typedef struct {
    u8 pad_00[0x1824];
    u32 unk_1824;
    u32 unk_1828;
    u32 unk_182C;
    u32 unk_1830;
} UnkObject;

void func_089BD450(UnkObject *arg0, f32 *arg1, f32 *arg2, u32 *arg3)
{
    u32 temp;
    u32 temp2;
    u32 temp3;
    u32 temp4;

    *arg1 = *arg2 = *arg3 = 0;
    temp2 = arg0->unk_1828;
    temp = arg0->unk_1824;
    if (temp + temp2 != 0) {
        temp3 = arg0->unk_182C + temp;
        temp4 = arg0->unk_1830 + temp2;
        *arg1 = *arg2 = (f32)temp3 / (f32)(temp3 + temp4);
    }
}
