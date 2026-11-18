#include "common.h"

extern "C" {

struct T {
    virtual void unk_00(f32);
};

struct U : T {
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x7C - 0x1C];
    u8 unk_7C[0x120 - 0x7C];
    u8 unk_120;
    u8 unk_121;
    void unk_124(f32 arg0) {
        if (unk_14 != arg0) {
            unk_14 = arg0;
            unk_00(arg0 * unk_18);
        }
    }
};

void func_0889BF08(void *, f32);
void func_0889C004(void *, f32, f32);

void func_0893B5F4(U *arg0) {
    func_0889BF08(arg0->unk_7C, 0.0f);
    arg0->unk_124(1.0f);
    arg0->unk_10 = 1.0f;
    arg0->unk_0C = 1.0f;
    arg0->unk_08 = 1;
    arg0->unk_04 = 1;
    func_0889C004(arg0->unk_7C, 1.0f, 0.0f);
    arg0->unk_120 = 0;
    arg0->unk_121 = 0;
}

}
