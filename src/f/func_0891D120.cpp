#include "common.h"

extern "C" {

struct Unk1 {};
typedef void (Unk1::*Unk2)();

struct Unk0 {
    u8 pad_00[0x2D0];
    Unk1 *unk_2D0;
    Unk2 unk_2D4;
    u8 unk_2E0;
    u8 pad_2E1[3];
    f32 unk_2E4;
    f32 unk_2E8;
};

s32 func_0891D120(Unk0 *arg0, u32 arg1, u8 arg2) {
    f32 temp;
    f32 *temp2;
    s32 temp3;

    if (arg2 == 1) {
        arg0->unk_2E4 = 0.0f;
        arg0->unk_2E8 = 1.0f;
        arg0->unk_2E0 = 1;
    }
    if (arg0->unk_2E0 == 1) {
        temp = arg0->unk_2E4 + (f32)arg1 / 4800.0f;
        if (temp < arg0->unk_2E8) {
            temp2 = &temp;
        } else {
            temp2 = &arg0->unk_2E8;
        }
        if ((arg0->unk_2E4 = *temp2) >= arg0->unk_2E8 && arg0->unk_2D4 != 0) {
            (arg0->unk_2D0->*arg0->unk_2D4)();
        }
    }
    temp3 = arg0->unk_2E0 != 0;
    if (temp3 != 0) {
        temp3 = 1;
        if (!(arg0->unk_2E4 >= arg0->unk_2E8)) {
            temp3 = 0;
        }
    }
    return temp3;
}

}
