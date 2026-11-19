#include "common.h"

extern "C" {
class A {
public:
    u8 pad_00[0x54];
    u32 unk_54;
    u8 pad_58[0x28];
    virtual void unk_08();
    virtual void unk_0C(void *);
};
class B : public A {
public:
    u8 pad_84[0xC];
};
typedef struct {
    A *unk_00;
    s32 unk_04;
    u8 pad_08[8];
} C;
typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} D;
typedef struct {
    u8 pad_00[0x1490];
    D *unk_1490;
} E;
typedef struct {
    u8 pad_00[0x42820];
    E *unk_42820;
} G;
typedef struct S_089CE450 S_089CE450;
typedef struct S S;
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    u8 unk_0C[0x11D20 - 0xC];
    C unk_11D20;
    u8 pad_11D30[0x2E0];
    C unk_12010;
    B unk_12020[3];
    u8 pad_121D0[0x10];
    u8 unk_121E0;
    u8 pad_121E1[3];
    u32 unk_121E4;
    u32 unk_121E8;
    u8 pad_121EC[0x10];
    u8 unk_121FC;
    u8 pad_121FD[0xB];
    s32 unk_12208;
} T;
typedef struct {
    s32 unk_00, unk_04;
} V;

s32 func_088586E8(void);
void func_08878864(S *arg0, u32 arg1, f32 arg3, s32 arg2, f32 arg4, f32 arg5);
s32 func_0887ED98(s32, s32);
s32 func_0887EDA8(s32, s32);
extern s32 func_08914C88(s32);
extern s32 func_089A8AA4(s32);
s32 func_089B53D8(s32);
s32 func_089CE450(S_089CE450 *arg0, s32 arg1);
void func_089D3B5C(char *arg0, s32 arg1);
extern V D_089F4940[];
extern G *D_08AD1E28[];

inline void func_089D26F8_00(T *arg0) {
    func_089D3B5C((char *)arg0, 1);
    arg0->unk_121E4 = 0;
    arg0->unk_121E8 = 0x3ECCCCCD;
    arg0->unk_121E0 = 1;
    arg0->unk_121FC = 0;
}

void func_089D26F8(T *arg0, void *arg1) {
    s32 temp = arg0->unk_12208;
    s32 temp2;
    if (func_0887ED98(arg0->unk_04, 0x10)) {
        temp2 = arg0->unk_12208 - 1;
        if ((arg0->unk_12208 = temp2) < 0) {
            arg0->unk_12208 = 4;
        }
    }
    if (func_0887ED98(arg0->unk_04, 0x40)) {
        temp2 = arg0->unk_12208 + 1;
        if ((u32)(arg0->unk_12208 = temp2) > 4U) {
            arg0->unk_12208 = 0;
        }
    }
    if (arg0->unk_12208 != temp) {
        func_08878864((S *)func_089B53D8(func_088586E8()), 1, 1.0f, 2, 0.0f, 0.0f);
        ((B *)arg0->unk_11D20.unk_00)[arg0->unk_12208].unk_54 = 0;
        ((B *)arg0->unk_12010.unk_00)[arg0->unk_12208].unk_54 = 0;
    }
    if (func_0887EDA8(arg0->unk_04, 0x4000)) {
        func_08878864((S *)func_089B53D8(func_088586E8()), 0, 1.0f, 2, 0.0f, 0.0f);
        G *temp3 = D_08AD1E28[0];
        V *temp13 = D_089F4940;
        s32 temp4 = 0;
        G *temp14;
        if (temp3 != NULL) {
            temp14 = temp3;
        } else {
            temp14 = NULL;
        }
        D *temp5 = temp14->unk_42820->unk_1490;
        s32 temp15 = arg0->unk_12208 * 8;
        s32 temp6 = ((V *)(temp15 + (u32)temp13))->unk_04;
        if (temp5->unk_14 != temp6) {
            temp4 = 1;
            func_08914C88(func_089A8AA4(temp6));
        }
        *(volatile s32 *)&temp5->unk_14 = temp6;
        if (temp4 != 0) {
            func_089CE450((S_089CE450 *)arg0->unk_0C, 3);
            func_089D3B5C((char *)arg0, 4);
            goto end;
        }
        func_089D26F8_00(arg0);
        goto end;
    } else if (func_0887EDA8(arg0->unk_04, 0x2000)) {
        func_089D26F8_00(arg0);
    }
end:
    B *temp7 = (B *)arg0->unk_11D20.unk_00;
    B *temp8 = (B *)((u8 *)temp7 + arg0->unk_11D20.unk_04 * 0x90);
    s32 temp9 = 0;
    if (temp7 != temp8) {
        do {
            if (temp9 != arg0->unk_12208) {
                temp7->unk_0C(arg1);
                ++temp7;
            } else {
                ++temp7;
            }
            ++temp9;
        } while (temp7 != temp8);
    }
    B *temp10 = (B *)arg0->unk_12010.unk_00;
    B *temp11 = (B *)((u8 *)temp10 + arg0->unk_12010.unk_04 * 0x90);
    s32 temp12 = 0;
    if (temp10 != temp11) {
        do {
            if (temp12 == arg0->unk_12208) {
                temp10->unk_0C(arg1);
                ++temp10;
            } else {
                ++temp10;
            }
            ++temp12;
        } while (temp10 != temp11);
    }
    arg0->unk_12020[0].unk_0C(arg1);
    arg0->unk_12020[1].unk_0C(arg1);
    arg0->unk_12020[2].unk_0C(arg1);
}
}
