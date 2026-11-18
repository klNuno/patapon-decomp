#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    V unk_00[4];
} Mtx;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x48];
} S_0886615C;

typedef V V4;
void func_08854F60(f32, V4 *, V4 *);
f32 func_08856234(f32);
void func_08858024(s32);
extern s32 func_088581B0(s32);
extern int func_08864E80(char *, char *);
void func_08865EE0(void *);
void func_08865F78(void *, s32);
void func_08865FE4(void *, s32);
void func_0886615C(S_0886615C *arg0);
void func_08866B54(Mtx *, s32, void *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
s32 func_0887C5A8(Mtx *);
extern f32 D_089ED838[], D_089ED83C[];

void func_0898812C(void *arg0, s32 arg1, V *arg2, f32 arg4, s32 arg3)
{
    S_0886615C temp;
    Mtx temp2;
    V temp3, temp4, temp5;
    Mtx temp6;
    V temp7, temp8, temp9, temp10;
    f32 temp13, temp12, temp11;

    func_08865EE0(&temp);
    temp13 = arg2->unk_04 + D_089ED83C[0];
    temp12 = arg2->unk_00 + D_089ED838[0];
    func_0887C5A8(&temp6);
    func_08858024(1);
    func_088581B0((s32)&temp6);
    func_08858024(2);
    func_0887C590((char *)&temp7, 0.0f, 0.0f, 0.0f, 1.0f);
    temp11 = -temp6.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
    temp7.unk_00 = -temp6.unk_00[3].unk_00 + (temp12 - 240.0f) * temp11;
    temp7.unk_04 = -temp6.unk_00[3].unk_04 + (136.0f - temp13) * temp11;
    func_08866B54(&temp2, 0, func_0887C590((char *)&temp8, temp11, 0.0f, 0.0f, 0.0f));
    func_08866B54(&temp2, 1, func_0887C590((char *)&temp9, 0.0f, temp11, 0.0f, 0.0f));
    func_08866B54(&temp2, 2, func_0887C590((char *)&temp10, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&temp2, 3, &temp7);
    func_08854F60(arg4, (V *)(u32)&temp3, (V *)(u32)&temp2.unk_00[0]);
    temp2.unk_00[0] = temp3;
    func_08854F60(arg4, (V *)(u32)&temp4, (V *)(u32)&temp2.unk_00[1]);
    temp2.unk_00[1] = temp4;
    func_08854F60(arg4, (V *)(u32)&temp5, (V *)(u32)&temp2.unk_00[2]);
    temp2.unk_00[2] = temp5;
    temp.unk_44 = arg3;
    func_08865FE4(&temp, arg1);
    func_08864E80((char *)&temp, (char *)&temp2);
    func_0886615C(&temp);
    func_08865F78(&temp, -1);
}
