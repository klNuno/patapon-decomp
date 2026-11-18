#include "common.h"

typedef struct { f32 unk_00, unk_04; } A;
typedef struct {
    u8 pad_00[8];
    A *unk_08;
    u8 pad_0C[4];
    f32 unk_10, unk_14;
    u8 pad_18[4];
    f32 unk_1C;
    u8 pad_20[0x4C];
    s32 unk_6C;
} T;
typedef struct { u8 unk_00[4]; } B4;
typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
    s32 unk_10, unk_14;
    u32 unk_18;
    B4 unk_1C;
} P;
typedef struct {
    u8 pad_00[0x28];
    f32 unk_28, unk_2C;
    u8 pad_30[0x14];
} S0;
typedef struct { S0 unk_00; u8 pad_44[0xC]; } R;

u16 *func_088AD774(u16 *, u16 *);
u16 *func_088AD8BC(u16 *, P *);
void func_088AC958(A *, A *, u16 *, u32, s32);
void func_088AF7D0(S0 *, T *, u16, P *, f32, f32);

s32 func_088AF580(A *arg0, T *arg1, u16 *arg2, P *arg3) {
    u16 temp[0x180];
    struct { A unk_00; u8 pad_08[4]; f32 unk_0C; } temp2;
    struct { u8 pad_00[8]; A unk_08; } temp4;
    P temp5;
    R temp6;
    s32 temp8;
    u16 *temp7;
    u16 temp9;
    s32 temp10;
    f32 temp11;
    f32 *temp12;
    f32 temp13, temp14;
    temp13 = arg1->unk_08->unk_04 + arg1->unk_1C;
    arg0->unk_00 = 0.0f;
    arg0->unk_04 = temp13;
    temp5.unk_00 = arg3->unk_00;
    temp5.unk_04 = arg3->unk_04;
    temp5.unk_08 = arg3->unk_08;
    temp5.unk_0C = arg3->unk_0C;
    temp5.unk_10 = arg3->unk_10;
    temp5.unk_14 = arg3->unk_14;
    temp5.unk_18 = arg3->unk_18;
    temp5.unk_1C = arg3->unk_1C;
    func_088AD774(arg2, temp);
    temp8 = 0;
    temp7 = temp;
    goto test;
    do {
        if (temp8 >= 0x180) {
            break;
        }
        if (temp9 == 0x26) {
            temp7 = func_088AD8BC(temp7, &temp5);
        } else if (temp9 != 0) {
            temp10 = temp9 == 0xA;
            if (temp10 == 0) temp10 = temp9 == 0xD;
            if (temp10 == 0) temp10 = temp9 == 0x2F;
            if (temp10 == 0) {
                temp4.unk_08.unk_00 = 1.0f;
                temp4.unk_08.unk_04 = 1.0f;
                func_088AC958(&temp2.unk_00, &temp4.unk_08, temp7, temp5.unk_18, arg1->unk_6C);
                temp14 = (f32)*(volatile u32 *)&temp5.unk_18;
                temp13 = *(volatile f32 *)&arg0->unk_00;
                func_088AF7D0(&temp6.unk_00, arg1, *temp7, &temp5, temp13, temp14);
                arg0->unk_00 += temp6.unk_00.unk_28 + arg1->unk_10 * temp2.unk_00.unk_00;
                temp2.unk_0C = temp6.unk_00.unk_2C + arg1->unk_14 * temp2.unk_00.unk_04;
                temp12 = arg0->unk_04 < temp2.unk_0C ? &temp2.unk_0C : &arg0->unk_04;
                arg0->unk_04 = *temp12;
                if (*temp7 == 0x2D) {
                    temp11 = arg0->unk_00;
                    arg0->unk_00 = temp11 + 1.0f;
                }
            }
        }
        temp7++;
        temp8++;
    test:
        temp9 = *temp7;
        if (temp9 == 0) {
            break;
        }
        temp10 = temp9 == 0xA;
        if (temp10 == 0) temp10 = temp9 == 0xD;
        if (temp10 == 0) temp10 = temp9 == 0x2F;
    } while (temp10 == 0);
    return 0;
}



