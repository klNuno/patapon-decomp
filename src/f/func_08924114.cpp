#include "common.h"

extern "C" {

struct Unk1 {
    virtual void func_00(f32);
    virtual void func_04();
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34();
    virtual void func_38();
    virtual void func_3C();
    virtual s32 func_40();
};

struct Unk0 : Unk1 {
    u32 unk_04;
    u32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x50];
    s32 unk_6C;
};

void func_08924114(Unk0 *arg0, u32 arg1) {
    if (arg0->unk_04 < arg0->unk_08) {
        arg0->unk_04 = *(volatile u32 *)&arg0->unk_04 + arg1;
        u32 temp = *((arg0->unk_08 < arg0->unk_04) ? &arg0->unk_08 : &arg0->unk_04);
        arg0->unk_04 = temp;
        f32 temp2 = arg0->unk_0C;
        f32 temp4 = (f32)temp;
        temp4 /= (f32)*(volatile u32 *)&arg0->unk_08;
        f32 temp3 = temp2 + temp4 * (arg0->unk_10 - temp2);
        arg0->unk_14 = temp3;
        arg0->func_00(temp3 * arg0->unk_18);
    }
    if (arg0->func_40() == 0 && arg0->unk_6C >= 0) {
        arg0->unk_6C = -1;
    }
}

}
