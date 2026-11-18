#include "common.h"

extern "C" {

class U {
    u8 pad_00[0x28];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual f32 *unk_28();
};

struct V {
    u8 pad_00[8];
    f32 unk_08;
    u8 pad_0C[4];
    U *unk_10;
    u8 pad_14[0x30];
    f32 unk_44;
    f32 unk_48;
};

s32 func_088586E8(void);
u32 func_089B5464(s32);
s32 func_088F9858(void *);

f32 func_08918B58(V *arg0) {
    f32 temp;
    f32 *temp2;

    temp = 0.01f * (50.0f + (f32)(func_089B5464(func_088586E8()) % 50U));
    temp2 = arg0->unk_10->unk_28();
    if (func_088F9858(arg0->unk_10) == 0) {
        arg0->unk_08 = 1.0f;
        return *temp2 + temp * (arg0->unk_44 - *temp2);
    } else {
        arg0->unk_08 = -1.0f;
        return *temp2 + temp * (arg0->unk_48 - *temp2);
    }
}

}
