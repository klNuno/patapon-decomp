#include "common.h"

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
} U;

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
    u8 pad_164[4];
    s32 unk_168;
    u8 pad_16C[4];
    u8 unk_170[0xECC - 0x170];
    s32 unk_ECC;
} T;

extern s32 D_089F3890[];
void func_08866464(Unk_089CA058_Local *, char *, s32);
char *func_08985828(s32, s32);
void func_089CB744(void *, T *, Unk_089CA058_Local *, s32);
s32 func_089CBABC(void *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_089C9E7C(T *arg0) {
    Unk_089CA058_Local temp, temp1, temp2;
    char *temp3;
    s32 temp4 = arg0->unk_ECC;

    if (temp4 == 1) {
        temp3 = func_08985828((s32)arg0, 9);
        if (30.0f == (f32)(s32)((U *)temp3)->unk_54) {
            func_08866464(&temp, temp3, D_089F3890[0]);
            func_089CB744(arg0->unk_170, arg0, &temp, arg0->unk_168);
            arg0->unk_ECC = 0;
            func_08878864(func_089B53D8(func_088586E8()), 0x440106, 2, 1.0f, 0.0f, 0.0f);
        }
    } else if (temp4 == 2) {
        temp3 = func_08985828((s32)arg0, 9);
        if (30.0f == (f32)(s32)((U *)temp3)->unk_54) {
            func_08866464(&temp1, temp3, D_089F3890[0]);
            func_089CB744(arg0->unk_170, arg0, &temp1, arg0->unk_168);
        }
        temp3 = func_08985828((s32)arg0, 10);
        if (30.0f == (f32)(s32)((U *)temp3)->unk_54) {
            func_08866464(&temp2, temp3, D_089F3890[0]);
            func_089CB744(arg0->unk_170, arg0, &temp2, arg0->unk_168);
            arg0->unk_ECC = 0;
        }
    }
    if (arg0->unk_ECC == 0 && func_089CBABC(arg0->unk_170) != 0) {
        arg0->unk_160 = 4;
    }
}
