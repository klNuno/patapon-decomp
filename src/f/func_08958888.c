#include "common.h"

f32 func_0887ADC8(void *);
s32 func_0887B024(s32);

typedef struct {
    u8 pad_00[8];
    u8 unk_08[1];
} UnkObject;

u16 func_08958888(UnkObject *arg0)
{
    f32 temp = func_0887ADC8(&arg0->unk_08);
    return (u16)(temp - (f32)(u32)func_0887B024((s32)&arg0->unk_08));
}
