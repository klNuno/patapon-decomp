#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[4];
    s32 unk_08[2];
    s32 unk_10;
    u8 pad_14[0x420];
    u8 unk_434;
    u8 pad_435[3];
    f32 unk_438;
    f32 unk_43C;
    s32 unk_440;
    f32 unk_444;
    u8 pad_448[0xC];
    u8 unk_454;
} S;

void func_08814BB4(s32);
void func_0881518C(s32, s32, s32, s32);
void func_088151A8(s32, s32, s32, s32, s32, s32, s32);
void func_08815514(s32);
void func_088157AC(s32, s32, s32, s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
void func_0881587C(s32, s32);
void func_088159A8(s32, s32, s32, s32, s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
s32 func_0893F544(void *, s32);

static inline f32 func_089919DC_1(f32 arg0, const f32 *arg1, const f32 *arg2) {
    if (*arg2 <= 0.0001f) {
        return 1.0f;
    }
    return *arg1 / arg0;
}

void func_089919DC(S *arg0) {
    L_0893CEA8 temp;
    s32 *temp2;
    s32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    u32 temp9;
    u32 *temp10;

    temp2 = (s32 *)((u8 *)arg0->unk_08 + arg0->unk_10 * 4);
    if (func_0893F544(arg0->unk_04, *temp2) != 0 && arg0->unk_454 == 0) {
        arg0->unk_10 = (arg0->unk_10 + 1) & 1;
        if (arg0->unk_440 == 0) {
            arg0->unk_440 = 1;
            temp5 = arg0->unk_444;
            arg0->unk_438 = 0.0f;
            arg0->unk_43C = temp5;
            arg0->unk_434 = 1;
        }
    }
    if (arg0->unk_440 != 0) {
        func_08864A30(&temp);
        func_08814BB4(9);
        func_08815814(0, 0);
        func_088157E8(7, 0);
        func_0881587C(0, 0);
        func_088157AC(3, 0, 0, 0);
        func_088159A8(0, 0x200, 0x200, 0x200, *temp2);
        func_08815D9C(0, 2, 3, 0, 0);
        func_08814BB4(4);
        temp4 = 1.0f;
        if (arg0->unk_440 == 1) {
            temp8 = arg0->unk_43C;
            temp6 = temp8;
            temp9 = *(u32 *)&temp6;
            temp9 = (temp9 << 1) >> 1;
            temp10 = (u32 *)&temp6;
            *(u32 *)&temp6 = temp9;
            temp4 = func_089919DC_1(temp8, &arg0->unk_438, (f32 *)temp10);
        } else if (arg0->unk_440 == 3) {
            temp8 = arg0->unk_43C;
            temp7 = temp8;
            temp9 = *(u32 *)&temp7;
            temp9 = (temp9 << 1) >> 1;
            temp10 = (u32 *)&temp7;
            *(u32 *)&temp7 = temp9;
            temp4 = 1.0f - func_089919DC_1(temp8, &arg0->unk_438, (f32 *)temp10);
        }
        if (arg0->unk_440 == 4 && arg0->unk_454 != 0) {
            temp4 = 0.0f;
        }
        temp5 = 255.0f * temp4;
        func_08815514(((u32)temp5 << 24) | 0xFFFFFF);
        for (temp3 = 0; temp3 < 4; temp3++) {
            func_0881518C(0x80, 0x110, 0x80, 0x110);
            func_088151A8(temp3 * 0x200 / 4, 0, 0, temp3 * 0x200 / 4, 0, 0, 0);
        }
        func_08864A68(&temp, -1);
    }
}
