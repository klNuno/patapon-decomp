#include "common.h"

extern "C" {

struct B {
    virtual void unk_08(f32);
};

struct T {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 pad_15[3];
    s32 unk_18;
    f32 unk_1C;
    s32 unk_20;
    B *unk_24;
};

extern f32 D_08A08164[];

void func_089AD48C(T *arg0, u32 arg1) {
    if (arg0->unk_24 != NULL && arg1 >= 0x3C) {
        f32 temp = 28.0f + 32.0f * (((f32)arg1 - 60.0f) / 40.0f);
        f32 *p;
        if (D_08A08164[0] < temp) {
            p = &temp;
        } else {
            p = D_08A08164;
        }
        f32 f = *p;
        if (arg0->unk_20 == 3) {
            f *= 0.25f;
        }
        arg0->unk_18 = 0;
        arg0->unk_1C = f;
        arg0->unk_14 = 1;
        arg0->unk_24->unk_08(f);
    }
}

}
