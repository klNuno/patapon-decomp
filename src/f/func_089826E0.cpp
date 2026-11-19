#include "common.h"

extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

class W {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40(s32 *, s32);
};

class U {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    s32 unk_08;
    s32 *volatile unk_0C;
} R;

typedef struct T_088F2F40 {
    u8 unk_00[0x10];
} T_088F2F40;

typedef struct {
    T_088F2F40 unk_00;
    u8 pad_10[0x48];
    s32 unk_58;
    u8 pad_5C[0xC];
    s32 unk_68;
    u8 pad_6C[0xC];
    s32 unk_78;
    u8 pad_7C[0xC];
    s32 unk_88;
} P;

typedef struct {
    u8 unk_00[0x34];
    f32 unk_34;
    u8 pad_38[8];
} Mtx;

typedef struct {
    u8 unk_00[0x98];
} S;

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0xC];
    u8 unk_40[0x190];
    u8 unk_1D0[0x190];
    u8 pad_360[0xDB0];
    u8 unk_1110[8][0x190];
    u8 pad_1D90[0xC80];
    Mtx unk_2A10[8], unk_2C10[8], unk_2E10[8];
    u8 unk_3010[4];
    u8 pad_3014[0xD9C];
    s32 unk_3DB0;
    u8 pad_3DB4[0x94];
    P *unk_3E48;
} T;

extern char D_08A05C78[];
extern char D_08A05C88[];
extern char D_08A05C98[];
extern char D_08A05CA8[];
extern char D_08A05CB8[];
extern char D_08A05CC8[];
extern char D_08A05CD8[];
extern char D_08A05CE8[];
extern char D_08A05CF8[];
extern char D_08A05D08[];
extern char D_08A05D18[];
extern char D_08A05D28[];
extern char D_08A05D34[];

s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858B9C(void);
s32 func_0888B03C(s32 *, char *);
void func_08982060(s32 *, s32, s32 *, char *, void *);
void func_088E20F4(void *, void *);
void func_088F2FE4(T_088F2F40 *, void *);
void func_0887432C(T_088F2F40 *, s32);
void func_0886A45C(s32, s32);
void func_08865EE0(void *);
void func_08865FE4(void *, s32);
void func_08866240(void *, s32, s32);
void func_08866058(void *, s32);
void func_088226BC(char *, char *, ...);
void func_08866464(Mtx *, void *, void *);
void func_08866B54(Mtx *, s32, void *);
void *func_08866B80(Mtx *, s32);
void func_08865F78(void *, s32);
void func_0897470C(void *, f32, f32, f32, f32);

inline void func_089826E0_00(R *arg0) {
    if (arg0->unk_08 != 0) {
        --*arg0->unk_0C;
        s32 *temp = arg0->unk_0C;
        if ((temp != NULL ? *temp : 0) == 0) {
            V *temp2 = arg0->unk_04;
            s32 *temp3 = arg0->unk_0C;
            temp2->unk_0C(*(volatile s32 *)&arg0->unk_08, temp3, arg0->unk_00);
            func_0886A45C(arg0->unk_08, arg0->unk_00);
        }
    }
}

inline void func_089826E0_01(Mtx *arg0, Mtx *arg1) {
    func_08866B54(arg0, 0, func_08866B80(arg1, 0));
    func_08866B54(arg0, 1, func_08866B80(arg1, 1));
    func_08866B54(arg0, 2, func_08866B80(arg1, 2));
    func_08866B54(arg0, 3, func_08866B80(arg1, 3));
}

