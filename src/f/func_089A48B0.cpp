#include "common.h"

extern "C" {

struct P {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, const void *, u16 *);
    virtual void unk_18(s32);
};
struct T : P {
    u8 pad_04[0x6C];
    s32 unk_70;
};
struct A {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0xE50];
    T unk_1EC0;
    u8 pad_1F34[0x1ACC];
    T unk_3A00;
    u8 pad_3A74[0x65C];
    T unk_40D0;
    u8 pad_4144[0x65C];
    T unk_47A0;
    u8 pad_4814[0x7EC];
    s32 unk_5000;
    u8 pad_5004[0x1484];
    u8 unk_6488[0x230];
    u32 *unk_66B8;
    s32 unk_66BC;
    u8 pad_66C0[0x35024];
    f32 unk_3B6E4;
};
struct E {
    u8 pad_00[0x3C];
    u32 unk_3C, unk_40;
    u8 pad_44[0xA];
    s16 unk_4E;
};
struct T089B8764_3 {
    u8 pad_00[4];
    s16 unk_04, unk_06;
};
struct E_08994704;

void func_088226BC(char *, char *, ...);
void func_08822B3C(char *, char *);
void func_08826830(u16 *, void *);
void func_0882687C(u16 *, s32);
T089B8764_3 *func_0885AB7C(s32, s32, s32);
s32 func_0887744C(u8 *, char *, s32);
void func_088AF2FC(f32 *, T *, u16 *);
void func_088B3120(u8 *, s32, char *);
s32 func_08998080(s32, s32);
u32 func_0899A900(s32);
s32 func_0899A908(s32, s32);
E_08994704 *func_0899E16C(s32, s32);
E *func_0899E19C(s32);
s32 func_0899E1A4(s32, s32);
void func_089A1900(void *, A *);
void func_089A4DC0(s32, s32, s32, E_08994704 *);
s32 func_089A544C(A *);
s32 func_089A5490(A *);
s32 func_089A8B5C(u8 *, s32, s32);

extern u8 D_089EF680[], D_089EF690[];
extern s32 D_089EF868[];
extern u32 D_08A0725C[], D_08A07260[];
extern char D_08A07264[], D_08A07270[], D_08A07274[], D_08A07288[];
extern u8 *D_08AD1F14[];

void func_089A48B0(A *arg0, s32 arg1)
{
    u16 temp0[0x40];
    u8 temp1[0x40];
    char temp2[0x40];
    u32 temp3, temp4;
    s32 temp5;
    f32 temp6[3];
    s32 temp7;
    u8 *temp8;
    E *temp9;
    u32 *temp10, *temp11;
    s16 temp12;
    T089B8764_3 *temp13;
    u32 **temp14;
    u32 temp15;
    u32 temp18;
    s32 *temp16, *temp17;

    temp7 = func_0899A908(func_08998080(arg0->unk_1064, arg0->unk_106C), arg1);
    func_089A4DC0((s32)arg0, arg1, 0, func_0899E16C(temp7, 0));
    func_089A4DC0((s32)arg0, arg1, 1, func_0899E16C(temp7, 1));
    func_089A4DC0((s32)arg0, arg1, 2, func_0899E16C(temp7, 2));
    func_089A1900(arg0->unk_6488, arg0);
    temp8 = (D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL) + 0x2460;
    func_088226BC(temp2, D_08A07264, arg1 + 1, func_0899A900(func_089A5490(arg0)));
    func_088B3120(temp1, 0x20, temp2);
    func_0882687C(temp0, func_089A8B5C(temp8, 2, 0x15));
    func_08826830(temp0, temp1);
    arg0->unk_1EC0.unk_70 &= ~0x100;
    arg0->unk_1EC0.unk_14(0.0f, 0.0f, 0, D_089EF690, temp0);
    arg0->unk_1EC0.unk_18(0xA0);
    temp9 = func_0899E19C(temp7);
    temp3 = temp9->unk_3C;
    temp10 = D_08A0725C[0] < temp3 ? D_08A0725C : &temp3;
    func_088226BC(temp2, D_08A07270, *temp10);
    func_088B3120(temp1, 0x20, temp2);
    func_0882687C(temp0, func_089A8B5C(temp8, 2, 0x16));
    func_08826830(temp0, temp1);
    arg0->unk_3A00.unk_70 &= ~0x100;
    arg0->unk_3A00.unk_14(0.0f, 0.0f, 0, D_089EF680, temp0);
    arg0->unk_3A00.unk_18(0xA0);
    func_088AF2FC(temp6, &arg0->unk_3A00, temp0);
    arg0->unk_3B6E4 = temp6[0];
    temp4 = temp9->unk_40;
    temp10 = D_08A07260[0] < temp4 ? D_08A07260 : &temp4;
    func_088226BC(temp2, D_08A07270, *temp10);
    func_088B3120(temp1, 0x20, temp2);
    func_0882687C(temp0, func_089A8B5C(temp8, 2, 0x17));
    func_08826830(temp0, temp1);
    arg0->unk_40D0.unk_70 &= ~0x100;
    arg0->unk_40D0.unk_14(0.0f, 0.0f, 0, D_089EF680, temp0);
    arg0->unk_40D0.unk_18(0xA0);
    temp2[0] = 0;
    func_088B3120((u8 *)temp0, 0x40, temp2);
    if (*(volatile s16 *)&temp9->unk_4E != -1) {
        temp13 = func_0885AB7C(func_0887744C(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL, D_08A07274, 1), 0, temp9->unk_4E);
        temp12 = temp13->unk_04;
        if (temp12 != -1) {
            func_0882687C(temp0, func_089A8B5C(temp8, 1, temp12));
            func_08822B3C(temp2, D_08A07288);
            func_088B3120(temp1, 0x40, temp2);
            func_08826830(temp0, temp1);
            func_08826830(temp0, (void *)func_089A8B5C(temp8, 1, temp13->unk_06));
        }
    }
    arg0->unk_47A0.unk_70 &= ~0x100;
    arg0->unk_47A0.unk_14(0.0f, 0.0f, 0, D_089EF680, temp0);
    arg0->unk_47A0.unk_18(0xA0);
    temp15 = arg0->unk_66BC;
    temp11 = arg0->unk_66B8;
    temp14 = &arg0->unk_66B8;
    if ((u32)temp11 != (u32)(temp11 + temp15)) {
        temp10 = *(u32 *volatile *)temp14 + temp15;
        do {
            temp11++;
        } while (temp11 != temp10);
    }
    arg0->unk_66BC = 0;
    temp18 = 0;
    temp16 = D_089EF868;
    do {
        if ((u8)func_0899E1A4(func_089A544C(arg0), *temp16) != 0) {
            temp11 = arg0->unk_66B8 + arg0->unk_66BC;
            if (temp11 != NULL) {
                *temp11 = temp18;
            }
            arg0->unk_66BC++;
        }
        temp18++;
        temp16++;
    } while (temp18 < 3);
    temp5 = arg0->unk_66BC - 1;
    temp17 = temp5 < arg0->unk_5000 ? &temp5 : &arg0->unk_5000;
    arg0->unk_5000 = *temp17;
}

}
