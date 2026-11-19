#include "common.h"

extern "C" {

class A {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

struct T08973F5C {
    u8 pad_00[8];
    A *unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u32 unk_34;
    s32 unk_38;
};

s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);
void func_08973F5C(T08973F5C *arg0, s32 arg1, s32 *arg2);
void func_08974004(T08973F5C *, s32 *, s32 *, s32 *);
s32 func_08974044(char *arg0, s32 arg1);

void func_0897136C(T08973F5C *arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;


    temp_s0 = arg0->unk_08->unk_0C();
    func_08974004(arg0, &arg0->unk_10, &arg0->unk_14, &arg0->unk_18);
    temp_s2 = arg0->unk_10;
    *func_0884EBA0(temp_s0, 0xA) = temp_s2;
    temp_s2_2 = arg0->unk_14;
    *func_0884EBA0(temp_s0, 0xB) = temp_s2_2;
    temp_s2_3 = arg0->unk_18;
    *func_0884EBA0(temp_s0, 0xC) = temp_s2_3;
    if (arg0->unk_18 == 0) {
        temp_s2_4 = func_08974044((char *)arg0, 1);
        *func_0884EBA0(temp_s0, 0xD) = temp_s2_4;
        func_08973F5C(arg0, 0, func_0884EBA0(temp_s0, 0x19));
        func_08973F5C(arg0, 1, func_0884EBA0(temp_s0, 0x1E));
        func_08973F5C(arg0, 2, func_0884EBA0(temp_s0, 0x23));
        func_08973F5C(arg0, 3, func_0884EBA0(temp_s0, 0x28));
        func_08973F5C(arg0, 4, func_0884EBA0(temp_s0, 0x2D));
        func_08973F5C(arg0, 5, func_0884EBA0(temp_s0, 0x32));
        arg0->unk_20 = 0;
        *func_0884EBA0(temp_s0, 0x1A) = 0;
        temp_s2 = 1;
        *func_0884EBA0(temp_s0, 0x1F) = temp_s2;
        temp_s2 = 2;
        *func_0884EBA0(temp_s0, 0x24) = temp_s2;
        temp_s2 = 3;
        *func_0884EBA0(temp_s0, 0x29) = temp_s2;
        temp_s2 = 4;
        *func_0884EBA0(temp_s0, 0x2E) = temp_s2;
        temp_s2 = 5;
        *func_0884EBA0(temp_s0, 0x33) = temp_s2;
        arg0->unk_24 = 0;
        *func_0884EBA0(temp_s0, 0x1B) = 0;
        *func_0884EBA0(temp_s0, 0x20) = 0;
        *func_0884EBA0(temp_s0, 0x25) = 0;
        *func_0884EBA0(temp_s0, 0x2A) = 0;
        *func_0884EBA0(temp_s0, 0x2F) = 0;
        *func_0884EBA0(temp_s0, 0x34) = 0;
        arg0->unk_28 = 0;
        *func_0884EBA0(temp_s0, 0x1C) = 0;
        *func_0884EBA0(temp_s0, 0x21) = 0;
        *func_0884EBA0(temp_s0, 0x26) = 0;
        *func_0884EBA0(temp_s0, 0x2B) = 0;
        *func_0884EBA0(temp_s0, 0x30) = 0;
        *func_0884EBA0(temp_s0, 0x35) = 0;
        arg0->unk_2C = 0;
        *func_0884EBA0(temp_s0, 0x1D) = 0;
        *func_0884EBA0(temp_s0, 0x22) = 0;
        *func_0884EBA0(temp_s0, 0x27) = 0;
        *func_0884EBA0(temp_s0, 0x2C) = 0;
        *func_0884EBA0(temp_s0, 0x31) = 0;
        *func_0884EBA0(temp_s0, 0x36) = 0;
        arg0->unk_30 = 0;
        *func_0884EBB0(temp_s0, 0xE) = 0.0f;
        *func_0884EBB0(temp_s0, 0x11) = 0.0f;
        *func_0884EBB0(temp_s0, 0x14) = 0.0f;
        *func_0884EBB0(temp_s0, 0x17) = 0.0f;
        *func_0884EBB0(temp_s0, 0x1A) = 0.0f;
        *func_0884EBB0(temp_s0, 0x1D) = 0.0f;
        arg0->unk_34 = 0xBF800000;
        *func_0884EBB0(temp_s0, 0xF) = -1.0f;
        *func_0884EBB0(temp_s0, 0x12) = -1.0f;
        *func_0884EBB0(temp_s0, 0x15) = -1.0f;
        *func_0884EBB0(temp_s0, 0x18) = -1.0f;
        *func_0884EBB0(temp_s0, 0x1B) = -1.0f;
        *func_0884EBB0(temp_s0, 0x1E) = -1.0f;
        arg0->unk_38 = 0;
        *func_0884EBB0(temp_s0, 0x10) = 0.0f;
        *func_0884EBB0(temp_s0, 0x13) = 0.0f;
        *func_0884EBB0(temp_s0, 0x16) = 0.0f;
        *func_0884EBB0(temp_s0, 0x19) = 0.0f;
        *func_0884EBB0(temp_s0, 0x1C) = 0.0f;
        *func_0884EBB0(temp_s0, 0x1F) = 0.0f;
    }
}

}
