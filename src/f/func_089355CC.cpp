#include "common.h"

extern "C" {
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10[1];
} S_089336F0;

typedef struct T_0892C27C T_0892C27C;

struct T {
    s32 unk_00;
    char *unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    char unk_20[0x20];
    u16 unk_40;
    u16 unk_42;
};

struct N {
    N *unk_00;
    N **unk_04;
    T unk_08;

    s32 unk_10(N *arg0) { return this == arg0; }
    bool unk_14(N *arg0) { return !(bool)unk_10(arg0); }
};

class B {
public:
    u8 pad_00[0x10];
    virtual void unk_08_v();
    virtual void unk_0C_v();
    virtual void unk_10_v();
    virtual void unk_14_v();
    virtual void unk_18_v();
    virtual void unk_1C_v();
    virtual void unk_20_v();
    virtual void unk_24_v();
    virtual void unk_28_v();
    virtual void unk_2C_v();
    virtual void unk_30_v();
    virtual void unk_34_v();
    virtual void unk_38_v();
    virtual void unk_3C_v();
    virtual void unk_40_v();
    virtual void unk_44_v();
    virtual s32 unk_48_v(char *);
};

struct C {
    u8 pad_00[0x40];
    B *unk_40;
};

class U {
public:
    u8 pad_00[0x514];
    N *unk_514;
    N **unk_518;
    N *unk_51C;
    u32 unk_520;
    virtual void unk_08_v();
    virtual void unk_0C_v();
    virtual C *unk_10_v(s32);
};

void func_08855354(char *);
extern s32 func_089337A4(s32);
void func_0892C14C(s32, f32, f32);
void func_0892C000(char *arg0, s8 arg1);
void func_089336F0(S_089336F0 *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
s32 func_0892C27C(T_0892C27C *arg0);
void func_08935BF0(T *);
extern f32 D_08A02F64[];
extern f32 D_08A02F68[];

struct M {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    u8 pad_40[0x14];
};

struct J {
    f32 unk_00;
    u8 pad_04[4];
};

struct K {
    static inline N *unk_00(U *arg0, N *arg1, T *arg2) {
        N *temp = arg1->unk_00;
        N *temp2;
        N *temp3;
        N **temp4;
        --arg0->unk_520;
        func_08935BF0(arg2);
        temp3 = arg0->unk_51C;
        temp2 = arg1->unk_00;
        *arg1->unk_04 = temp2;
        temp4 = temp2->unk_04;
        temp2->unk_04 = arg1->unk_04;
        arg1->unk_04 = temp3->unk_04;
        *temp3->unk_04 = arg1;
        temp3->unk_04 = temp4;
        *temp4 = temp3;
        return temp;
    }
};

void func_089355CC(U *arg0, u32 arg1) {
    f32 temp;
    J temp2;
    M temp3;
    N *temp5;
    N *temp4;
    C *temp7;
    T *temp6;
    f32 *temp8;
    s32 temp9;
    temp5 = arg0->unk_514;
    temp4 = (N *)&arg0->unk_514;
    if (temp5->unk_14(temp4)) {
        do {
            temp6 = &temp5->unk_08;
            if (temp6->unk_40 == 0) {
                temp = temp6->unk_08 - (f32)arg1 / 4800.0f;
                if (D_08A02F64[0] < temp) {
                    temp8 = &temp;
                } else {
                    temp8 = D_08A02F64;
                }
                temp6->unk_08 = *temp8;
                if (temp6->unk_08 <= 0.0f) {
                    temp7 = arg0->unk_10_v(temp6->unk_10);
                    func_08855354((char *)&temp3);
                    {
                        f32 temp11 = temp6->unk_1C;
                        f32 temp10 = temp6->unk_18;
                        temp3.unk_30 = temp10;
                        temp3.unk_34 = temp11;
                        {
                            f32 *temp12 = &temp3.unk_38;
                            temp12[0] = 0.0f;
                            temp12[1] = 1.0f;
                        }
                    }
                    temp9 = temp7->unk_40->unk_48_v(temp6->unk_20);
                    if (temp9 == -1) {
                        func_0892C14C((s32)temp6->unk_04, 0.0f, 0.0f);
                        temp5 = K::unk_00(arg0, temp5, temp6);
                        continue;
                    }
                    func_089336F0((S_089336F0 *)(temp6->unk_04 + 0x1F0), (s32)temp7, temp9, temp6->unk_14, &temp3);
                    func_0892C000(temp6->unk_04, 1);
                    temp6->unk_40 = 1;
                }
            }
            if (temp6->unk_42 == 1) {
                temp2.unk_00 = temp6->unk_0C - (f32)arg1 / 4800.0f;
                if (D_08A02F68[0] < temp2.unk_00) {
                    temp8 = &temp2.unk_00;
                } else {
                    temp8 = D_08A02F68;
                }
                temp6->unk_0C = *temp8;
                if (temp6->unk_0C <= 0.0f) {
                    func_089337A4((s32)(temp6->unk_04 + 0x1F0));
                    temp5 = K::unk_00(arg0, temp5, temp6);
                    continue;
                }
            }
            if ((u8)func_0892C27C((T_0892C27C *)temp6->unk_04) == 1) {
                func_089337A4((s32)(temp6->unk_04 + 0x1F0));
                temp5 = K::unk_00(arg0, temp5, temp6);
            } else {
                temp5 = temp5->unk_00;
            }
        } while (temp5->unk_14(temp4));
    }
}
}