void func_089826E0(T *arg0, s32 arg1) {
    s32 temp;
    s32 temp1;
    char temp2[0x40];
    R temp3[9];
    T_088F2F40 temp4[9];
    S temp5;
    Mtx temp6, temp7, temp8;
    arg0->unk_3DB0 = arg1;
    arg0->unk_30 = func_089B53D8(func_088586E8()) + 0xBB8;
    temp = arg1;
    temp1 = func_0888B03C(&temp, D_08A05C78);
    ((W *)arg0->unk_3010)->unk_40(&temp1, 0);

    func_08982060(&temp3[8].unk_00, func_08858B9C(), &temp, D_08A05C88, arg0->unk_3010);
    void *temp9 = arg0->unk_3E48;
    P **temp10 = &arg0->unk_3E48;
    func_088E20F4(&temp4[8], &temp3[8]);
    func_088F2FE4(&temp4[8], temp9);
    func_0887432C(&temp4[8], -1);
    func_089826E0_00(&temp3[8]);

    func_08982060(&temp3[7].unk_00, func_08858B9C(), &temp, D_08A05C98, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x10;
    func_088E20F4(&temp4[7], &temp3[7]);
    func_088F2FE4(&temp4[7], temp9);
    func_0887432C(&temp4[7], -1);
    func_089826E0_00(&temp3[7]);

    func_08982060(&temp3[6].unk_00, func_08858B9C(), &temp, D_08A05CA8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x20;
    func_088E20F4(&temp4[6], &temp3[6]);
    func_088F2FE4(&temp4[6], temp9);
    func_0887432C(&temp4[6], -1);
    func_089826E0_00(&temp3[6]);

    func_08982060(&temp3[5].unk_00, func_08858B9C(), &temp, D_08A05CB8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x30;
    func_088E20F4(&temp4[5], &temp3[5]);
    func_088F2FE4(&temp4[5], temp9);
    func_0887432C(&temp4[5], -1);
    func_089826E0_00(&temp3[5]);

    func_08982060(&temp3[4].unk_00, func_08858B9C(), &temp, D_08A05CC8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x40;
    func_088E20F4(&temp4[4], &temp3[4]);
    func_088F2FE4(&temp4[4], temp9);
    func_0887432C(&temp4[4], -1);
    func_089826E0_00(&temp3[4]);

    func_08982060(&temp3[3].unk_00, func_08858B9C(), &temp, D_08A05CD8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x50;
    func_088E20F4(&temp4[3], &temp3[3]);
    func_088F2FE4(&temp4[3], temp9);
    func_0887432C(&temp4[3], -1);
    func_089826E0_00(&temp3[3]);

    func_08982060(&temp3[2].unk_00, func_08858B9C(), &temp, D_08A05CE8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x60;
    func_088E20F4(&temp4[2], &temp3[2]);
    func_088F2FE4(&temp4[2], temp9);
    func_0887432C(&temp4[2], -1);
    func_089826E0_00(&temp3[2]);

    func_08982060(&temp3[1].unk_00, func_08858B9C(), &temp, D_08A05CF8, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x70;
    func_088E20F4(&temp4[1], &temp3[1]);
    func_088F2FE4(&temp4[1], temp9);
    func_0887432C(&temp4[1], -1);
    func_089826E0_00(&temp3[1]);

    func_08982060(&temp3[0].unk_00, func_08858B9C(), &temp, D_08A05D08, arg0->unk_3010);
    temp9 = (u8 *)*temp10 + 0x80;
    func_088E20F4(&temp4[0], &temp3[0]);
    func_088F2FE4(&temp4[0], temp9);
    func_0887432C(&temp4[0], -1);
    func_089826E0_00(&temp3[0]);

    func_08865FE4(arg0->unk_40, (*temp10)->unk_68);
    ((U *)arg0->unk_40)->unk_14(1, 1);
    func_08865FE4(arg0->unk_1D0, (*temp10)->unk_78);
    ((U *)arg0->unk_1D0)->unk_14(0, 0);
    func_08865EE0(&temp5);
    func_08865FE4(&temp5, (*temp10)->unk_88);
    func_08866240(&temp5, 0, 0);
    func_08866058(&temp5, 0x50);

    s32 temp11 = 0;
    T *temp12 = arg0;
    do {
        func_088226BC(temp2, D_08A05D18, temp11 / 2 + 1);
        func_08866464(&temp6, &temp5, temp2);
        func_089826E0_01(temp12->unk_2A10, &temp6);
        func_088226BC(temp2, D_08A05D28, temp11 + 1);
        func_08866464(&temp7, &temp5, temp2);
        func_089826E0_01(temp12->unk_2C10, &temp7);
        func_088226BC(temp2, D_08A05D34, temp11 + 1);
        func_08866464(&temp8, &temp5, temp2);
        func_089826E0_01(temp12->unk_2E10, &temp8);
        ++temp11;
        temp12->unk_2A10[0].unk_34 *= -1.0f;
        temp12->unk_2C10[0].unk_34 *= -1.0f;
        temp12->unk_2E10[0].unk_34 *= -1.0f;
        temp12 = (T *)((u8 *)temp12 + 0x40);
    } while (temp11 < 8);
    func_08865F78(&temp5, -1);

    s32 temp13 = 0;
    do {
        func_08865FE4(arg0->unk_1110[0], (*temp10)->unk_58);
        ((U *)arg0->unk_1110[0])->unk_14(0, 0);
        func_0897470C(arg0->unk_1110[0], 0.0f, 0.0f, 0.0f, 0.0f);
        ++temp13;
        arg0 = (T *)((u8 *)arg0 + 0x190);
    } while (temp13 < 8);
}
}
