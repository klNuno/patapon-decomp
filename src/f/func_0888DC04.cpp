#include "common.h"

extern "C" {
class A {
public:
    virtual s32 unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10_00();
    virtual void unk_14(s32);
};
class A2 {
public:
    u8 pad_00[0x28];
    virtual s32 unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
    virtual void unk_14(s32);
};
typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
} R;
typedef struct {
    u8 pad_00[4];
    R *unk_04;
    s32 unk_08;
} F;
typedef struct {
    u8 pad_00[0x224];
    F *unk_224;
} G;
class E : public A {
public:
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x9260 - 0x18];
    u8 unk_9260[0x28];
    u8 unk_9288[0x28];
    u8 unk_92B0;
    u8 pad_92B1[3];
    f32 unk_92B4;
};
typedef struct {
    u8 pad_00[0x66AC0];
    E unk_66AC0;
} H;
typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[0x1A];
    f32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[1];
} B_0888E370;
typedef B_0888E370 B;
typedef struct B_088901E4 {
    f32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C[5];
} B_088901E4;
typedef struct C_088901E4 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    B_088901E4 unk_0C;
    u8 pad_2C[0x14];
    s32 unk_40;
    u8 pad_44[0x10];
    s32 unk_54, unk_58, unk_5C, unk_60, unk_64, unk_68, unk_6C;
    u8 pad_70[0x20];
} C_088901E4;
typedef struct D_088901E4 D_088901E4;
typedef struct {
    u8 unk_00[0x3B0];
    u8 unk_3B0[0x80];
    D_088901E4 *unk_430;
} J;
typedef struct W {
    u8 pad_00[0x30];
    A2 unk_30;
    u8 pad_5C[0x1B0 - 0x5C];
    u8 unk_1B0[0x35C - 0x1B0];
    s32 unk_35C;
    u8 pad_360[0x14];
    H *unk_374;
    u8 unk_378[9];
    u8 unk_381;
    u8 pad_382[0x1E];
    s32 unk_3A0;
    u8 pad_3A4[0x2EC];
    u8 unk_690;
    u8 pad_691[3];
    s32 unk_694;
    u8 pad_698[0x18];
    G unk_6B0;
    u8 pad_8D8[0x18];
    u32 unk_8F0;
    u8 pad_8F4[0x6C];
    u8 *unk_960;
    u8 pad_964[0xC];
    J unk_970;
    u8 pad_DA4[0x71C];
    u8 unk_14C0[0xD];
    u8 unk_14CD;
    u8 unk_14CE;
    u8 pad_14CF[0x415];
    void *unk_18E4;
} W;
typedef W A_0888E370;
typedef W S_0888F5B8;
typedef W T;
typedef W C08960AE4;
typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N;

