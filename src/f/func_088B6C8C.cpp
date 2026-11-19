#include "common.h"

extern "C" {

class A {};
class B {
public:
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[0x20];

    virtual void unk_08();
    virtual void unk_0C(u32);
};
typedef struct {
    u8 pad_00[0x30];
    B unk_30;
} E;
typedef struct {
    A *unk_00;
    void (A::*unk_04)();
    u8 unk_10;
    u8 pad_11[3];
    f32 unk_14, unk_18;
} T;
typedef struct {
    u8 pad_00[0x1A0];
    s32 unk_1A0;
    u8 unk_1A4, unk_1A5, unk_1A6;
    u8 pad_1A7[1];
    s32 unk_1A8;
    u8 unk_1AC;
    u8 pad_1AD[0x167];
    T unk_314, unk_330, unk_34C;
} S;

extern s32 func_088B7324(s32, s32, s32);

static inline void temp_step(T *arg0, u32 arg1, f32 &arg2) {
    f32 temp = *(volatile f32 *)&arg0->unk_14;
    f32 temp1 = (f32)arg1;
    arg2 = temp + temp1 / 4800.0f;
    f32 *temp2 = arg2 < arg0->unk_18 ? &arg2 : &arg0->unk_18;
    if ((arg0->unk_14 = *temp2) >= arg0->unk_18) {
        if (arg0->unk_04 != NULL) {
            (arg0->unk_00->*arg0->unk_04)();
        }
    }
}

void func_088B6C8C(S *arg0, u32 arg1) {
    f32 temp, temp1, temp2;
    if (arg0->unk_314.unk_10 == 1) {
        temp_step(&arg0->unk_314, arg1, temp);
    }
    if (arg0->unk_330.unk_10 == 1) {
        temp_step(&arg0->unk_330, arg1, temp1);
    }
    if (arg0->unk_34C.unk_10 == 1) {
        temp_step(&arg0->unk_34C, arg1, temp2);
    }
    if (arg0->unk_1A6 == 1) {
        E *temp3 = (E *)((u8 *)arg0 + arg0->unk_1A0 * 0x90);
        u8 temp4 = temp3->unk_30.unk_5C <= temp3->unk_30.unk_54;
        if (temp4 == 1) {
            if (arg0->unk_1A8 != -1) {
                func_088B7324((s32)arg0, arg0->unk_1A8, arg0->unk_1AC);
            } else {
                arg0->unk_1A4 = 0;
            }
            arg0->unk_1A6 = 0;
        }
    }
    if (arg0->unk_1A5 == 0 && arg0->unk_1A4 == 1) {
        E *temp5 = (E *)((u8 *)arg0 + arg0->unk_1A0 * 0x90);
        temp5->unk_30.unk_0C(arg1);
    }
}

}
