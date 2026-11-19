#include "common.h"

extern "C" {

class E089C3EEC {
    u8 pad_00[0x28];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

struct T089C3EEC : E089C3EEC {
    u8 pad_2C[0x24];
    s32 unk_50;
    u8 pad_54[0x9C];
    f32 unk_F0;
    f32 unk_F4;
    u8 pad_F8[0x1C];
    f32 unk_114;
    u8 pad_118[4];
    s32 unk_11C;
};

void func_089C3EEC(T089C3EEC *arg0, s32 arg1) {
    arg0->unk_F0 = -100.0f;
    arg0->unk_F4 = 5.0f + (20.0f + arg0->unk_114);
    arg0->unk_11C = arg1;
    arg0->unk_14(2);
    arg0->unk_50 = 1;
}

}