void func_08852C5C(void *, s32, s32);
s32 func_08870308(void *);
void func_08870F9C(void *);
void func_08870FC4(void *);
void func_08870FE8(void *);
void func_0887100C(void *);
void func_08871034(void *);
void func_08871058(void *);
void func_08871080(void *);
extern s32 func_0888D0FC(s32);
void func_0888DFF8(E *, f32);
s32 func_0888E050(void *, void *);
R *func_0888E0BC(void *);
s32 func_0888E118(char *arg0);
s32 func_0888E128(void *);
void func_0888E130(void *, s32);
s32 func_0888E218(void *, C_088901E4 *);
s32 func_0888E370(A_0888E370 *arg0, B_0888E370 *arg1);
s32 func_0888E488(T *arg0, B *arg1);
void func_0888F5B8(S_0888F5B8 *arg0);
s32 func_0888FF98(W *arg0, f32 arg2, s32 arg1);
void func_08890EFC(void *, void *, s32);
void func_088A786C(void *, s32);
void func_088A8600(void *, s32);
void func_088A865C(void *, B_088901E4 *);
void func_088A86A0(D_088901E4 *, s32, s32);
void func_088A87E8(void *, void *);
extern int func_088CE1EC(s32, char *);
s32 func_0893D3D8(void *);
typedef struct Obj_089421BC Obj_089421BC;
s32 func_089421BC(Obj_089421BC *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_08960AE4(C08960AE4 *arg0, s32 arg1);
void func_0896937C(s32 arg0, s32 arg1);
N *func_0896CE18(void *, char *, s32, s32);
s32 func_08976100(s32, char *);
void func_0897664C(s32, s32);
extern char D_089FA2D0[], D_089FA2F0[], D_089FA300[];

inline void func_0888DC04_00(volatile B_088901E4 *arg0) {
    arg0->unk_00 = 0.0f;
    arg0->unk_04 = 0;
    arg0->unk_0C[0] = 0;
    arg0->unk_0C[1] = 1;
    arg0->unk_0C[2] = 2;
    arg0->unk_0C[3] = 3;
    arg0->unk_0C[4] = 4;
}

void func_0888DC04(W *arg0, s32 arg1, B *arg2) {
    B_088901E4 temp;
    C_088901E4 temp2;
    u8 temp3[0x80];
    s32 temp4;
    N *temp5;
    J *temp6;
    u8 temp7;
    E *temp8;
    R *temp9;
    u8 *temp10;
    f32 temp11, temp12;
    G *temp13;
    s32 temp14;
    void *temp15;
    void *temp16;

    func_0888D0FC((s32)arg0);
    func_0896937C((s32)arg0, arg1);
    func_08960AE4(arg0, func_08976100(0, D_089FA2F0));
    temp4 = (arg0->unk_694 = func_08976100(0x1A, (char *)arg2->unk_60));
    temp5 = func_0896CE18(func_0896CE18((void *)temp4, D_089FA2D0, 0, 1), D_089FA300, 0, 1);
    func_08890EFC(arg0->unk_14C0, arg2, temp5->unk_108);
    arg0->unk_690 = 1;
    arg0->unk_3A0 = arg1;
    func_0888E370(arg0, (B *)arg1);
    func_0888F5B8(arg0);
    func_088A786C(&arg0->unk_970, 0);
    func_0888E488(arg0, arg2);
    temp6 = &arg0->unk_970;
    if (temp6->unk_430 == NULL) {
        func_0888DC04_00(&temp);
        f32 temp18 = arg2->unk_50;
        B_088901E4 *temp19 = &temp2.unk_0C;
        temp19->unk_00 = 0.0f;
        temp19->unk_04 = 0;
        temp19->unk_0C[0] = 0;
        temp19->unk_0C[1] = 1;
        temp19->unk_0C[2] = 2;
        temp19->unk_0C[3] = 3;
        temp19->unk_0C[4] = 4;
        temp.unk_00 = temp18;
        temp2.unk_6C = -1;
        temp2.unk_40 = 0;
        temp2.unk_54 = 0;
        temp2.unk_58 = 0;
        temp2.unk_5C = 0;
        temp2.unk_60 = 0;
        temp2.unk_64 = 0;
        temp2.unk_68 = 0;
        func_088A8600(&temp2, 0);
        func_088A865C(&temp2, &temp);
        func_0888E130(temp6->unk_3B0, func_0888E218(temp3, &temp2));
        if (func_0888E128(temp6->unk_3B0) != 0) {
            func_088A87E8((void *)func_0888E128(temp6->unk_3B0), temp6);
        }
        func_088A86A0(temp6->unk_430, temp2.unk_04, 1);
    }
    temp7 = arg0->unk_14CD;
    func_0888FF98(arg0, arg2->unk_50, 0);
    arg0->unk_14CD = temp7;
    arg0->unk_14CE = arg2->unk_34 != 0;
    temp8 = &arg0->unk_374->unk_66AC0;
    temp14 = temp8->unk_0C();
    if (temp14 >= temp8->unk_10_00()) {
        temp10 = NULL;
    } else if (func_0888E118((char *)temp8->unk_9288) != 0) {
        temp10 = NULL;
    } else {
        temp9 = func_0888E0BC(temp8->unk_9288);
        if (temp9 == NULL) {
            temp10 = NULL;
        } else if (!(u8)func_0888E050(temp8->unk_9260, temp9)) {
            temp10 = NULL;
        } else {
            temp8->unk_14 = func_08870308(temp8->unk_9260);
            temp11 = (f32)temp8->unk_14 / (f32)temp8->unk_10;
            if (temp8->unk_92B0 != 0) {
                temp12 = temp8->unk_92B4;
                if (temp11 > temp12) {
                    func_0888DFF8(temp8, 0.05f + temp12);
                }
            }
            temp10 = temp9->unk_08;
        }
    }
    if ((arg0->unk_960 = temp10) != NULL) {
        func_08871080(temp10);
        func_08871058(temp10 + 0x20);
        func_08871034(temp10 + 0x40);
        func_0887100C(temp10 + 0x80);
        func_08870FE8(temp10 + 0xA0);
        func_08870FC4(temp10 + 0xC0);
        func_08870F9C(temp10 + 0xE0);
    }
    temp10 = arg0->unk_960;
    if (temp10 != NULL) {
        temp13 = &arg0->unk_6B0;
        if (arg0->unk_8F0 < 2U) {
            temp14 = 0;
        } else {
            F *temp17 = temp13->unk_224;
            if (temp17 != NULL) {
                temp17 = (F *)temp17->unk_04;
            }
            temp14 = temp17->unk_08;
        }
        func_0897664C(temp14, (s32)temp10);
    }
    temp14 = func_0893D3D8(arg0->unk_378);
    temp15 = arg0;
    if (arg0 != NULL) {
        temp15 = &arg0->unk_30;
    }
    func_088CE1EC(temp14, (char *)temp15);
    arg0->unk_30.unk_14(arg2->unk_30);
    arg0->unk_381 = 1;
    arg0->unk_35C = func_089421BC((Obj_089421BC *)arg0->unk_1B0, 1, -1, 0, 0, 0, 0);
    temp16 = arg0->unk_18E4;
    if (temp16 != NULL) {
        func_08852C5C(temp16, 0, 0);
    }
}
}
