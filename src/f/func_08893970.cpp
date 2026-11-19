#include "common.h"

extern "C" {

struct T_0898F890 {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};
struct V {
    f32 unk_00, unk_04, unk_08, unk_0C;
};
struct P {
    virtual void unk_08();
    virtual s32 unk_0C();
    virtual s32 unk_10();
};
struct W : P {
    u8 pad_04[0xC];
    s32 unk_10, unk_14;
    u8 pad_18[0x9248];
    u8 unk_9260[0x28];
    u8 unk_9288[0x28];
    u8 unk_92B0;
    u8 pad_92B1[3];
    f32 unk_92B4;
};
struct X {
    u8 pad_00[0x66AC0];
    W unk_66AC0;
};
struct A {
    u8 pad_00[0x30];
    T_0898F890 unk_30;
    u8 pad_5C[0x325];
    u8 unk_381;
    u8 pad_382[0x8F5E];
    s32 unk_92E0, unk_92E4, unk_92E8;
    u8 pad_92EC[0x14];
    V unk_9300, unk_9310;
    u8 pad_9320[0x10];
    s32 unk_9330;
    u8 pad_9334[0x1C];
    X *unk_9350;
    u8 pad_9354[0x55C];
    u8 *unk_98B0;
};
struct R_0889DB24 {
    u8 pad_00[0x24];
    s32 unk_24;
    f32 unk_28;
    u8 pad_2C[0x14];
    f32 unk_40;
};
struct B {
    u8 pad_00[0x60];
    char unk_60[0x20];
    s32 unk_80;
    u8 pad_84[0x104];
};
struct C {
    u8 pad_00[4];
    C *unk_04;
    s32 unk_08;
};
struct E {
    u8 pad_00[0x224];
    C *unk_224;
    u8 pad_228[0x18];
    u32 unk_240;
};
struct L {
    u8 pad_00[0x25C];
    s32 unk_25C;
};
struct M {
    u8 pad_00[0x14A0];
    L *unk_14A0;
};
struct N {
    u8 pad_00[0x42820];
    M *unk_42820;
};
struct S_0889DB24 {
    u8 pad_00[0x1C];
    s32 unk_1C;
};
struct J {
    u8 pad_00[8];
    u8 *unk_08;
};

s32 func_08822AD0(char *, char *);
R_0889DB24 *func_0885AB7C(s32, s32, s32);
s32 func_08870308(void *);
void func_08870F9C(void *);
void func_08870FC4(void *);
void func_08870FE8(void *);
void func_0887100C(void *);
void func_08871034(void *);
void func_08871058(void *);
void func_08871080(void *);
S_0889DB24 *func_08877444(u8 *);
s32 func_0887744C(u8 *, char *, s32);
void func_0888DFF8(f32, W *);
s32 func_0888E050(void *, J *);
J *func_0888E0BC(void *);
s32 func_0888E118(void *);
extern s32 func_08893374(s32);
void func_08893E38(A *, B *);
void func_08894234(A *);
void func_08894364(f32, A *, s32);
void func_088A4D6C(void *, s32, void *, s32);
void func_088CE1EC(s32, T_0898F890 *);
s32 func_0893D3D8(void *);
void func_08960AE4(A *, s32);
void func_0896937C(A *, s32);
s32 func_08976100(s32, char *);
void func_0897664C(s32, s32);

extern char D_089FA370[], D_089FA394[], D_089FA3A4[];
extern u8 *D_08AD1E28[];
extern u8 *D_08AD1F14[];

struct K {};

inline void *func_08893970_0(s32 arg0, const K &)
{
    return arg0 == 0 ? (void *)0 : (void *)1;
}

void func_08893970(A *arg0, s32 arg1, s32 arg2)
{
    J *temp8;
    s32 temp15;
    T_0898F890 *temp16;
    R_0889DB24 *temp0;
    B *temp1;
    s32 temp2, temp3;
    L *temp4;
    R_0889DB24 *temp5;
    E *temp6;
    W *temp7;
    u8 *temp10;
    s32 temp11;
    f32 temp12, temp13;
    C *temp14;

    func_08893374((s32)arg0);
    func_0896937C(arg0, 0);
    func_08960AE4(arg0, func_08976100(0, D_089FA394));
    arg0->unk_9330 = arg1;
    temp0 = func_0885AB7C(arg1, 0, 0);
    temp1 = NULL;
    if (temp0->unk_24 > 0) {
        temp1 = (B *)func_0885AB7C(arg1, 1, 0);
    }
    if (temp0 != NULL) {
        arg0->unk_92E4 = arg2;
        arg0->unk_92E0 = (s32)func_08893970_0(arg2, K());
        arg0->unk_92E8 = (s32)func_08893970_0(arg2, K());
    }
    arg0->unk_9300.unk_00 = temp0->unk_28;
    arg0->unk_9300.unk_04 = 0.0f;
    arg0->unk_9300.unk_08 = 0.0f;
    arg0->unk_9300.unk_0C = 1.0f;
    arg0->unk_9310.unk_00 = *(volatile f32 *)&arg0->unk_9300.unk_00;
    arg0->unk_9310.unk_04 = *(volatile f32 *)&arg0->unk_9300.unk_04;
    arg0->unk_9310.unk_08 = *(volatile f32 *)&arg0->unk_9300.unk_08;
    arg0->unk_9310.unk_0C = *(volatile f32 *)&arg0->unk_9300.unk_0C;
    temp2 = 0;
    if (temp0->unk_24 > 0) {
        do {
            if (temp1->unk_80 != 0) {
                func_08822AD0(temp1->unk_60, D_089FA3A4);
            }
            if (temp1->unk_80 != 0) {
                func_08893E38(arg0, temp1);
            }
            temp2++;
            temp1++;
        } while (temp2 < temp0->unk_24);
    }
    func_088A4D6C((u8 *)arg0 + 0x7810, arg1, &temp0->unk_40, 0);
    func_08894234(arg0);
    if (arg2 == 0) {
        temp3 = func_0893D3D8((u8 *)arg0 + 0x378);
        temp16 = (T_0898F890 *)arg0;
        if (temp16 != NULL) {
            temp16 = &arg0->unk_30;
        }
        func_088CE1EC(temp3, temp16);
        arg0->unk_30.unk_14(0x1A);
    }
    if (arg0->unk_92E4 == 0) {
        temp4 = ((N *)(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL))->unk_42820->unk_14A0;
        if (*(volatile s32 *)&temp4->unk_25C >= 0) {
            temp5 = func_0885AB7C(func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_089FA370, 0xF), 0, temp4->unk_25C);
            if (temp5 != NULL) {
                temp6 = (E *)((u8 *)arg0 + 0x1608 + 0x7FF8);
                if (temp6->unk_240 == 0) {
                    temp11 = 0;
                } else {
                    temp11 = temp6->unk_224->unk_08;
                }
                func_0897664C(temp11, (s32)&temp5->unk_28);
            }
        }
    }
    temp7 = &arg0->unk_9350->unk_66AC0;
    temp15 = temp7->unk_0C();
    if (temp15 >= ((P *)temp7)->unk_10()) {
        temp7 = NULL;
    } else if (func_0888E118(temp7->unk_9288) != 0) {
        temp7 = NULL;
    } else {
        temp8 = func_0888E0BC(temp7->unk_9288);
        if (temp8 == NULL) {
            temp7 = NULL;
        } else if ((u8)func_0888E050(temp7->unk_9260, temp8) == 0) {
            temp7 = NULL;
        } else {
            temp7->unk_14 = func_08870308(temp7->unk_9260);
            temp12 = (f32)temp7->unk_14 / (f32)temp7->unk_10;
            if (temp7->unk_92B0 != 0) {
                temp13 = temp7->unk_92B4;
                if (temp12 > temp13) {
                    func_0888DFF8(0.05f + temp13, temp7);
                }
            }
            temp7 = (W *)temp8->unk_08;
        }
    }
    arg0->unk_98B0 = (u8 *)temp7;
    if (temp7 != NULL) {
        func_08871080((u8 *)temp7);
        func_08871058((u8 *)temp7 + 0x20);
        func_08871034((u8 *)temp7 + 0x40);
        func_0887100C((u8 *)temp7 + 0x80);
        func_08870FE8((u8 *)temp7 + 0xA0);
        func_08870FC4((u8 *)temp7 + 0xC0);
        func_08870F9C((u8 *)temp7 + 0xE0);
    }
    temp10 = arg0->unk_98B0;
    if (temp10 != NULL) {
        temp6 = (E *)((u8 *)arg0 + 0x1608 + 0x7FF8);
        if (temp6->unk_240 <= 1U) {
            temp11 = 0;
        } else {
            temp14 = temp6->unk_224;
            if (temp14 != NULL) {
                temp14 = temp14->unk_04;
            }
            temp11 = temp14->unk_08;
        }
        func_0897664C(temp11, (s32)temp10);
    }
    func_08894364(func_0885AB7C(func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_1C, 0, 0)->unk_40, arg0, -1);
    arg0->unk_381 = 1;
}

}
