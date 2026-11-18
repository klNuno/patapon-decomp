#include "common.h"

void func_088157E8(s32, s32);
s32 func_08877730(void);
void func_08877B10(s32, s32, void *, f32 *, f32 *);

typedef struct {
    u8 pad_00[0x40];
    u8 unk_40[0x40];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    u8 pad_8C[4];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    s32 unk_9C;
    u8 pad_A0[0x50];
    u8 unk_F0;
    u32 unk_F4;
    u8 unk_F8;
} S;

void func_0887E068(S *arg0) {
    f32 temp0[2];
    f32 temp1[6];
    f32 temp2;
    s32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;

    if (arg0->unk_9C < 0 || arg0->unk_F8 == 0 || arg0->unk_98 <= 0.0f) {
        return;
    }
    temp3 = func_08877730();
    if (arg0->unk_F0 != 0) {
        func_088157E8(4, 0);
    } else {
        func_088157E8(7, 1);
    }
    temp2 = (f32)arg0->unk_F4;
    temp4 = arg0->unk_94;
    temp5 = arg0->unk_90;
    temp4 *= temp2;
    temp5 *= temp2;
    temp0[1] = temp4;
    temp0[0] = temp5;
    temp6 = arg0->unk_98;
    temp7 = arg0->unk_88;
    temp8 = arg0->unk_84;
    temp9 = arg0->unk_80;
    temp1[0] = temp9;
    temp1[1] = temp8;
    temp1[2] = temp7;
    temp1[3] = temp6;
    func_08877B10(temp3, arg0->unk_9C, arg0->unk_40, temp0, temp1);
}
