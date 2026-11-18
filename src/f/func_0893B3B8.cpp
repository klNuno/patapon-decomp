#include "common.h"

extern "C" {

struct Unk0 {
    virtual void vfunc_08(f32);
};

struct Unk : Unk0 {
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x60];
    u8 unk_7C[0x70];
    u8 unk_EC;
    u8 pad_ED[0x33];
    u8 unk_120;
    u8 unk_121;

    void unk_00(f32 arg0) {
        if (unk_14 != arg0) {
            unk_14 = arg0;
            vfunc_08(arg0 * unk_18);
        }
    }
};

void func_0889C0A4(u8 *, f32, f32);
void func_0892442C(Unk *, u32);

void func_0893B3B8(Unk *arg0) {
    arg0->unk_00(1.0f);
    arg0->unk_10 = 1.0f;
    arg0->unk_0C = 1.0f;
    arg0->unk_08 = 1;
    arg0->unk_04 = 1;
    func_0889C0A4(arg0->unk_7C, 1.0f, 0.0f);
    func_0892442C(arg0, arg0->unk_EC + 0x6F00);
    func_0892442C(arg0, 0);
    func_0892442C(arg0, 0);
    arg0->unk_120 = 0;
    arg0->unk_121 = 0;
}

}
