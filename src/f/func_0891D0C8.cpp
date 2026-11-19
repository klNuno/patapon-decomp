#include "common.h"

extern "C" {
class U {
public:
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[0x28];

    virtual void unk_08();
    virtual void unk_0C();
};

struct T {
    u8 pad_00[0x240];
    U unk_240;
};

bool func_0891D0C8(T *arg0) {
    arg0->unk_240.unk_0C();
    return (f32)(s32)arg0->unk_240.unk_54 >= 50.0f;
}
}
