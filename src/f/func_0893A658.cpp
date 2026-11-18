#include "common.h"

extern "C" {

class T;
typedef void (T::*P)();

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    T *unk_0C;
    P unk_10;
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x20];
    u8 unk_48;
} S;

s32 func_0893A658(S *arg0, u32 arg1, u8 arg2) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    bool temp5;

    if (arg2 == 1) {
        arg0->unk_20 = 0.0f;
        arg0->unk_24 = 0.3f;
        arg0->unk_1C = 1;
    }
    if (arg0->unk_1C == 1) {
        temp = arg0->unk_20 + (f32)arg1 / 4800.0f;
        arg0->unk_20 = *(temp < arg0->unk_24 ? &temp : &arg0->unk_24);
        if (arg0->unk_20 >= arg0->unk_24 && arg0->unk_10) {
            (arg0->unk_0C->*arg0->unk_10)();
        }
    }

    temp3 = arg0->unk_24;
    temp2 = temp3;
    u32 temp6 = *(u32 *)&temp2;
    u32 *temp7 = (u32 *)&temp2;
    *(u32 *)&temp2 = (temp6 << 1) >> 1;
    temp4 = (*(f32 *&)temp7 <= 0.0001f) ? 1.0f : arg0->unk_20 / temp3;
    arg0->unk_08 = 1.0f - temp4;
    temp5 = arg0->unk_1C && arg0->unk_20 >= arg0->unk_24;
    if (temp5 == 1) {
        arg0->unk_1C = 0;
        arg0->unk_48 = 0;
        return 1;
    }
    return 0;
}

}
