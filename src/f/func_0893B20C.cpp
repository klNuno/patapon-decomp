#include "common.h"

extern "C" {

struct B {
    virtual void unk_08(f32);
};

struct T : B {
    u32 unk_04, unk_08;
    f32 unk_0C, unk_10, unk_14, unk_18;
    u8 pad_1C[0x60];
    u8 unk_7C[0x70];
    u8 unk_EC;
    u8 pad_ED[0x33];
    u8 unk_120, unk_121;
};

void func_0889C0A4(void *, f32, f32);
void func_0892442C(T *, s32);

inline void unk_08(T *arg0, f32 arg1) {
    if (arg0->unk_14 != arg1) {
        arg0->unk_14 = arg1;
        ((B *)arg0)->unk_08(arg1 * arg0->unk_18);
    }
}

void func_0893B20C(T *arg0, f32 arg1) {
    func_0889C0A4(arg0->unk_7C, 1.0f, 0.0f);
    func_0892442C(arg0, arg0->unk_EC + 0x6F00);
    func_0892442C(arg0, 0x7100);
    func_0892442C(arg0, 0x7300);
    arg0->unk_0C = arg0->unk_14;
    arg0->unk_10 = 1.0f;
    if (arg1 >= 0.0f) {
        arg0->unk_08 = (u32)(4800.0f * arg1);
        arg0->unk_04 = 0;
    }
    if (arg0->unk_04 >= arg0->unk_08) {
        unk_08(arg0, 1.0f);
        arg0->unk_10 = 1.0f;
        arg0->unk_0C = 1.0f;
        arg0->unk_08 = 1;
        arg0->unk_04 = 1;
        ((B *)arg0)->unk_08(arg0->unk_14 * arg0->unk_18);
    }
    ((B *)arg0)->unk_08(arg0->unk_14 * arg0->unk_18);
    arg0->unk_120 = 0;
    arg0->unk_121 = 0;
}

}
