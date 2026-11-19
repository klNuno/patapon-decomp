#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u32 unk_10;
    u32 unk_14;
    u8 pad_18[0x16];
    u8 unk_2E;
} S;

typedef struct {
    u8 unk_00[0x100];
    u32 unk_100;
} T;

extern s32 D_089F96E0[];
extern char D_089F96FC[];
extern char D_089F9718[];
extern char D_089F9734[];
extern u32 D_08AD2008[];
extern u32 D_08AD200C[];

void func_0881F5C0(void *, s32, s32);
void func_08858F88(T *, s32, s32, const char *, ...);
f32 func_0887B0A8(S *, u8 *);
f32 func_0887B188(void *, u8 *);
u64 func_089AB994(f32);

void func_0887B3A4(S *arg0, s32 arg1, s32 arg2) {
    u8 temp;
    T temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    u32 temp6;
    u32 temp7;
    u64 temp8;
    u64 temp9;

    if (arg0->unk_2E != 0) {
        D_08AD2008[0] = D_08AD200C[0];
    }
    D_08AD200C[0] = (u32)*(D_089F96E0[0] < arg0->unk_0C ? &arg0->unk_0C : D_089F96E0) >> 12;
    temp3 = func_0887B0A8(arg0, NULL);
    temp4 = func_0887B188(arg0, NULL);
    func_0881F5C0(temp2.unk_00, 0, 0x100);
    temp2.unk_100 = 0xFFFFFF;
    func_08858F88(&temp2, arg1, arg2, D_089F96FC, arg0->unk_14, arg0->unk_14 >> 1,
                  arg0->unk_10, (arg0->unk_10 >> 1) & 3);
    temp6 = arg0->unk_14;
    temp5 = (f32)temp6 / 2.0f;
    temp5 += (f32)(u32)*(D_089F96E0[0] < arg0->unk_0C ? &arg0->unk_0C : D_089F96E0) / 19660800.0f;
    temp7 = temp6 >> 1;
    temp = 0;
    func_0887B188(arg0, &temp);
    if (temp == 0) {
        ++temp7;
    }
    temp8 = func_089AB994(temp3);
    temp9 = func_089AB994(temp4);
    func_08858F88(&temp2, arg1, arg2 + 1, D_089F9718, temp8, temp9, func_089AB994(temp5 - (f32)temp7));
    func_08858F88(&temp2, arg1, arg2 + 3, D_089F9734, func_089AB994(func_0887B188(arg0, NULL)));
}
