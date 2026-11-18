#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    f32 unk_04;
    f32 unk_08;
} T;

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
} U;

typedef struct {
    s32 unk_00;
    f32 unk_04[7];
} V;

typedef struct {
    s32 unk_00;
    T *unk_04;
} W;

typedef struct {
    u8 pad_00[0x98C];
    W *unk_98C[0x88];
    U *unk_BAC;
    V *unk_BB0;
    V *unk_BB4;
} S;

s32 func_0882160C(void);
s32 func_088586E8(void);
void func_08878A4C(S *, u32, f32, s32, f32, f32, f32, f32);
u32 func_089B5464(s32);

void func_08878864(S *arg0, u32 arg1, f32 arg3, s32 arg2, f32 arg4, f32 arg5) {
    T *temp;
    U *temp1;
    V *temp2;
    V *temp3;
    u16 temp4;
    f32 temp5;
    f32 temp6;
    s32 temp7;

    if (((arg1 >> 24) & 0xFF) == 1) {
        return;
    }
    temp7 = (arg1 >> 16) & 0xFF;
    temp7 += 0x40;
    temp = arg0->unk_98C[temp7][(arg1 >> 8) & 0xF].unk_04 + (arg1 & 0xFF);
    if (temp == NULL) {
        return;
    }
    temp1 = arg0->unk_BAC + temp->unk_01;
    if (temp1 == NULL) {
        return;
    }
    temp4 = temp->unk_02;
    temp2 = arg0->unk_BB0 + ((temp4 >> 4) & 0xF);
    if (temp2 == NULL) {
        return;
    }
    temp3 = arg0->unk_BB4 + ((temp4 >> 8) & 0xF);
    if (temp3 == NULL) {
        return;
    }
    temp5 = (f32)(func_0882160C() & 0xFFFF);
    temp5 /= 65536.0f;
    if (temp5 <= temp->unk_04 * temp1->unk_04) {
        arg3 *= temp->unk_08 * temp1->unk_08;
        temp6 = temp2->unk_04[func_089B5464(func_088586E8()) % 7U];
        func_08878A4C(arg0, arg1, arg3, arg2, arg5, arg4, temp6,
                      temp3->unk_04[func_089B5464(func_088586E8()) % 7U]);
    }
}
