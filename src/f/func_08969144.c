#include "common.h"

typedef struct {
    u8 pad_00[0x1870];
    u8 unk_1870;
    u8 pad_1871[3];
    f32 unk_1874;
} T;

void func_08969144(T *arg0, f32 arg1)
{
    arg0->unk_1874 = arg1 > 1.0f ? 1.0f : (arg1 < 0.0f ? 0.0f : arg1);
    arg0->unk_1870 = 1;
}
