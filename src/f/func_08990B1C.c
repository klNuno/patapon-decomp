#include "common.h"

typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0;
} Unk1;

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    f32 unk_08;
    u8 pad_0C[0xC];
    Unk1 *unk_18;
} Unk0;

f32 func_08819D88(f32);
s32 func_08865184(s32 arg0);
s32 func_088C6494(void *);
f32 fabsf(f32);

f32 func_08990B1C(Unk0 *arg0, f32 arg2, s32 arg1) {
    f32 temp;
    f32 temp2;
    temp = fabsf(*(f32 *)func_08865184(func_088C6494(&arg0->unk_18->unk_506F0)) - arg2) / arg0->unk_00;
    if (temp > 1.0f) {
        temp = 1.0f;
    }
    temp = fabsf(func_08819D88(1.5707964f * temp));
    if (arg1 != 0) {
        temp2 = arg0->unk_08;
        if (temp2 > temp) {
            temp = temp2;
        }
    }
    if (temp > 1.0f) {
        temp = 1.0f;
    }
    return temp;
}
