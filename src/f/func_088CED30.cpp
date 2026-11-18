#include "common.h"

extern "C" {

struct U {};
typedef void (U::*V)();

typedef struct {
    U *unk_00;
    V unk_04;
    u8 unk_10;
    u8 pad_11[3];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} T;

void func_088CED30(T *arg0, u32 arg1) {
    f32 temp;
    const f32 *temp2;
    s32 temp3;
    f32 temp4;

    if (arg0->unk_10 == 1) {
        temp = arg0->unk_14 + (f32)arg1 / 4800.0f;
        temp2 = temp < arg0->unk_18 ? &temp : &arg0->unk_18;
        arg0->unk_14 = *temp2;
        if (arg0->unk_14 >= arg0->unk_18 && arg0->unk_04) {
            (arg0->unk_00->*arg0->unk_04)();
        }
    }
    if (arg0->unk_10 == 0) {
        temp3 = arg0->unk_20;
        if (arg0->unk_28 != temp3) {
            arg0->unk_24 = temp3;
            temp4 = arg0->unk_1C;
            arg0->unk_14 = 0.0f;
            arg0->unk_18 = temp4;
            arg0->unk_10 = 1;
        }
    }
}

}
