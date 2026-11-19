#include "common.h"

typedef struct {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0;
} T;

void func_08958374(s32, f32);

void func_08984760(T **arg0)
{
    func_08958374((s32)&(*arg0)->unk_2E3C0, 0.0f);
}
