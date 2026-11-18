#include "common.h"

typedef struct {
    u8 pad_00[0x6C];
    u32 unk_6C;
} T1;

typedef struct {
    T1 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u32 unk_0C;
    u8 pad_10[4];
    f32 unk_14;
    s32 unk_18;
} E_088A4094;

void func_0889B100(E_088A4094 *, f32);

void func_0889B014(E_088A4094 *arg0, u32 arg1) {
    f32 temp;
    if (arg0->unk_08 >= 0) {
        ++arg0->unk_18;
        temp = (f32)arg1 / 4800.0f;
        temp *= (f32)arg0->unk_00->unk_6C;
        arg1 = (u32)temp;
        if (arg1 < arg0->unk_0C) {
            arg0->unk_0C -= arg1;
        } else {
            func_0889B100(arg0, arg0->unk_14);
        }
    }
}
