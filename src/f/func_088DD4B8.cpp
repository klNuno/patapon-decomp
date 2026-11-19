#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10(u32);
};

struct W {
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(u32);
};

struct X {
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
    virtual void unk_38(u32);
};

struct T088DE1D4;
struct T088DE64C;
struct S_088DF100;

struct H {
    u8 pad_00[0x8494];
    W *unk_8494;
};

struct N {
    N *unk_00;
    u8 pad_04[8];
    H *unk_0C;
};

struct I {
    N *unk_00;

    s32 eq(N *arg0) { return unk_00 == arg0; }
    bool ne(N *arg0) { return !(bool)eq(arg0); }
};

struct S {
    u8 pad_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[7];
    s32 unk_10;
    u8 pad_14[0xC];
    X *unk_20;
    u8 pad_24[8];
    s32 unk_2C;
    char unk_30[0x50];
    u8 unk_80[0xFC0];
    u8 unk_1040[0x8EC];
    V unk_192C;
    u8 pad_1930[0x4B0];
    u8 unk_1DE0[0x26710];
    u8 unk_284F0[0x120];
    u8 unk_28610;
    u8 pad_28611[0xF];
    char unk_28620[0x510];
    u8 unk_28B30[0x120];
    u8 unk_28C50;
    u8 pad_28C51[0x576F];
    u8 unk_2E3C0[0x22330];
    u8 unk_506F0[0x36B90];
    u8 unk_87280[0x16370];
    u8 unk_9D5F0[0x1058];
    u8 unk_9E648[0x1058];
    u8 unk_9F6A0[0x1058];
    u8 unk_A06F8[0x1070];
    u8 unk_A1768[0x10A48];
    u8 unk_B21B0;
    u8 pad_B21B1[0x1297BC - 0xB21B1];
    W *unk_1297BC;
    u8 pad_1297C0[0x1C7504 - 0x1297C0];
    N unk_1C7504;
    u8 pad_1C7514[0x1C];
    u8 unk_1C7530[1];
};

typedef struct {
    u8 pad_00[0x321C8];
    u64 unk_321C8;
} S_0893CDA4_C;

typedef struct {
    u8 pad_00[0x1498];
    S_0893CDA4_C *unk_1498;
} S_0893CDA4_B;

typedef struct {
    u8 pad_00[0x42820];
    S_0893CDA4_B *unk_42820;
} S_0893CDA4_A;

struct T_08939978;

extern S_0893CDA4_A *D_08AD1E28[];
s32 func_088C6494(void *);
extern int func_08864FC0(s32);
void func_088D8DE0(s32 *, u8 *);
void func_088D8DD8(s32 *, u8 *);
f32 *func_088D943C(f32 *arg0, f32 *arg1);
void func_088DDABC(char *arg0, char **arg1, s32 arg2);
s32 func_088DDB30(s32 *, s32 *);
void func_088DDB48(s32 *, u8 *, s32);
void func_088DDBD8(s32 *);
void func_088DDBEC(u8 *, void *, s32);
void **func_088DDC80(s32 *);
s32 func_088E63DC(s32);
void func_088DE130(S *, s32);
void func_088DE1D4(T088DE1D4 *arg0, s32 arg1);
void func_088DE508(S *, s32);
void func_088DE5C8(S *, s32);
void func_088DE64C(T088DE64C *arg0, s32 arg1);
void func_088DF100(S_088DF100 *arg0, s32 arg1);
void func_08913708(char *, s32);
void func_089261F8(void *, s32);
void func_08931F2C(u8 *, u32);
void func_08939978(T_08939978 *, u32);
void func_08956414(void *, s32, u32);
void func_089AE498(void *, u32);
void func_089C6864(void *, u32);
void func_089D1B50(u8 *, s32);

