#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x10];
    u32 unk_10;
    u32 pad_14;
    u32 unk_18;
    u32 unk_1C;
} T;

typedef struct {
    u8 pad_00[0x20];
    T *unk_20;
} T2;

typedef struct {
    u8 pad_00[0x40];
    u8 unk_40;
    u8 unk_41;
} T3;

typedef struct {
    u8 pad_00[0x1500];
    s32 unk_1500;
    u8 pad_1504[0xC];
    u8 unk_1510;
    u8 pad_1511[3];
    u32 unk_1514;
    f32 unk_1518;
    u32 pad_151C;
    u32 unk_1520;
    u32 pad_1524;
    u32 unk_1528;
    u32 unk_152C;
    s32 unk_1530;
    s32 unk_1534;
    u8 pad_1538[0x14];
    u8 unk_154C;
    volatile u8 unk_154D;
    volatile u8 unk_154E;
    u8 pad_154F[0x41];
    u8 unk_1590[0xAAC];
    u8 unk_203C[0x215B4];
    char unk_235F0[0x90];
    T3 unk_23680;
    u8 pad_236C2[0x4C];
    u8 unk_2370E;
    u8 unk_2370F;
    u8 pad_23710;
    u8 unk_23711;
    u8 pad_23712[0xF7E];
    u8 unk_24690;
} U;

typedef struct {
    u8 pad_00[0xC4];
} V;

typedef struct S_08955004 S_08955004;

extern T2 *D_08AD2178[];
extern u32 D_08AD2104[];
extern s32 D_08AD2108[];
extern const f32 D_089F9910[];

s32 func_088586E8(void);
u8 *func_089B53CC(s32);
void func_0887B980(u8 *, s32);
void func_0896D284(void *, u32);
void func_0887E710(V *, s32);
s32 func_08958924(void *);
s32 func_08958E00(s32);
char *func_08958E20(void *, s32);
void func_08955004(S_08955004 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8);
void func_0894BDDC(char *, s32);
void func_0894BDEC(char *, s32);
void func_08956F20(s32, u32, s32);
s32 func_0887E924(V *, s16);
void func_08956F28(s32, s32);
void func_08956414(void *, s32, u32);

inline T2 *func_0887CE54_00(T2 *arg0) {
    if (arg0 != NULL) {
        return arg0;
    }
    return NULL;
}

