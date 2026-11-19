#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T0;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 pad_14[0xC];
    T0 unk_20;
    T0 unk_28;
    T0 unk_30;
    T0 unk_38;
    u16 unk_40;
    u16 unk_42;
    u8 pad_44[0xC];
} V;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    f32 *unk_08;
    u8 pad_0C[4];
    f32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    u8 pad_1C[0x24];
    s32 unk_40;
    u8 pad_44[4];
    volatile f32 unk_48;
    u8 pad_4C[0x2838];
    V *unk_2884;
    u32 unk_2888;
    u8 pad_288C[0x40];
    volatile u32 unk_28CC;
} S;

void func_088154E8(s32, s32);
typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

s32 func_08856400(U *);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
void func_088B02D8(V *, const V *);
void func_088B02C0(void *, const void *);
f32 func_088B0338(S *, V *);

void func_0891E54C(S *arg0, T0 *arg1) {
    U temp;
    V temp2;
    u32 *temp3;
    V **temp4;
    V *temp5;
    f32 temp7;
    f32 temp6;
    f32 temp8;
    s32 temp9;
    temp3 = &arg0->unk_2888;
    if (*temp3 != 0) {
        temp9 = arg0->unk_04;
        temp7 = arg1->unk_00;
        temp8 = *arg0->unk_08 + arg0->unk_18;
        temp6 = arg1->unk_04;
        temp8 += arg0->unk_10;
        if (temp9 == 1) {
            temp7 -= temp8 * (f32)arg0->unk_28CC / 2.0f;
        } else if (temp9 == 2) {
            temp7 -= temp8 * (f32)arg0->unk_28CC;
        } else if (temp9 == 3) {
            u32 temp10;
            f32 temp11;
            f32 temp12;
            temp10 = arg0->unk_28CC;
            temp11 = arg0->unk_48;
            temp6 += 16.0f;
            temp12 = (f32)temp10;
            temp12 *= temp8;
            temp7 += (temp11 - temp12) / 2.0f;
        }
        func_0886575C(0, arg0->unk_40, 1);
        temp4 = &arg0->unk_2884;
        temp5 = *temp4;
        if ((u32)temp5 != (u32)(temp5 + *temp3)) {
            temp3 = &arg0->unk_2888;
            do {
                temp.unk_00 = (1.0f / 255.0f) * (f32)(u32)temp5->unk_10;
                temp.unk_04 = (1.0f / 255.0f) * (f32)(u32)temp5->unk_11;
                temp.unk_08 = (1.0f / 255.0f) * (f32)(u32)temp5->unk_12;
                temp.unk_0C = (1.0f / 255.0f) * (f32)(u32)temp5->unk_13;
                func_088154E8(1, func_08856400(&temp));
                func_088B02D8(&temp2, temp5);
                func_088B02C0(&temp2.unk_20, &temp5->unk_20);
                func_088B02C0(&temp2.unk_28, &temp5->unk_28);
                func_088B02C0(&temp2.unk_30, &temp5->unk_30);
                func_088B02C0(&temp2.unk_38, &temp5->unk_38);
                temp2.unk_40 = temp5->unk_40;
                temp2.unk_42 = temp5->unk_42;
                temp2.unk_20.unk_00 += temp7;
                temp2.unk_20.unk_04 += temp6;
                func_088B0338(arg0, &temp2);
                ++temp5;
            } while (temp5 != *temp4 + *temp3);
        }
        func_08865870();
    }
}
}


