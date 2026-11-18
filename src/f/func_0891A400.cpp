#include "common.h"

extern "C" {

struct E {};

struct T {
    u8 pad_00[0x65C];
    E *unk_65C;
    void (E::*unk_660)();
    u8 unk_66C;
    u8 pad_66D[3];
    f32 unk_670, unk_674;
};

s32 func_0891A400(T *arg0, u32 arg1, u8 arg2) {
    if (arg2 == 1) {
        arg0->unk_670 = 0.0f;
        arg0->unk_674 = 0.5f;
        arg0->unk_66C = 1;
    }
    if (arg0->unk_66C == 1) {
        f32 temp = arg0->unk_670 + (f32)arg1 / 4800.0f;
        f32 *p = temp < arg0->unk_674 ? &temp : &arg0->unk_674;
        arg0->unk_670 = *p;
        if (arg0->unk_670 >= arg0->unk_674 && arg0->unk_660 != NULL) {
            (arg0->unk_65C->*arg0->unk_660)();
        }
    }
    s32 ret = arg0->unk_66C != 0;
    if (ret != 0) {
        ret = 1;
        if (!(arg0->unk_670 >= arg0->unk_674)) {
            ret = 0;
        }
    }
    return ret;
}

}
