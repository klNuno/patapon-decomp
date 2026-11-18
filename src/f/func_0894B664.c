#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
} T0;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    s32 unk_0C;
} T;

T0 *func_08958DE0(void *);
u64 func_089AB994(f32);
u64 func_089AC12C(u64, u64);
f32 func_089ACE68(u32, u32);

f32 func_0894B664(T *arg0) {
    u64 temp2;
    f32 temp1;
    T0 *temp0 = func_08958DE0(arg0->unk_08);
    f32 temp = (f32)arg0->unk_0C / (f32)temp0->unk_44;
    temp1 = temp > 1.0f ? 1.0f : (temp < 0.0f ? 0.0f : temp);
    temp2 = func_089AC12C(0x3FF0000000000000ULL, func_089AB994(temp1));
    return func_089ACE68((u32)temp2, (u32)(temp2 >> 32));
}
