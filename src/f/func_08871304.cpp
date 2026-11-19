#include "common.h"

extern "C" {
struct T_00 {
    virtual void unk_08(s16);
};
struct T_08 {
    u8 pad_00[8];
    virtual void unk_08(s16);
};
struct T_100 {
    u8 pad_00[0x100];
    virtual void unk_08(s16);
};
struct T_10 {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
    virtual void unk_10(void *);
};
struct T_20 {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};
struct T_24 {
    s32 unk_00;
    T_10 *unk_04;
    void *unk_08;
    s32 *unk_0C;
};
struct T_50 {
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
};
struct T_60 {
    u8 pad_00[0x48];
    s32 unk_48;
};
struct S {
    u8 pad_00[0x28];
    void *unk_28;
};

struct T_28_00 {
    T_00 *unk_00;
    T_10 *unk_04;
};

struct T_28_08 {
    T_08 *unk_00;
    T_10 *unk_04;
};

struct T_28_100 {
    T_100 *unk_00;
    T_10 *unk_04;
};

struct T_54 : T_50 {
    u8 pad_54[0xC];
    T_60 unk_60;
    u8 pad_AC[0x4];
    u8 unk_B0;
    u8 pad_B1[0x146F];
    u8 unk_1520;
    u8 pad_1521[0x145F];
    u8 unk_2980;
    u8 pad_2981[0x2219F];
    u8 unk_24B20;
    u8 pad_24B21[0x8F];
    u8 unk_24BB0;
    u8 pad_24BB1[0x9F];
    T_20 unk_24C50;
    u8 pad_24C54[0xA4C];
    u8 unk_256A0;
    u8 pad_256A1[0x5C1F];
    u8 unk_2B2C0;
    u8 pad_2B2C1[0x5C1F];
    u8 unk_30EE0;
    u8 pad_30EE1[0x5C1F];
    T_28_08 unk_36B00;
    T_28_100 unk_36B08;
    T_28_08 unk_36B10;
    T_28_00 unk_36B18;
    u8 unk_36B20;
    u8 pad_36B21[0x2B];
    T_28_08 unk_36B4C;
    u8 pad_36B54[0xC];
    u8 unk_36B60;
    u8 pad_36B61[0x810F];
    u8 unk_3EC70;
    u8 pad_3EC71[0x452F];
    u8 unk_431A0;
    u8 pad_431A1[0xAF];
    u8 unk_43250;
    u8 pad_43251[0x848B];
    u8 unk_4B6DC;
    u8 pad_4B6DD[0x93];
    u8 unk_4B770;
    u8 pad_4B771[0x848B];
    void * unk_53BFC;
    u8 unk_53C00;
    u8 pad_53C01[0xBF];
    u8 unk_53CC0;
    u8 pad_53CC1[0x175F];
    T_24 unk_55420;
    u8 pad_55430[0x4];
    u8 unk_55434;
    u8 pad_55435[0xB];
    u8 unk_55440;
    u8 pad_55441[0x4F];
    u8 unk_55490;
    u8 pad_55491[0x7];
    u8 unk_55498;
    u8 pad_55499[0x57];
    u8 unk_554F0;
    u8 pad_554F1[0x27];
    void * unk_55518;
    u8 pad_5551C[0x4];
    u8 unk_55520;
    u8 pad_55521[0x43];
    void * unk_55564;
    u8 pad_55568[0x8];
    u8 unk_55570;
    u8 pad_55571[0x27];
    u8 unk_55598;
    u8 pad_55599[0x10A43];
    T_28_08 unk_65FDC;
    S unk_65FE4;
    u8 pad_66010[0xAB0];
    u8 unk_66AC0;
    u8 pad_66AC1[0x821F];
    u8 unk_6ECE0;
    u8 pad_6ECE1[0x103F];
    u8 unk_6FD20;
    u8 pad_6FD21[0x27];
    u8 unk_6FD48;
};

extern u8 D_08A45028[];
extern u8 D_08A45094[];
extern u8 D_08A450AC[];
extern u8 D_08A450C4[];
extern u8 D_08A450DC[];
extern u8 D_08A4506C[];
extern u8 D_08A48024[];
extern u8 D_08A44F44[];
void func_0885BDA0(void *, s32);
void func_0885C534(void *, s32);
void func_08866620(void *, s16);
void func_0886B11C(void *, s32);
void func_08870310(void *, s32);
void func_08870834(void *, s32);
void func_08870DBC(void *, s32);
void func_08871248(void *, s32);
void func_088821B0(void *, s32);
void func_088BC5CC(void *, s32);
void func_088CE04C(void *, s32);
void func_088CE530(void *, s32);
void func_089136C0(void *, s32);
void func_08929B7C(void *, s32);
void func_08931AD0(void *, s32);
void func_08934358(void *, s32);
void func_0894597C(void *, s32);
void func_0894DBE0(void *, s32);
void func_089553C0(void *, s32);
void func_0896D44C(void *, s32);
void func_08970194(void *, s32);
void func_089708C8(void *, s32);
void func_089712C8(void *, s32);
void func_089AD30C(void *, s32);
void func_089D0D04(void *, s32);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_0886F084(T_54 *, s32);
void func_08870A54(void *);
void func_088719CC(void *);
void func_088746C8(s32, s32);
void func_0893B9F8(S *, s32);

T_54 *func_08871304(T_54 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x50] = D_08A45028;
        arg0->unk_20();
        u8 *temp = &arg0->unk_66AC0;
        if (temp != NULL) {
            *(void **)&arg0->unk_66AC0 = D_08A45094;
            func_08870A54(temp);
            func_08870310(&arg0->unk_6FD48, -1);
            func_08870310(&arg0->unk_6FD20, -1);
            func_08804000(&arg0->unk_6ECE0, func_08870DBC, 0x20, 0x82);
            func_0885BDA0(&arg0->unk_66AC0, 0);
        }
        S *temp1 = &arg0->unk_65FE4;
        if (temp1 != NULL) {
            arg0->unk_65FE4.unk_28 = D_08A450AC;
            func_0893B9F8(temp1, 0);
        }
        if (&arg0->unk_65FDC != NULL) {
            if (arg0->unk_65FDC.unk_00 != NULL) {
                arg0->unk_65FDC.unk_00->unk_08(-1);
                arg0->unk_65FDC.unk_04->unk_10(arg0->unk_65FDC.unk_00);
            }
        }
        func_089D0D04(&arg0->unk_55598, -1);
        func_089AD30C(&arg0->unk_55570, -1);
        if (&arg0->unk_554F0 != NULL) {
            arg0->unk_55518 = D_08A450C4;
            arg0->unk_55564 = D_08A450DC;
            func_089136C0(&arg0->unk_55520, 0);
            func_088CE530(&arg0->unk_554F0, 0);
        }
        func_089712C8(&arg0->unk_55498, -1);
        func_089708C8(&arg0->unk_55490, -1);
        func_0896D44C(&arg0->unk_55440, -1);
        func_08970194(&arg0->unk_55434, -1);
        T_24 *temp2 = &arg0->unk_55420;
        if (temp2 != NULL) {
            if ((u32)temp2 != 0) {
                void **temp3 = &arg0->unk_55420.unk_08;
                if (*temp3 != NULL) {
                    s32 **temp4 = &arg0->unk_55420.unk_0C;
                    --**temp4;
                    s32 *temp5 = arg0->unk_55420.unk_0C;
                    if ((temp5 != NULL ? *temp5 : 0) == 0) {
                        arg0->unk_55420.unk_04->unk_0C(*temp3, *temp4, arg0->unk_55420.unk_00);
                        func_088746C8((s32)*temp3, arg0->unk_55420.unk_00);
                    }
                }
            }
        }
        func_08929B7C(&arg0->unk_53CC0, -1);
        func_08804000(&arg0->unk_53C00, func_08931AD0, 0x60, 2);
        u8 *temp6 = &arg0->unk_43250;
        if (temp6 != NULL) {
            arg0->unk_53BFC = D_08A4506C;
            func_088719CC(temp6);
            func_08871248(&arg0->unk_4B770, -1);
            func_08870834(&arg0->unk_4B6DC, -1);
            func_08871248(&arg0->unk_43250, -1);
        }
        func_0894597C(&arg0->unk_431A0, -1);
        func_088821B0(&arg0->unk_3EC70, -1);
        func_088BC5CC(&arg0->unk_36B60, -1);
        if (&arg0->unk_36B4C != NULL) {
            if (arg0->unk_36B4C.unk_00 != NULL) {
                arg0->unk_36B4C.unk_00->unk_08(-1);
                arg0->unk_36B4C.unk_04->unk_10(arg0->unk_36B4C.unk_00);
            }
        }
        func_088CE04C(&arg0->unk_36B20, -1);
        if (&arg0->unk_36B18 != NULL) {
            if (arg0->unk_36B18.unk_00 != NULL) {
                arg0->unk_36B18.unk_00->unk_08(-1);
                arg0->unk_36B18.unk_04->unk_10(arg0->unk_36B18.unk_00);
            }
        }
        if (&arg0->unk_36B10 != NULL) {
            if (arg0->unk_36B10.unk_00 != NULL) {
                arg0->unk_36B10.unk_00->unk_08(-1);
                arg0->unk_36B10.unk_04->unk_10(arg0->unk_36B10.unk_00);
            }
        }
        if (&arg0->unk_36B08 != NULL) {
            if (arg0->unk_36B08.unk_00 != NULL) {
                arg0->unk_36B08.unk_00->unk_08(-1);
                arg0->unk_36B08.unk_04->unk_10(arg0->unk_36B08.unk_00);
            }
        }
        if (&arg0->unk_36B00 != NULL) {
            if (arg0->unk_36B00.unk_00 != NULL) {
                arg0->unk_36B00.unk_00->unk_08(-1);
                arg0->unk_36B00.unk_04->unk_10(arg0->unk_36B00.unk_00);
            }
        }
        func_08866620(&arg0->unk_30EE0, -1);
        func_08866620(&arg0->unk_2B2C0, -1);
        func_08866620(&arg0->unk_256A0, -1);
        T_20 *temp7 = &arg0->unk_24C50;
        if (temp7 != NULL) {
            *(void **)&arg0->unk_24C50 = D_08A48024;
            temp7->unk_14();
            func_0886B11C(&arg0->unk_24C50, 0);
        }
        func_08934358(&arg0->unk_24BB0, -1);
        func_0894DBE0(&arg0->unk_24B20, -1);
        func_089553C0(&arg0->unk_2980, -1);
        func_0885C534(&arg0->unk_1520, -1);
        if (arg0 != NULL) {
            *(void **)&arg0->pad_00[0x50] = D_08A44F44;
            func_0885C534(&arg0->unk_B0, -1);
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_48 = 0;
            }
            func_0886F084(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
