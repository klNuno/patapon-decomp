#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct {
    u8 pad_00[0x6D2B0];
    V3 unk_6D2B0;
    u8 pad_6D2BC[0x10];
    u8 unk_6D2CC;
    u8 pad_6D2CD[3];
    s32 unk_6D2D0;
    f32 unk_6D2D4;
} T;

extern f32 D_08A06B20[];
extern f32 D_08A06B28[];

s32 func_0881F08C(void *, char *, u32);
void func_0881F120(void *, void *, s32);

void func_08998604(T *arg0, char *arg1) {
    V3 v;

    v.unk_00 = D_08A06B20[0];
    v.unk_04 = D_08A06B20[1];
    v.unk_08 = D_08A06B28[0];
    if (func_0881F08C(&v, arg1, 0xC) != 0) {
        func_0881F120(&arg0->unk_6D2B0, arg1, 0xC);
        arg0->unk_6D2D0 = 0;
        arg0->unk_6D2D4 = 1.0f;
        arg0->unk_6D2CC = 1;
    }
}
