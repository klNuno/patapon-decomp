#include "common.h"

typedef struct { f32 unk_00, unk_04; } T;
typedef struct { u8 pad_00[8]; f32 unk_08, unk_0C, unk_10, unk_14; } U;
typedef struct {
    u8 pad_00[0x190B0];
    u8 unk_190B0[0xFD0];
    u32 unk_1A080;
    u8 pad_1A084[0x44];
    f32 unk_1A0C8, unk_1A0CC, unk_1A0D0, unk_1A0D4;
    u8 pad_1A0D8[0x78];
    f32 unk_1A150, unk_1A154;
    u8 pad_1A158[4];
    U *unk_1A15C;
    T *unk_1A160;
    u8 pad_1A164[8];
    u32 unk_1A16C;
} S;
typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C, unk_10, unk_14, unk_18, unk_1C, unk_20, unk_24;
    u32 unk_28;
    u8 pad_2C[8];
} Q;
typedef u8 Obj_0895395C;
void *func_088D669C(void *, u8 *);
void func_088D6314(Obj_0895395C *, Q *, void *, u8 *, void *, f32);
extern f32 D_08A04458[];
extern f32 D_08A04460[];
extern f32 D_08A04468[];
extern f32 D_08A04470[];
extern f32 D_08A04478[];

void func_0894F210(S *arg0, s32 arg1) {
    struct { u8 unk_00; u8 pad_01[3]; } temp;
    Q temp2;
    u8 temp3[8];
    T *temp5;
    U *temp11;
    u32 temp4;
    u32 temp10;
    f32 temp6, temp7, temp8, temp9;
    temp4 = arg0->unk_1A080;
    if (temp4 != 0) {
        temp11 = arg0->unk_1A15C;
        temp9 = 0.0f;
        temp10 = arg0->unk_1A16C + temp4;
        temp5 = (T *)((u8 *)arg0->unk_1A160 + temp10 * sizeof(T));
        temp6 = temp5->unk_04;
        temp6 += temp9;
        temp8 = 48.0f * (f32)temp4;
        temp7 = temp5->unk_00 + temp8;
        temp2.unk_24 = temp6;
        temp2.unk_28 = 0;
        temp2.unk_00 = D_08A04458[1];
        temp2.unk_20 = temp7;
        temp.unk_00 = 0;
        temp2.unk_04 = D_08A04460[0];
        temp2.unk_08 = D_08A04460[1];
        temp2.unk_0C = D_08A04468[0];
        temp2.unk_10 = D_08A04468[1];
        temp2.unk_14 = D_08A04470[0];
        temp2.unk_18 = D_08A04470[1];
        temp2.unk_1C = D_08A04478[0];
        func_088D6314(arg0->unk_190B0, &temp2, func_088D669C(temp3, &temp.unk_00), 0, 0, 1.0f);
        temp6 = temp11->unk_0C;
        temp9 = 0.0f;
        temp6 += temp9;
        temp8 = -12.0f * (f32)temp4;
        temp7 = temp11->unk_08 + temp8;
        arg0->unk_1A150 = temp7;
        arg0->unk_1A154 = temp6;
        arg0->unk_1A0D4 = temp11->unk_10;
        arg0->unk_1A0D0 = temp11->unk_14;
        arg0->unk_1A0C8 = arg0->unk_1A150;
        arg0->unk_1A0CC = arg0->unk_1A154;
    }
}
