#include "common.h"

extern "C" {
struct T0 {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[1];
};
struct S_089C2CA8_3B0 {
    u8 pad_00[0x8D0];
    u8 unk_8D0;
};
struct T1 {
    T0 *unk_00;
    u8 pad_04[0xB90];
    s32 unk_B94;
    u8 pad_B98[4];
    S_089C2CA8_3B0 *unk_B9C;
    s32 unk_BA0;
    u8 unk_BA4;
    u8 pad_BA5[7];
    s32 unk_BAC;
    u32 unk_BB0;
    s32 unk_BB4;
    u8 pad_BB8[4];
    s32 unk_BBC;
    s32 unk_BC0;
    u8 unk_BC4[1];
};
struct T2 {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
};
struct Unk_089CA058_Local {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
};
class T3 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28(s32 *, f32 *, s32 *);
};

void func_08855354(char *);
s32 func_088586E8(void);
extern int func_08864E80(char *, char *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
void func_088D45F4(S_089C2CA8_3B0 *);
void func_08956380(void *, s32, s32);
extern void *func_08958954(u8 *);
void func_0897C3F4(f32, void *, s32);
char *func_08985828(s32, s32);
void func_0898584C(T1 *, s32);
void func_0898ABB8(s32, f32, s32, s32);
u8 *func_089B53D8(s32);
s32 func_089BED10(T3 *);
s32 func_089BED18(T3 *);
u32 func_089BED30(T3 *, s32);
s32 func_089BED38(T3 *);
s32 func_089BED40(T3 *);
void func_089BED48(s32 *, T3 *);
void func_089C1924(T1 *, s32, s32);
void func_089D3BB8(void *, const void *, s32);

extern s32 D_089F28F8[];
extern s32 D_089F2914[];
extern s32 D_089F29D4[];
extern f32 D_089F29E8[];
extern f32 D_089F29EC[];
extern char D_089F29FC[];
extern char D_089F2B68[];

void func_089C0CA4(T1 *arg0) {
    struct {
        u8 pad_00[0x14];
        s32 unk_14;
        u8 pad_18[0x1C];
        s32 unk_34;
        f32 unk_38;
        s32 unk_3C;
    } temp;
    Unk_089CA058_Local temp4;
    Unk_089CA058_Local temp5;
    Unk_089CA058_Local temp6;
    T3 *temp7 = (T3 *)func_08958954(arg0->unk_00->unk_2E3C0);
    if (temp7 != NULL) {
        if (temp7->unk_14() != 0) {
            temp.unk_3C = 0;
            temp.unk_38 = 0.0f;
            temp.unk_34 = 0;
            temp7->unk_28(&temp.unk_3C, &temp.unk_38, &temp.unk_34);
            if (0.95f <= temp.unk_38) {
                func_0898584C(arg0, 0);
                arg0->unk_BB4 = 3;
            } else if (0.6f <= temp.unk_38) {
                func_0898584C(arg0, 1);
                arg0->unk_BB4 = 0.8f <= temp.unk_38 ? 2 : 1;
            } else {
                func_0898584C(arg0, 2);
                T0 *temp9 = arg0->unk_00;
                S_089C2CA8_3B0 *temp8 = arg0->unk_B9C;
                if (temp8 != NULL) {
                    func_088D45F4(temp8);
                    temp8->unk_8D0 = 0;
                }
                func_08956380(temp9->unk_2E3C0, 0, 0);
                func_0897C3F4(1.0f, func_089B53D8(func_088586E8()) + 0x14, 0);
            }
            arg0->unk_B94 = 2;
        } else {
            ++arg0->unk_BBC;
            s32 temp8 = func_089BED38(temp7);
            if (temp8 != arg0->unk_BAC) {
                arg0->unk_BAC = temp8;
                arg0->unk_BBC = 0;
                if (temp8 == 0x11) {
                    func_08855354((char *)&temp4);
                    temp4.unk_30 = D_089F29E8[0];
                    temp4.unk_34 = D_089F29EC[0];
                    func_08864E80(func_08985828((s32)arg0, 1), (char *)&temp4);
                    func_0898ABB8((s32)func_08985828((s32)arg0, 1), 0.0f, 1, 1);
                } else if (temp8 > 1) {
                    if (arg0->unk_BA4 == 0) {
                        if (++arg0->unk_BA0 == 2) {
                            arg0->unk_BA0 = 0;
                            if (arg0->unk_BB0 < 3U) {
                                ++arg0->unk_BB0;
                            }
                            char *temp9 = func_08985828((s32)arg0, 0);
                            func_0898ABB8((s32)temp9, 0.0f, D_089F28F8[arg0->unk_BB0], 1);
                        }
                    } else {
                        char *temp9 = func_08985828((s32)arg0, 0);
                        func_0898ABB8((s32)temp9, 0.0f, D_089F28F8[arg0->unk_BB0], 1);
                    }
                }
                arg0->unk_BA4 = 0;
            }
            if (((T2 *)func_08985828((s32)arg0, 0))->unk_4C == 0xF) {
                T2 *temp9 = (T2 *)func_08985828((s32)arg0, 0);
                if (temp9->unk_5C <= temp9->unk_54) {
                    char *temp10 = func_08985828((s32)arg0, 0);
                    func_0898ABB8((s32)temp10, 0.0f, D_089F28F8[arg0->unk_BB0], 1);
                    f32 temp11 = (f32)arg0->unk_BBC;
                    ((T2 *)func_08985828((s32)arg0, 0))->unk_54 = temp11;
                }
            }
            s32 temp9 = arg0->unk_BC0;
            if (temp9 >= 0) {
                char *temp10 = func_08985828((s32)arg0, 0);
                func_08866464(&temp5, temp10, D_089F29D4[temp9]);
                func_08864E80(func_08985828((s32)arg0, 1), (char *)&temp5);
            }
            if (temp8 < 0x11 && ((u8)func_089BED10(temp7) || (u8)func_089BED18(temp7))) {
                if (func_089BED10(temp7) != 0) {
                    u32 temp10 = (arg0->unk_BAC - 1) * 3 + func_089BED40(temp7) / 2;
                    if (temp10 >= 0x30U) { temp10 = 0x2F; }
                    s32 temp11 = D_089F2914[temp10];
                    func_0898ABB8((s32)func_08985828((s32)arg0, 1), 0.0f, temp11, 1);
                    func_089C1924(arg0, temp11, func_089BED40(temp7));
                    func_089D3BB8(arg0->unk_BC4, D_089F29FC, 0xD);
                } else if (func_089BED18(temp7) != 0) {
                    func_0898ABB8((s32)func_08985828((s32)arg0, 0), 0.0f, 0xF, 0);
                    func_089BED48(&temp.unk_14, temp7);
                    if (temp.unk_14 != 1) {
                        T2 *temp10 = (T2 *)func_08985828((s32)arg0, 1);
                        arg0->unk_BC0 = -1;
                        if (temp10->unk_4C != 1) {
                            func_0898ABB8((s32)temp10, 0.0f, 1, 1);
                            func_08855354((char *)&temp6);
                            temp6.unk_30 = D_089F29E8[0];
                            temp6.unk_34 = D_089F29EC[0];
                            func_08864E80((char *)temp10, (char *)&temp6);
                        }
                    } else {
                        u32 temp10 = func_089BED30(temp7, 1);
                        if (temp10 < 6U) {
                            u32 temp11 = (temp10 >> 1) + (arg0->unk_BAC - 1) * 3;
                            if (temp11 >= 0x30U) { temp11 = 0x2F; }
                            s32 temp12 = D_089F2914[temp11];
                            func_0898ABB8((s32)func_08985828((s32)arg0, 1), 0.0f, temp12, 1);
                            func_089C1924(arg0, temp12, temp10 & ~1U);
                        }
                    }
                    arg0->unk_BA0 = 0;
                    if (arg0->unk_BA4 == 0) {
                        if ((s32)arg0->unk_BB0 > 0) {
                            --arg0->unk_BB0;
                        }
                        arg0->unk_BA4 = 1;
                    }
                    func_089D3BB8(arg0->unk_BC4, D_089F2B68, 0xD);
                }
            }
        }
    }
}
}
