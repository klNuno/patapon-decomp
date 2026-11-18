#include "common.h"

extern "C" {

class A {
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

class B {
public:
    virtual void unk_08_v(f32);
};

class C : public B {
public:
    u32 unk_04;
    u32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[0x28];
    A **unk_44;
    u32 unk_48;
    u8 pad_4C[0x30];
    u8 unk_7C[0xA5];
    u8 unk_121;
};

void func_0889BF08(void *, f32);

void func_0893B460(C *arg0, f32 arg1) {
    A ***temp;
    A **temp2;
    u32 *temp3;

    if (0.0f == arg1) {
        func_0889BF08(arg0->unk_7C, 0.0f);
    } else {
        arg0->unk_0C = arg0->unk_14;
        arg0->unk_10 = 0.0f;
        if (arg1 >= 0.0f) {
            arg0->unk_08 = (u32)(4800.0f * arg1);
            arg0->unk_04 = 0;
        }
        if (arg0->unk_04 >= arg0->unk_08) {
            f32 temp4 = arg0->unk_14;
            f32 temp5 = 0.0f;
            if (temp4 != temp5) {
                arg0->unk_14 = temp5;
                arg0->unk_08_v(arg0->unk_14 * arg0->unk_18);
            }
            arg0->unk_10 = 0.0f;
            arg0->unk_0C = 0.0f;
            arg0->unk_08 = 1;
            arg0->unk_04 = 1;
            arg0->unk_08_v(arg0->unk_14 * arg0->unk_18);
        }
        arg0->unk_08_v(arg0->unk_14 * arg0->unk_18);
    }
    arg0->unk_121 = 1;
    temp2 = arg0->unk_44;
    temp = &arg0->unk_44;
    if ((u32)temp2 != (u32)(*temp + arg0->unk_48)) {
        temp3 = &arg0->unk_48;
        do {
            (*temp2)->unk_24();
            temp2++;
        } while (temp2 != *temp + *temp3);
    }
}

}
