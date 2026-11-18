#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u32 unk_08;
    u32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} Unk0;

void func_0883C1F8(s32, s32, s32);
s32 func_0898E2AC(Unk0 *);

void func_0898E1AC(Unk0 *arg0) {
    f32 temp = arg0->unk_14;
    if (func_0898E2AC(arg0) == 0) {
        f32 temp2 = (f32)arg0->unk_08;
        f32 temp3 = arg0->unk_10;
        f32 temp4 = (f32)arg0->unk_0C;
        temp = temp3 + (arg0->unk_14 - temp3) * (temp2 / temp4);
    }
    if (arg0->unk_04 >= 0) {
        u32 temp5 = (u32)(128.0f * temp);
        func_0883C1F8(*(volatile s32 *)&arg0->unk_04, temp5, temp5);
    }
}
