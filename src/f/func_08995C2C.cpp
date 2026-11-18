#include "common.h"

extern "C" {

class T0;

typedef struct {
    u8 pad_00[0x148];
    T0 *unk_148;
    void (T0::*unk_14C)();
    u8 unk_158;
    u8 pad_159[3];
    f32 unk_15C;
    f32 unk_160;
} T;

void func_08995C2C(T *arg0, u32 arg1) {
    if (arg0->unk_158 == 1) {
        f32 temp = arg0->unk_15C + (f32)arg1 / 4800.0f;
        arg0->unk_15C = *(temp < arg0->unk_160 ? &temp : &arg0->unk_160);
        if (arg0->unk_15C >= arg0->unk_160 && arg0->unk_14C != 0) {
            (arg0->unk_148->*arg0->unk_14C)();
        }
    }
}

}
