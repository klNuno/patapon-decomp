#include "common.h"

extern "C" {
class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};
typedef T Unk;
typedef struct { f32 unk_00, unk_04, unk_08; } T1;
typedef struct { u32 unk_00; u8 pad_04[4]; } L;
typedef struct U U;
typedef struct {
    u8 pad_00[0x40];
    T unk_40;
    u8 pad_C4[0x10C];
    T unk_1D0;
    u8 pad_254[0x14C];
    char unk_3A0[0x50];
    u8 unk_3F0;
    u8 pad_3F1[0xF];
    T unk_400;
    u8 pad_484[0x1110 - 0x484];
    T unk_1110;
    u8 pad_1194[0x1D90 - 0x1194];
    T unk_1D90;
    u8 pad_1E14[0x3DA4 - 0x1E14];
    s32 unk_3DA4;
    f32 unk_3DA8;
} S;

extern s32 func_08814C0C(s32);
void func_08814BB4(s32);
void func_08815320(s32);
void func_088154E8(s32, s32);
void func_08815C48(s32);
void func_08815C6C(s32);
void func_088576F8(void);
void func_08857754(void);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08858024(s32);
void func_0885807C(void);
void func_088580F8(void);
void func_08864A30(L *);
void func_08864A68(L *, s32);
extern void func_089137D0(char *);
void func_08974448(T *arg0, T1 *arg1, f32 arg2);
void func_08974584(Unk *arg0, f32 arg1, f32 arg2);
void func_0897470C(T *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);

extern s8 D_08ADB2B0[], D_08ADB2D0[], D_08ADB2F0[];
extern s32 D_08ADB2C0[], D_08ADB2C4[], D_08ADB2C8[], D_08ADB2CC[];
extern s32 D_08ADB2E0[], D_08ADB2E4[], D_08ADB2E8[], D_08ADB2EC[];
extern s32 D_08ADB300[], D_08ADB304[], D_08ADB308[], D_08ADB30C[];

void func_08983B90(S *arg0) {
    L temp;
    T1 temp2;
    L temp3;
    T1 temp4;
    s32 temp5;
    S *temp6;
    if (arg0->unk_3DA4 == 0) {
        return;
    }
    if (arg0->unk_3F0 != 0) {
        func_089137D0(arg0->unk_3A0);
    }
    if (arg0->unk_3DA4 == 1) {
        return;
    }
    func_08864A30(&temp);
    func_088154E8(1, -1);
    func_08858024(0);
    func_0885807C();
    func_088576F8();
    func_08857D10(-240.0f, 240.0f, -136.0f, 136.0f, 0.1f, 1000.0f);
    if (D_08ADB2B0[0] == 0) {
        D_08ADB2C0[0] = 0;
        D_08ADB2C4[0] = 0;
        D_08ADB2C8[0] = 0x43BE0000;
        D_08ADB2CC[0] = 0x3F800000;
        D_08ADB2B0[0] = 1;
    }
    if (D_08ADB2D0[0] == 0) {
        D_08ADB2E0[0] = 0;
        D_08ADB2E4[0] = 0;
        D_08ADB2E8[0] = 0;
        D_08ADB2EC[0] = 0x3F800000;
        D_08ADB2D0[0] = 1;
    }
    if (D_08ADB2F0[0] == 0) {
        D_08ADB300[0] = 0;
        D_08ADB304[0] = 0x3F800000;
        D_08ADB308[0] = 0;
        D_08ADB30C[0] = 0x3F800000;
        D_08ADB2F0[0] = 1;
    }
    func_08858024(1);
    func_0885807C();
    func_088576F8();
    func_08857E5C((U *)D_08ADB2C0, (U *)D_08ADB2E0, (U *)D_08ADB300);
    temp2.unk_04 = -102.0f;
    temp2.unk_00 = 0.0f;
    temp2.unk_08 = 210.0f;
    func_08974448(&arg0->unk_1D0, &temp2, 0.0f);
    func_0897470C(&arg0->unk_1D0, 1.0f, 1.0f, 1.0f, 0.0f);
    func_08974584(&arg0->unk_1D0, arg0->unk_3DA8, 0.0f);
    temp4.unk_04 = 18.0f;
    temp4.unk_00 = 0.0f;
    temp4.unk_08 = 25.0f;
    func_08974448(&arg0->unk_40, &temp4, 0.0f);
    func_0897470C(&arg0->unk_40, 1.0f, 1.0f, 1.0f, 0.0f);
    func_08974584(&arg0->unk_40, 0.0f, 0.0f);
    func_08858024(2);
    func_08814C0C(10);
    func_08814C0C(11);
    func_08814BB4(4);
    func_08814BB4(5);
    func_08814C0C(1);
    arg0->unk_40.unk_10();
    func_08815320(4);
    func_08815C6C(0);
    func_08815C48(6);
    func_08814BB4(1);
    arg0->unk_1D0.unk_10();
    func_08857754();
    func_08858024(0);
    func_088580F8();
    func_08858024(1);
    func_088580F8();
    func_08858024(2);
    func_088580F8();
    func_08864A68(&temp, -1);

    func_08864A30(&temp3);
    func_08814C0C(1);
    func_08814C0C(5);
    func_08858024(0);
    func_0885807C();
    func_088576F8();
    func_08857D10(0.0f, 480.0f, 272.0f, 0.0f, -1000.0f, 1000.0f);
    func_08858024(1);
    func_0885807C();
    func_088576F8();
    func_08858024(2);
    func_0885807C();
    temp5 = 0;
    temp6 = arg0;
    do {
        f32 temp7 = *(f32 *)((u8 *)arg0 + 0x116C);
        f32 temp8 = *(f32 *)((u8 *)arg0 + 0x1164);
        if (!(temp7 <= temp8)) {
            arg0->unk_1110.unk_10();
        }
        temp6->unk_400.unk_10();
        arg0->unk_1D90.unk_10();
        ++temp5;
        arg0 = (S *)((u8 *)arg0 + 0x190);
        temp6 = (S *)((u8 *)temp6 + 0x1A0);
    } while (temp5 < 8);
    func_08858024(0);
    func_088580F8();
    func_08858024(1);
    func_088580F8();
    func_08858024(2);
    func_088580F8();
    func_08864A68(&temp3, -1);
}
}
