#include "common.h"

extern "C" {
struct S_0887EC08 {
    u32 unk_00[4];
    volatile u32 unk_10[4];
    u8 pad_20[0x30];
    f32 unk_50;
    f32 unk_54;
    u8 pad_58[0x64];
    f32 unk_BC;
    f32 unk_C0;
};

struct T {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0x6C];
    f32 unk_80;
    u8 pad_84[4];
    f32 unk_88;
};

void func_0887EC08(S_0887EC08 *, bool, s32, u32);
s32 sceUtilityGetSystemParamInt(s32, s32 *);
extern u32 D_089DDC90[];
extern s32 D_089F88F0[];
extern s32 D_08A7BA28[];

void func_0887E964(S_0887EC08 *arg0, void *arg1, T *arg2) {
    f32 temp;
    f32 temp2;
    u32 *temp3;
    u32 temp4;
    u32 temp6;
    u32 *temp5;
    s32 temp7;
    u32 *temp8;
    f32 temp18;
    f32 temp9;
    f32 temp10;
    f32 temp12;
    f32 temp11;
    f32 temp13;
    bool temp14;

    temp4 = arg2->unk_10;
    temp6 = 0;
    temp5 = D_089DDC90;
    do {
        u32 temp15 = *temp5;
        func_0887EC08(arg0, (temp4 & temp15) != 0, temp6, temp15);
        temp6++;
        temp5++;
    } while (temp6 < 12);
    temp7 = 0;
    temp8 = arg0->unk_00;
    do {
        u32 temp19 = *(volatile u32 *)&temp8[0];
        s32 temp15 = *(volatile s32 *)&D_089F88F0[0];
        temp8[4] = temp19;
        if (temp15 != 0) {
            D_089F88F0[0] = sceUtilityGetSystemParamInt(9, D_08A7BA28);
        }
        if (D_08A7BA28[0] == 0) {
            if (temp8[0] & 0x4000) {
                u32 temp16 = temp8[4] | 0x2000;
                *(volatile u32 *)&temp8[4] = temp16;
                *(volatile u32 *)&temp8[4] = temp16 & ~0x4000;
            }
            if (temp8[0] & 0x2000) {
                u32 temp17 = temp8[4] | 0x4000;
                *(volatile u32 *)&temp8[4] = temp17;
                *(volatile u32 *)&temp8[4] = temp17 & ~0x2000;
            }
        }
        temp7++;
        temp8++;
    } while (temp7 < 4);
    arg0->unk_50 = 0.0f;
    arg0->unk_54 = 0.0f;
    temp10 = arg2->unk_80;
    temp18 = arg0->unk_BC;
    temp11 = arg2->unk_88;
    temp12 = 1.0f / (1.0f - temp18);
    temp = temp10;
    temp4 = *(u32 *)&temp;
    temp4 = (temp4 << 1) >> 1;
    temp3 = (u32 *)&temp;
    *(u32 *)&temp = temp4;
    if (*(f32 *)temp3 >= temp18) {
        if (temp10 >= 0.0f) {
            arg0->unk_50 = temp12 * (temp10 - temp18);
        } else {
            arg0->unk_50 = temp12 * (temp10 + temp18);
        }
    }
    temp2 = temp11;
    temp4 = *(u32 *)&temp2;
    temp3 = (u32 *)&temp2;
    temp9 = arg0->unk_BC;
    temp4 = (temp4 << 1) >> 1;
    *(u32 *)&temp2 = temp4;
    if (*(f32 *)temp3 >= temp9) {
        if (temp11 >= 0.0f) {
            arg0->unk_54 = temp12 * (temp11 - temp9);
        } else {
            arg0->unk_54 = temp12 * (temp11 + temp9);
        }
    }
    temp13 = arg0->unk_C0;
    temp14 = true;
    if (!(arg0->unk_50 >= temp13)) {
        temp14 = false;
    }
    func_0887EC08(arg0, temp14, 14, 0x40000);
    temp14 = true;
    if (!(arg0->unk_54 >= temp13)) {
        temp14 = false;
    }
    func_0887EC08(arg0, temp14, 15, 0x80000);
    temp9 = arg0->unk_50;
    temp14 = true;
    if (!(temp9 <= -temp13)) {
        temp14 = false;
    }
    temp13 = -temp13;
    func_0887EC08(arg0, temp14, 16, 0x100000);
    temp14 = true;
    if (!(arg0->unk_54 <= temp13)) {
        temp14 = false;
    }
    func_0887EC08(arg0, temp14, 17, 0x200000);
}
}
