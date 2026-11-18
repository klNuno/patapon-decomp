#include "common.h"

extern "C" {

class T {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

class A : public T {
public:
    u8 pad_04[0x70C];
    u32 unk_710, unk_714;
    s32 unk_718;
};

void func_088D5548(f32 arg1, A *arg0) {
    f32 f;
    u32 a, b;

    if (arg1 < 0.01f) {
        arg0->unk_714 = 1;
        arg0->unk_710 = 1;
        arg0->unk_24();
        arg0->unk_718 = 1;
        return;
    }
    b = arg0->unk_714;
    if (b == 0) {
        f = 0.0f;
    } else {
        a = arg0->unk_710;
        f = (f32)a / (f32)b;
    }
    arg0->unk_714 = (u32)(4800.0f * arg1);
    switch (arg0->unk_718) {
    case 5:
        arg0->unk_710 = (u32)((f32)arg0->unk_714 * f);
        break;
    case 2:
    case 3:
        arg0->unk_718 = 5;
        arg0->unk_710 = (u32)((f32)arg0->unk_714 * (1.0f - f));
        break;
    case 1:
        break;
    case 4:
        arg0->unk_710 = 0;
        arg0->unk_718 = 5;
        break;
    default:
        arg0->unk_718 = 5;
        arg0->unk_710 = 0;
        break;
    }
}

}