s32 func_0887CE54(U *arg0, u32 arg1) {
    V temp;
    u32 temp1;
    u32 temp2;
    u8 *temp3;
    u8 *temp4;
    u32 temp5;
    u32 temp6;
    u32 temp7;
    T2 *temp8;
    s16 *temp9;
    const f32 *temp10;

    if (arg0->unk_1510 == 0) {
        temp7 = arg0->unk_1514 + 1;
        if ((arg0->unk_1514 = temp7) > 10U) {
            arg0->unk_1510 = 1;
        }
        return 0x10000;
    }
    temp8 = D_08AD2178[0];
    if (((temp8 != NULL ? temp8 : NULL)->unk_20->unk_1C & 0x300) != 0) {
        temp3 = func_089B53CC(func_088586E8());
        temp4 = func_089B53CC(func_088586E8());
        func_0887B980(temp4, (temp3[1] != 0) ^ 1);
    }
    if (func_089B53CC(func_088586E8())[1] != 0) {
        return 0x10000;
    }
    func_0896D284(&arg0->unk_24690, arg1);
    func_0887E710(&temp, arg0->unk_1500);
    func_08958924(arg0->unk_1590);
    temp8 = D_08AD2178[0];
    temp4 = arg0->unk_203C;
    temp1 = func_0887CE54_00(temp8)->unk_20->unk_18;
    temp2 = func_0887CE54_00(temp8)->unk_20->unk_10;
    if ((func_0887CE54_00(temp8)->unk_20->unk_1C & 8) != 0) {
        arg0->unk_154E = (arg0->unk_154E != 0) ^ 1;
        arg0->unk_23711 = arg0->unk_154E;
        arg0->unk_2370E = arg0->unk_154E;
    }
    if ((temp1 & 0x10) == 0x10) {
        if (arg0->unk_152C == 0) {
            arg0->unk_152C = 10;
        } else {
            --arg0->unk_152C;
        }
    }
    if ((temp1 & 0x40) == 0x40) {
        if (++arg0->unk_152C >= 11) {
            arg0->unk_152C = 0;
        }
    }
    temp5 = arg0->unk_152C;
    temp6 = 0;
    switch (temp5) {
    case 0:
        if ((temp1 & 0x20) == 0x20) {
            temp7 = ++arg0->unk_1520;
            if ((u32)func_08958E00((s32)temp4) < temp7) {
                arg0->unk_1520 = 0;
                arg0->unk_1528 = 0;
            } else {
                arg0->unk_1528 = 0;
            }
            temp6 = 1;
        }
        if ((temp1 & 0x80) == 0x80) {
            if (arg0->unk_1520 == 0) {
                arg0->unk_1520 = func_08958E00((s32)temp4);
            } else {
                --arg0->unk_1520;
            }
            arg0->unk_1528 = 0;
            temp6 = 1;
        }
        if (temp6 != 0) {
            if (arg0->unk_23680.unk_40) {
                T3 *temp11 = &arg0->unk_23680;
                temp11->unk_41 = 1;
                temp11->unk_40 = 0;
            }
            if (arg0->unk_1520 != 0) {
                temp9 = (s16 *)(func_08958E20(temp4, arg0->unk_1520 - 1) + 0x40);
                func_08955004((S_08955004 *)&arg0->unk_23680, temp9[0], temp9[1], temp9[2], temp9[3], temp9[4], temp9[5], temp9[6], temp9[7]);
            } else {
                T3 *temp11 = &arg0->unk_23680;
                func_08955004((S_08955004 *)temp11, 0, 0, 0, 0, 0, 0, 0, 0);
                temp11->unk_40 = 0;
            }
        }
        break;
    case 1:
        if ((temp1 & 0x20) == 0x20) {
            arg0->unk_1518 += 0.01f;
        }
        if ((temp1 & 0x80) == 0x80) {
            arg0->unk_1518 -= 0.01f;
        }
        break;
    case 2:
        if ((temp1 & 0x20) == 0x20) {
            if (arg0->unk_1534 == 2) {
                arg0->unk_1534 = -1;
            } else {
                ++arg0->unk_1534;
            }
        }
        if ((temp1 & 0x80) == 0x80) {
            if (arg0->unk_1534 == -1) {
                arg0->unk_1534 = 2;
            } else {
                --arg0->unk_1534;
            }
        }
        func_0894BDDC(arg0->unk_235F0, arg0->unk_1534 + 1);
        break;
    case 3:
        if ((temp1 & 0x20) == 0x20) {
            if (arg0->unk_1530 == 2) {
                arg0->unk_1530 = -1;
            } else {
                ++arg0->unk_1530;
            }
        }
        if ((temp1 & 0x80) == 0x80) {
            if (arg0->unk_1530 == -1) {
                arg0->unk_1530 = 2;
            } else {
                --arg0->unk_1530;
            }
        }
        func_0894BDEC(arg0->unk_235F0, arg0->unk_1530);
        break;
    case 5:
        if ((temp1 & 0x20) == 0x20 || (temp1 & 0x80) == 0x80) {
            arg0->unk_154D = (arg0->unk_154D != 0) ^ 1;
            arg0->unk_2370F = (arg0->unk_154D != 0) ^ 1;
        }
        break;
    case 6:
        if ((temp1 & 0x20) == 0x20 || (temp1 & 0x80) == 0x80) {
            D_08AD2104[0] = ~D_08AD2104[0];
        }
        break;
    case 7:
    case 8:
    case 9:
    case 10:
        if ((temp1 & 0x20) == 0x20 || (temp1 & 0x80) == 0x80) {
            u32 temp11 = temp5 - 7;
            func_08956F20((s32)arg0->unk_1590, temp11, (D_08AD2108[temp11] = ~D_08AD2108[temp11]));
        }
        break;
    case 4:
    default:
        break;
    }
    if ((temp2 & 0x308) == 0x308) {
        func_0887E924(&temp, -1);
        return 0x10001;
    }
    func_08956F28((s32)arg0->unk_1590, arg0->unk_154C);
    temp4 = arg0->unk_1590;
    func_08956414(temp4, (s32)&temp, arg1);
    temp10 = arg0->unk_1518 < D_089F9910[0] ? &D_089F9910[0] : &arg0->unk_1518;
    temp10 = D_089F9910[1] < *temp10 ? &D_089F9910[1] : temp10;
    arg0->unk_1518 = *temp10;
    func_0887E924(&temp, -1);
    return 0x10000;
}
}
