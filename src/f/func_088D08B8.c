#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 pad_21[7];
    T unk_28;
    T unk_30;
    f32 unk_38;
    s32 unk_3C;
    f32 unk_40;
    u8 pad_44[0xF6C];
    char unk_FB0[0x50];
    u8 pad_1000[0x910];
    s32 unk_1910;
    u8 pad_1914[0x10];
    u8 unk_1924;
    u8 pad_1925[3];
    s32 unk_1928;
    f32 unk_192C;
    f32 unk_1930;
    f32 unk_1934;
} S;

void func_08855354(char *);
s32 func_088586E8(void);
u32 func_089B5464(s32);

void func_088D08B8(S *arg0, T *arg1, T *arg2, s32 arg3, f32 arg4, f32 arg5) {
    f32 temp = arg5 / 30.0f;
    f32 temp2;
    f32 temp3;
    u32 i;

    arg0->unk_20 = 1;
    arg0->unk_28.unk_00 = arg1->unk_00;
    arg0->unk_28.unk_04 = arg1->unk_04;
    arg0->unk_30.unk_00 = arg2->unk_00;
    arg0->unk_30.unk_04 = arg2->unk_04;
    arg0->unk_38 = arg4;
    arg0->unk_40 = temp;
    arg0->unk_3C = 0;
    arg0->unk_1910 = arg3;
    arg0->unk_1924 = 1;
    temp2 = (f32)func_089B5464(func_088586E8());
    temp2 /= 4294967296.0f;
    arg0->unk_1928 = 0;
    temp3 = 0.6f * temp2;
    arg0->unk_192C = 0.4f + temp3;
    temp2 = (f32)func_089B5464(func_088586E8());
    temp2 /= 4294967296.0f;
    temp3 = (0.9f - 0.7f) * temp2;
    temp2 = 0.7f;
    arg0->unk_1930 = temp2 + temp3;
    temp2 = (f32)func_089B5464(func_088586E8());
    temp2 /= 4294967296.0f;
    temp3 = 0.3f - 0.1f;
    temp3 *= temp2;
    temp2 = 0.1f;
    arg0->unk_1934 = temp2 + temp3;
    i = 0;
    do {
        func_08855354(arg0->unk_FB0);
        i++;
        arg0 = (S *)((u8 *)arg0 + 0x50);
    } while (i < 30U);
}
