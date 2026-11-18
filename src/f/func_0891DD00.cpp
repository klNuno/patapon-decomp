#include "common.h"

extern "C" {

struct T1;
typedef void (T1::*T2)();

struct T3 {
    u8 pad_00[0x23C];
    T1 *unk_23C;
    T2 unk_240;
    u8 unk_24C;
    u8 pad_24D[3];
    f32 unk_250;
    f32 unk_254;
};

bool func_0891DD00(T3 *arg0, u32 arg1, u8 arg2) {
    f32 temp;
    f32 *p;
    if (arg2 == 1) {
        arg0->unk_250 = 0.0f;
        arg0->unk_254 = 2.0f;
        arg0->unk_24C = 1;
    }
    if (arg0->unk_24C == 1) {
        temp = arg0->unk_250 + ((f32)arg1 / 4800.0f);
        if (!(temp < arg0->unk_254)) {
            p = &arg0->unk_254;
        } else {
            p = &temp;
        }
        arg0->unk_250 = *p;
        if (arg0->unk_250 >= arg0->unk_254 && arg0->unk_240) {
            (arg0->unk_23C->*arg0->unk_240)();
        }
    }
    return arg0->unk_24C != 0 && arg0->unk_250 >= arg0->unk_254;
}

}
