#include "common.h"

typedef struct {
    u8 pad_00[8];
    char *unk_08;
    u8 pad_0C[4];
} S_08899DAC_0;

typedef struct {
    u8 pad_00[0x3D8];
    S_08899DAC_0 *unk_3D8;
} S_08899DAC;

s32 func_08894F6C(char *arg0, s32 arg1);

void func_08899DAC(s32 arg0, s32 arg1, s32 arg2) {
    S_08899DAC_0 *temp;
    u32 temp2;
    temp = ((S_08899DAC *)arg0)->unk_3D8;
    temp2 = (u32)arg2 * sizeof(*temp);
    func_08894F6C(((S_08899DAC_0 *)((u8 *)temp + temp2))->unk_08, arg1);
}
