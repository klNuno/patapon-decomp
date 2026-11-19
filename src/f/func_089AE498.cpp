#include "common.h"

class T2 {
public:
    u8 pad_00[0x2760];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32, s32);
};

struct T {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
};

extern "C" {
u8 func_089AE274(s32);
T2 *func_089AE5B0(T *, s32);

void func_089AE498(T *arg0, s32 arg1) {
    s32 temp = arg0->unk_08;

    if (temp != -1) {
        T2 *temp2 = func_089AE5B0(arg0, temp);
        temp2->unk_1C(arg1, arg0->unk_04);
        if (func_089AE274((s32)temp2) == 1) {
            arg0->unk_08 = -1;
        }
    }
}
}
