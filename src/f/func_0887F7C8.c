#include "common.h"

typedef struct {
    u8 pad_00[0x1514];
    s32 unk_1514;
    u8 pad_1518[0x36B10 - 0x1518];
    s32 unk_36B10;
} T;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    u8 pad_44[0x1C];
    T *unk_60;
    u8 pad_64[0x20];
    u8 unk_84;
    u8 pad_85[0x13];
    u8 unk_98;
    u8 pad_99[3];
    s32 unk_9C;
    f32 unk_A0;
    f32 unk_A4;
    f32 unk_A8;
    u8 pad_AC[4];
    f32 unk_B0;
    f32 unk_B4;
    f32 unk_B8;
    f32 unk_BC;
    u8 unk_C0;
} S;

f32 func_08819D88(f32);
f32 func_0881A1E0(f32);
f32 func_0881A3F4(f32, f32);
f32 func_08856234(f32);
s32 func_0887ED78(s32, s32);
s32 func_08895420(char *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_08895458(char *);
extern char *func_08899E18(s32, s32);

extern f32 D_089DDCC0[];

void func_0887F7C8(S *arg0) {
    s32 temp;
    char *temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;
    f32 temp10;
    f32 temp11;
    f32 temp12;
    f32 temp13;
    f32 temp16;
    f32 temp14;
    f32 temp15;
    f32 temp17;

    temp = arg0->unk_60->unk_36B10;
    temp2 = func_08899E18(temp, 0);
    if (func_08895420(temp2, 1, 0, 1) == 0) {
        return;
    }
    temp3 = *(f32 *)func_08895420(temp2, 1, 0, 1);
    temp4 = func_08856234(arg0->unk_40);
    temp5 = (arg0->unk_38 * temp4) / 136.0f;
    arg0->unk_34 = temp5 * (arg0->unk_BC + (-40.0f + D_089DDCC0[0]));
    if ((u8)func_08895458(temp2) == 1) {
        arg0->unk_84 = 1;
        arg0->unk_9C = 0;
        arg0->unk_A0 = 2.0f;
        arg0->unk_98 = 1;
    }
    temp6 = arg0->unk_A4;
    if (temp6 > 80.0f) {
        temp7 = 80.0f;
    } else {
        temp7 = (temp6 < -80.0f) ? -80.0f : temp6;
    }
    temp8 = (3.1415927f * temp7) / 180.0f;
    temp9 = func_0881A1E0(temp8);
    temp10 = temp3 + arg0->unk_38 * (temp9 / func_08819D88(temp8));
    arg0->unk_B4 = temp10;
    temp12 = arg0->unk_A8;
    temp10 += temp12;
    temp13 = arg0->unk_B0;
    arg0->unk_30 = temp13 + temp10;

    temp9 = func_0881A1E0(0.9162979f);
    temp11 = temp9 / func_08819D88(0.9162979f);
    temp12 = arg0->unk_38;
    temp13 = arg0->unk_B4;
    temp14 = 160.0f;
    temp15 = 40.0f;
    arg0->unk_38 = arg0->unk_B8;
    temp16 = temp13 - (temp3 + temp12 * temp11);

    temp2 = func_08899E18(temp, 1);
    if (func_08895420(temp2, 1, 0, 1) != 0) {
        temp17 = *(f32 *)func_08895420(temp2, 1, 1, 1) - 30.0f;
        temp13 = arg0->unk_B4;
        if ((temp17 - temp13) < (0.5f * (480.0f * temp5))) {
            if (temp13 >= temp17) {
                temp15 = (180.0f * func_0881A3F4(temp17 - temp3, arg0->unk_38)) / 3.1415927f;
            }
            temp16 = 0.0f;
            temp14 = 200.0f;
        }
    }

    temp6 = arg0->unk_A4;
    arg0->unk_A4 = temp6 + 0.1f * (temp15 - temp6);
    temp6 = arg0->unk_B0;
    arg0->unk_B0 = temp6 + 0.1f * (temp16 - temp6);
    temp6 = arg0->unk_B8;
    arg0->unk_B8 = temp6 + 0.1f * (temp14 - temp6);

    arg0->unk_A8 = 0.0f;
    if (arg0->unk_C0 != 0) {
        temp = arg0->unk_60->unk_1514;
        if (func_0887ED78(temp, 0x20) != 0) {
            arg0->unk_A8 = 0.25f * (480.0f * temp5);
        } else if (func_0887ED78(temp, 0x80) != 0) {
            arg0->unk_A8 = 0.25f * (480.0f * -temp5);
        }
    }
}
