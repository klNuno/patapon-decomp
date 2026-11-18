#include "common.h"

extern "C" {
struct T;
class A {
public:
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual u32 unk_20();
};
class B {
public:
    u8 pad_00[0x40];
    A *unk_40;
    u8 pad_44[0x3C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
};
struct C : B {
    u8 pad_84[0xC];
    f32 unk_90;
    s32 unk_94;
    s32 unk_98;
    f32 unk_9C;
    u8 pad_A0[0x340];
    T *unk_3E0;
};
struct D {
    u8 pad_00[0x4C];
    s32 unk_4C;
};
struct T {
    u8 pad_00[0xD0];
    D *unk_D0;
    u8 pad_D4[0x3C];
    C *unk_110;
};
extern void func_08865FEC(s32, s32, s32);
extern s32 func_0882160C(void);
extern s32 func_08960FFC(T *);

s32 func_08960ED4(T *arg0) {
    D *temp = arg0->unk_D0;
    s32 temp2;
    C *temp3;
    f32 temp4;

    if ((temp != NULL ? temp : NULL)->unk_4C != 0) {
        temp2 = func_08960FFC(arg0);
        if (temp2 != 0) {
            temp3 = arg0->unk_110;
            if (temp3 == NULL) {
                return 0;
            }
            if (temp3 != NULL) {
                temp3->unk_3E0 = arg0;
                arg0->unk_110->unk_34();
                func_08865FEC((s32)arg0->unk_110, temp2, 1);
                temp4 = (f32)(func_0882160C() & 0xFFFF);
                temp4 = 100.0f + 100.0f * (temp4 / 65536.0f);
                temp3 = arg0->unk_110;
                temp3->unk_90 = temp4;
                temp3->unk_94 = 0;
                temp3->unk_98 = 0;
                temp3->unk_9C = 1.0f;
                if (arg0->unk_110->unk_40->unk_20() >= 2U) {
                    arg0->unk_110->unk_14(1, 1);
                }
            }
        }
    }
    return 1;
}
}
