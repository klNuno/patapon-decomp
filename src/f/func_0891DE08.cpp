#include "common.h"

extern "C" {
class T {};
typedef void (T::*P)();

struct S {
    u8 pad_00[0x258];
    T *unk_258;
    P unk_25C;
    u8 unk_268;
    f32 unk_26C;
    f32 unk_270;

    void func_0(u32 arg0) {
        if (unk_268 == 1) {
            f32 temp = unk_26C + (f32)arg0 / 4800.0f;
            unk_26C = *(!(temp < unk_270) ? &unk_270 : &temp);
            if (unk_26C >= unk_270 && unk_25C) {
                (unk_258->*unk_25C)();
            }
        }
    }
};

s32 func_0891DE08(S *arg0, u32 arg1, u8 arg2) {
    if (arg2 == 1) {
        arg0->unk_26C = 0.0f;
        arg0->unk_270 = 2.0f;
        arg0->unk_268 = 1;
    }
    arg0->func_0(arg1);
    s32 temp = arg0->unk_268 != 0;
    if (temp != 0) {
        temp = 1;
        if (!(arg0->unk_26C >= arg0->unk_270)) {
            temp = 0;
        }
    }
    return temp;
}
}