s32 func_088DD4B8(S *arg0, u32 arg1) {
    struct {
        s32 unk_00;
        u8 pad_04[0xC];
    } temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;
    s32 temp9;
    s32 temp10;
    s32 temp11;
    u8 temp12;
    N *temp13;
    I temp14;
    s32 temp15;

    func_08956414(arg0->unk_2E3C0, arg0->unk_2C, arg1);
    func_08864FC0(func_088C6494(arg0->unk_506F0));
    if (arg0->unk_04 == 0 || arg0->unk_04 == 1 || arg0->unk_04 == 4) {
        func_089AE498(arg0->unk_87280, arg1);
    }
    arg0->unk_192C.unk_10(arg1);
    temp12 = arg0->unk_28610;
    if (*(volatile u8 *)&arg0->unk_28610 == 0) {
        func_088D8DE0(&temp0.unk_00, arg0->unk_284F0);
        func_088D8DD8(&temp1, arg0->unk_284F0);
        while (func_088DDB30(&temp0.unk_00, &temp1)) {
            if (!((V *)*func_088DDC80(&temp0.unk_00))->unk_10(arg1)) {
                func_088E63DC((s32)*func_088DDC80(&temp0.unk_00));
                func_088DDBEC(arg0->unk_1DE0, *func_088DDC80(&temp0.unk_00), 0);
                func_088D943C((f32 *)&temp2, (f32 *)&temp0.unk_00);
                func_088DDBD8(&temp0.unk_00);
                func_088DDB48(&temp3, arg0->unk_284F0, temp2);
            } else {
                func_088DDBD8(&temp0.unk_00);
            }
        }
    }
    if (temp12 != *(volatile u8 *)&arg0->unk_28610) {
        func_088D8DE0(&temp4, arg0->unk_284F0);
        func_088D8DD8(&temp5, arg0->unk_284F0);
        while (func_088DDB30(&temp4, &temp5)) {
            if (!((V *)*func_088DDC80(&temp4))->unk_10(arg1)) {
                func_088E63DC((s32)*func_088DDC80(&temp4));
                func_088DDBEC(arg0->unk_1DE0, *func_088DDC80(&temp4), 0);
                func_088D943C((f32 *)&temp6, (f32 *)&temp4);
                func_088DDBD8(&temp4);
                func_088DDB48(&temp7, arg0->unk_284F0, temp6);
            } else {
                func_088DDBD8(&temp4);
            }
        }
    }
    if (arg0->unk_28C50 == 0) {
        func_088D8DE0(&temp8, arg0->unk_28B30);
        func_088D8DD8(&temp9, arg0->unk_28B30);
        while (func_088DDB30(&temp8, &temp9)) {
            if (!((V *)*func_088DDC80(&temp8))->unk_10(arg1)) {
                func_088E63DC((s32)*func_088DDC80(&temp8));
                func_088DDABC(arg0->unk_28620, (char **)*func_088DDC80(&temp8), 0);
                func_088D943C((f32 *)&temp10, (f32 *)&temp8);
                func_088DDBD8(&temp8);
                func_088DDB48(&temp11, arg0->unk_28B30, temp10);
            } else {
                func_088DDBD8(&temp8);
            }
        }
    }

    arg0->unk_1297BC->unk_14(arg1);
    temp14.unk_00 = arg0->unk_1C7504.unk_00;
    temp13 = &arg0->unk_1C7504;
    if (temp14.ne(temp13)) {
        do {
            temp14.unk_00->unk_0C->unk_8494->unk_14(arg1);
            temp14.unk_00 = temp14.unk_00->unk_00;
        } while (temp14.ne(temp13));
    }
    temp15 = arg0->unk_04;
    do {
        switch (*(volatile s32 *)&arg0->unk_04) {
        case 0:
            func_088DE1D4((T088DE1D4 *)arg0, arg1);
            break;
        case 1:
            func_088DE130(arg0, arg1);
            break;
        case 2:
            func_088DE508(arg0, arg1);
            break;
        case 3:
            func_088DE5C8(arg0, arg1);
            break;
        case 4:
            func_088DE64C((T088DE64C *)arg0, arg1);
            break;
        case -1:
        default:
            break;
        }
        if (temp15 != arg0->unk_04) {
            arg0->unk_08 = 1;
        }
    } while (temp15 != *(volatile s32 *)&arg0->unk_04);
    arg0->unk_08 = 0;
    func_08913708(arg0->unk_30, arg1);
    func_08939978((T_08939978 *)arg0->unk_80, arg1);
    func_08931F2C(arg0->unk_1040, arg1);
    arg0->unk_20->unk_38(arg1);
    func_089D1B50(arg0->unk_1C7530, arg1);
    if (arg0->unk_B21B0 != 0) {
        func_089C6864(arg0->unk_A1768, arg1);
    }
    func_089261F8(arg0->unk_9D5F0, arg1);
    func_089261F8(arg0->unk_9E648, arg1);
    func_089261F8(arg0->unk_9F6A0, arg1);
    func_089261F8(arg0->unk_A06F8, arg1);
    (D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL)->unk_42820->unk_1498->unk_321C8 += arg1;
    func_088DF100((S_088DF100 *)arg0, arg1);
    return arg0->unk_10;
}

}
