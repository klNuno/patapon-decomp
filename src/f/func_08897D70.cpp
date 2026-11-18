#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;

typedef struct {
    s32 unk_00;
    u8 unk_04, unk_05, unk_06, unk_07;
    u8 pad_08[8];
    V4 unk_10;
    s32 unk_20;
} A0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} A2;

typedef struct {
    s32 unk_00;
} It;

typedef struct {
    u8 pad_00[0x77E4];
    f32 unk_77E4;
    u8 pad_77E8[0x1AF8];
    s32 unk_92E0;
    s32 unk_92E4;
} B;

typedef struct {
    u8 pad_00[0x3A0];
    B *unk_3A0;
    u8 pad_3A4[0x5CC];
    u8 unk_970[4];
} C;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} E;

typedef struct {
    u8 pad_00[0xB0];
    V4 unk_B0;
    u8 pad_C0[0xE4];
    u8 unk_1A4[4];
} F;

typedef struct {
    u8 pad_00[0x114];
    E *unk_114;
    u8 pad_118[0x288];
    C *unk_3A0;
    u8 pad_3A4[0x94C];
    F unk_CF0;
} A1;

typedef struct {
    u8 pad_00[0x5C];
    s32 unk_5C;
} G;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} H;

typedef struct {
    u8 pad_00[0x58];
    f32 unk_58;
} J;

void func_08860FBC(It *, void *);
void func_08860FC4(It *, void *);
void func_08888C88(void *, s32 *);
void func_08888D18(It *, void *, s32);
s32 func_08888DA8(void);
s32 func_08888DB0(void *);
s32 func_08888DB8(It *, It *);
void func_08888DD0(It *);
s32 *func_08888DE4(It *);
void func_08888DF0(It *, It *);
void func_08888E00(It *);
void func_088F5D44(A2 *, A0 *, void *, void *, s32, f32);
void func_08854F60(f32, V4 *, V4 *);
void func_08854CD8(V4 *, V4 *, V4 *);
s32 func_0885AB7C(s32, s32, s32);
extern s32 func_088A85E8(s32);
H *func_08877444(u8 *);
extern u8 *D_08AD1F14[];

static inline It *func_08897D70_1(It *arg0, void *arg1)
{
    func_08860FBC(arg0, arg1);
    return arg0;
}

s32 func_08897D70(A0 *arg0, A1 *arg1, A2 *arg2)
{
    s32 temp;
    It temp12, temp13, temp14, temp15, temp16;
    s32 temp17;
    f32 temp2;
    B *temp3;
    E *temp4;
    G *temp5;
    s32 temp6;
    u8 *temp7;
    V4 *temp8;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_06 = 0;
    arg0->unk_05 = 0;
    arg0->unk_07 = 0;
    arg0->unk_10.unk_00 = 0.0f;
    arg0->unk_10.unk_04 = 0.0f;
    arg0->unk_10.unk_08 = 0.0f;
    arg0->unk_10.unk_0C = 1.0f;
    arg0->unk_20 = 0;
    temp = arg2->unk_14;
    temp7 = (u8 *)&arg1->unk_CF0 + 0xE4;
    func_08888E00(&temp12);
    func_08860FC4(&temp13, temp7 + 0x74);
    func_08888DF0(&temp12, &temp13);
    while (func_08888DB8(&temp12, func_08897D70_1(&temp14, temp7 + 0x74)) != 0) {
        if (temp == *func_08888DE4(&temp12)) {
            temp17 = 1;
            goto unk_00;
        }
        func_08888DD0(&temp12);
    }
    if (func_08888DB0(temp7 + 0x74) == func_08888DA8()) {
        func_08860FC4(&temp15, temp7 + 0x74);
        func_08888DF0(&temp12, &temp15);
        func_08888D18(&temp16, temp7 + 0x74, temp12.unk_00);
    }
    func_08888C88(temp7 + 0x74, &temp);
    temp17 = 0;
unk_00:
    if (temp17 != 0) {
        return 0;
    }
    {
        struct {
            V4 unk_00;
            u8 pad_10[8];
        } temp9;
        temp9.unk_00.unk_00 = 0.0f;
        temp9.unk_00.unk_04 = 0.0f;
        temp9.unk_00.unk_08 = 0.0f;
        temp9.unk_00.unk_0C = 0.0f;
        temp2 = 1.0f;
        temp3 = arg1->unk_3A0->unk_3A0;
        if (temp3->unk_92E4 == 0) {
            temp2 = temp3->unk_77E4;
        }
        temp4 = arg1->unk_114;
        func_088F5D44(arg2, arg0, temp4->unk_10, temp4, (s32)&temp9.unk_00, temp2);
        temp2 = arg1->unk_3A0->unk_3A0->unk_92E0 == 1 ? -1.0f : 1.0f;
        temp6 = 1;
        temp9.unk_00.unk_00 *= temp2;
        temp5 = (G *)func_088A85E8((s32)arg1->unk_3A0->unk_970);
        if (temp5 != NULL) {
            temp6 = temp5->unk_5C != 0;
        }
        if (temp6 != 0) {
            u8 *temp10 = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
            J *temp11 = (J *)func_0885AB7C(func_08877444(temp10)->unk_1C, 0, 0);
            temp7 = (u8 *)&arg1->unk_CF0;
            temp8 = (V4 *)(temp7 + 0xB0);
            func_08854F60(temp11->unk_58, temp8, temp8);
            ((F *)temp7)->unk_B0.unk_0C = 0.0f;
        }
        temp7 = (u8 *)&arg1->unk_CF0;
        temp8 = (V4 *)(temp7 + 0xB0);
        func_08854CD8(temp8, temp8, &temp9.unk_00);
        ((F *)temp7)->unk_B0.unk_0C = 0.0f;
    }
    return 0;
}
}
