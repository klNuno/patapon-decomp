#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
    u8 unk_BE;
} T_089734B8;

typedef struct {
    u8 pad_00[0x4];
    T_089734B8 *unk_04;
} S_089734B8;

typedef struct {
    u8 pad_00[0xCF0];
    u8 unk_CF0[1];
} Unk1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
    u8 pad_14[8];
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
    u8 pad_30[4];
    f32 unk_34;
    u8 pad_38[8];
    s32 unk_40;
    u8 pad_44[0xC];
    f32 unk_50;
} Unk;

s32 *func_0884EBA0(s32, s32);
S_089734B8 *func_08852FFC(s32);
s32 func_08853004(s32);
s32 func_088586E8(void);
void func_0889DA40(u8 *, s32, s32, s32);
Unk1 *func_08973F20(Unk *, s32);
u32 func_089B5464(s32);

extern f32 D_08A05458[], D_08A05460[], D_08A05464[];

inline u8 unk_00(Unk *arg0, f32 *arg1) {
    s32 temp1;
    u32 temp2;
    S_089734B8 *temp0 = func_08852FFC(arg0->unk_08);
    ((volatile f32 *)arg1)[0] = *(volatile f32 *)&D_08A05458[1];
    ((volatile f32 *)arg1)[1] = *(volatile f32 *)D_08A05460;
    ((volatile f32 *)arg1)[2] = *(volatile f32 *)D_08A05464;
    temp1 = *(volatile s32 *)&arg0->unk_10;
    if (temp1 < 0 || temp1 > 2) {
        return 0;
    }
    temp2 = ((u32 *)arg1)[temp1];
    if ((((s32)((u8 *)temp0->unk_04)[temp2 >> 3] >> (temp2 & 7)) & 1) == 1) {
        return 1;
    }
    return 0;
}

void func_089738C4(Unk *arg0) {
    f32 a[3], b[3];
    S_089734B8 *temp0 = func_08852FFC(arg0->unk_08);
    s32 temp1 = func_08853004(arg0->unk_08);
    f32 temp2 = 0.0f;
    f32 temp3 = temp2;
    s32 temp4 = -1;
    if (*func_0884EBA0(temp1, 0x1E) != temp4) {
        if (*func_0884EBA0(temp1, 0x74) == 0) {
            switch (*func_0884EBA0(temp1, 0x1E)) {
            case 1:
            case 3:
            case 4:
            case 2:
                temp2 = (f32)(func_089B5464(func_088586E8()) % (u32)arg0->unk_40);
                temp3 = arg0->unk_50;
                temp4 = 0;
                break;
            }
        } else if (*func_0884EBA0(temp1, 0x74) == 1) {
            switch (*func_0884EBA0(temp1, 0x1E)) {
            case 1:
                temp4 = 0;
                break;
            case 3:
                temp4 = 1;
                break;
            case 4:
            case 2:
                if (arg0->unk_20 < arg0->unk_40 / 2) {
                    temp4 = 0;
                } else {
                    temp4 = 1;
                }
                break;
            }
            switch (temp4) {
            case 0:
                temp2 = (f32)arg0->unk_20;
                temp3 = 0.95f;
                break;
            case 1:
                temp2 = ((f32)arg0->unk_40 - 1.0f) - (f32)arg0->unk_20;
                temp3 = 0.95f;
                break;
            }
        }
        if (temp4 == -1) {
            return;
        }
        arg0->unk_34 = 0.5f * (1.05f - temp3) * temp2;
        if (unk_00(arg0, a) == 1) {
            switch (*func_0884EBA0(temp1, 0x25)) {
            case 1:
                arg0->unk_2C = 0x34;
                return;
            case 3:
                arg0->unk_2C = 0x33;
                return;
            case 4:
                arg0->unk_2C = 0x35;
                return;
            case 2:
                arg0->unk_2C = 0x46;
                return;
            }
        } else {
            switch (*func_0884EBA0(temp1, 0x25)) {
            case 1:
                arg0->unk_2C = 0x30;
                return;
            case 3:
                arg0->unk_2C = 0x2F;
                return;
            case 4:
                arg0->unk_2C = 0x31;
                return;
            case 2:
                arg0->unk_2C = 0x45;
                return;
            }
        }
    } else {
        u8 temp5 = temp0->unk_04->unk_BE;
        f32 temp6, temp7;
        if (((temp5 >> 2) & 1) == 1) {
            arg0->unk_2C = 0x32;
            if ((func_089B5464(func_088586E8()) & 1) == 0) {
                temp6 = (f32)arg0->unk_20;
                temp7 = 0.9f;
            } else {
                temp6 = ((f32)arg0->unk_40 - 1.0f) - (f32)arg0->unk_20;
                temp7 = 0.9f;
            }
        } else if (((temp5 >> 1) & 1) == 1) {
            arg0->unk_2C = 0x3A;
            temp6 = (f32)(func_089B5464(func_088586E8()) % (u32)arg0->unk_40);
            temp7 = 0.8f;
        } else if (((temp5 >> 5) & 1) == 1) {
            Unk1 *temp8 = func_08973F20(arg0, arg0->unk_1C);
            if (temp8 != NULL) {
                func_0889DA40(temp8->unk_CF0, 0x3B, 0, 0);
            }
            arg0->unk_2C = 0x3B;
            arg0->unk_34 = -1.0f;
            return;
        } else {
            if (unk_00(arg0, b) != 1) {
                Unk1 *temp8 = func_08973F20(arg0, arg0->unk_1C);
                if (temp8 != NULL) {
                    func_0889DA40(temp8->unk_CF0, 2, 1, 0);
                }
                arg0->unk_2C = 2;
                arg0->unk_34 = -1.0f;
            } else {
                Unk1 *temp8 = func_08973F20(arg0, arg0->unk_1C);
                if (temp8 != NULL) {
                    func_0889DA40(temp8->unk_CF0, 0x2D, 1, 0);
                }
                arg0->unk_2C = 0x2D;
                arg0->unk_34 = -1.0f;
            }
            return;
        }
        arg0->unk_34 = 0.5f * (1.05f - temp7) * temp6;
    }
}
