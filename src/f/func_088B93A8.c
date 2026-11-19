#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x120];
    s32 unk_120[2];
} Q;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    s32 unk_58;
    u8 unk_5C;
    u8 pad_5D[3];
    f32 unk_60;
    u8 pad_64[0xC];
    Q unk_70;
    u8 pad_198[8];
    Q unk_1A0;
} T;

typedef struct S S;

void func_08854CD8(V4 *, V4 *, V4 *);
void func_08854D10(V4 *, V4 *, V4 *);
typedef V4 V;
void func_08854F60(V *, V *, f32);
void func_088658B8(u32, u32);
void func_088B97D4(V4 *arg0, T *arg1, s32 arg2);
void func_088B9934(V4 *arg0, S *arg1, s32 arg2);
void func_088B9A94(char *arg0, Q *arg1, f32 arg2);
s32 func_088CEE58(char *arg0);
u8 func_0891E0A4(char *arg0, char *arg1);

void func_088B93A8(T *arg0, char *arg1) {
    V4 temp_130, temp_120, temp_110, temp_100, temp_F0, temp_E0;
    V4 temp_D0, temp_C0, temp_B0, temp_A0;
    V4 temp_90, temp_80, temp_70, temp_60;
    V4 temp_50, temp_40, temp_30, temp_20;
    f32 f;
    u32 a, b;

    func_088B97D4(&temp_130, arg0, arg0->unk_54);
    func_088B9934(&temp_120, (S *)arg0, arg0->unk_54);
    if (arg0->unk_5C == 1) {
        func_088B97D4(&temp_110, arg0, arg0->unk_58);
        func_088B9934(&temp_100, (S *)arg0, arg0->unk_58);
        f = arg0->unk_60;
        func_08854D10(&temp_80, &temp_110, &temp_130);
        func_08854F60(&temp_90, &temp_80, f);
        func_08854CD8(&temp_D0, &temp_130, &temp_90);
        temp_130 = temp_D0;
        f = arg0->unk_60;
        func_08854D10(&temp_60, &temp_100, &temp_120);
        func_08854F60(&temp_70, &temp_60, f);
        func_08854CD8(&temp_C0, &temp_120, &temp_70);
        temp_120 = temp_C0;
    }
    if (func_0891E0A4(arg1, (char *)&temp_F0) == 1) {
        f32 v = 255.0f;
        f = temp_F0.unk_0C;
        temp_E0.unk_0C = v;
        temp_E0.unk_00 = v * temp_F0.unk_00;
        temp_E0.unk_04 = v * temp_F0.unk_04;
        temp_E0.unk_08 = v * temp_F0.unk_08;
        func_08854D10(&temp_40, &temp_E0, &temp_130);
        func_08854F60(&temp_50, &temp_40, f);
        func_08854CD8(&temp_B0, &temp_130, &temp_50);
        temp_130 = temp_B0;
        func_08854D10(&temp_20, &temp_E0, &temp_120);
        func_08854F60(&temp_30, &temp_20, f);
        func_08854CD8(&temp_A0, &temp_120, &temp_30);
        temp_120 = temp_A0;
    }

    a = (u32)temp_130.unk_00 | ((u32)temp_130.unk_04 << 8) | ((u32)temp_130.unk_08 << 16) | 0xFF000000;
    b = (u32)temp_120.unk_00 | ((u32)temp_120.unk_04 << 8) | ((u32)temp_120.unk_08 << 16) | 0xFF000000;
    func_088658B8(a, b);
    if (arg0->unk_5C == 1) {
        if (arg0->unk_1A0.unk_120[func_088CEE58((char *)arg0) != 0] != 0) {
            func_088B9A94((char *)arg0, &arg0->unk_70, 1.0f);
        } else {
            func_088B9A94((char *)arg0, &arg0->unk_70, 1.0f - arg0->unk_60);
        }
        func_088B9A94((char *)arg0, &arg0->unk_1A0, arg0->unk_60);
    } else {
        func_088B9A94((char *)arg0, &arg0->unk_70, 1.0f);
    }
}
