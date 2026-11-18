#include "common.h"
typedef struct {
    s16 unk_00;
    s16 unk_02;
} P08876408;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18[0x40];
    u8 unk_58[0x200];
    s32 unk_258;
    s32 unk_25C;
    s32 unk_260;
    u8 unk_264[0x1AC8 - 0x264];
    s32 unk_1AC8;
    u8 unk_1ACC[0x800];
    s32 unk_22CC;
    s32 unk_22D0;
} T08876408;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x19CD4];
    u8 unk_19CE0[0x404];
    s32 unk_1A0E4;
    s32 unk_1A0E8;
    s32 unk_1A0EC;
    s16 unk_1A0F0;
    u8 unk_1A0F2;
    u8 unk_1A0F3;
    u8 unk_1A0F4[0x400];
    u8 unk_1A4F4[0x400];
    u8 unk_1A8F4[0x400];
    u8 unk_1ACF4[0x200];
    u8 unk_1AEF4[0x1000];
    u8 unk_1BEF4[0xA000];
    u8 unk_25EF4[0xA000];
    T08876408 unk_2FEF4;
    s32 unk_321C8;
    s32 unk_321CC;
    s32 unk_321D0;
    u8 unk_321D4[0xF4];
} S;

extern P08876408 D_089F9354[];
extern s16 D_089F936C[];
extern char D_089DD398[];
extern u8 *D_08AD6838[];

void func_0881F120(void *, void *, s32);
void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
void func_08875A38(void *);
void func_08875C3C(T08876408 *);
void func_08875F24(void *);
void func_08875F9C(void *);
void func_08876058(void *);
void func_089D4FB0(char *);

void func_08875C54(S *arg0)
{
    s16 buf0[5];
    P08876408 buf1[5];
    s16 *s0, *d0;
    s32 n0;
    P08876408 *s1, *d1;
    s32 n1;

    arg0->unk_00 = 0;
    func_089D4FB0((char *)arg0);
    arg0->unk_08 = 0x7B;
    func_08876058(arg0->unk_0C);
    func_08875F9C(arg0->unk_19CE0);
    func_08875F24(arg0->unk_19CE0);
    arg0->unk_1A0E4 = 0x7B;
    arg0->unk_1A0E8 = 0;
    arg0->unk_1A0EC = 0;
    arg0->unk_1A0F0 = 0;
    arg0->unk_1A0F2 = 0;
    arg0->unk_1A0F3 = 0;
    func_0881F5C0(arg0->unk_1A0F4, 0, 0x400);
    func_0881F5C0(arg0->unk_1A8F4, 0, 0x400);
    func_0881F5C0(arg0->unk_1A4F4, 0, 0x400);
    func_0881F5C0(arg0->unk_1ACF4, 0, 0x200);
    s0 = D_089F936C;
    d0 = buf0;
    n0 = 5;
    do {
        --n0;
        *d0 = *s0;
        ++s0;
        ++d0;
    } while (n0 > 0);
    func_0881F5C0(arg0->unk_1AEF4, 0, 0x1000);
    func_0881F120(arg0->unk_1AEF4, buf0, 0xA);
    D_08AD6838[0] = arg0->unk_1AEF4;
    func_0881F5C0(arg0->unk_1BEF4, 0, 0xA000);
    func_0881F5C0(arg0->unk_25EF4, 0, 0xA000);
    func_0881F5C0(arg0->unk_321D4, 0, 0xF4);
    arg0->unk_2FEF4.unk_14 = 0;
    func_08875C3C(&arg0->unk_2FEF4);
    func_08875A38(arg0->unk_2FEF4.unk_264);
    arg0->unk_2FEF4.unk_1AC8 = 0;
    func_0881F5C0(arg0->unk_2FEF4.unk_1ACC, 0, 0x800);
    arg0->unk_2FEF4.unk_22CC = 0;
    arg0->unk_2FEF4.unk_260 = 0;
    arg0->unk_2FEF4.unk_22D0 = -1;
    func_08822B3C((char *)arg0->unk_2FEF4.unk_18, D_089DD398);
    s1 = D_089F9354;
    d1 = buf1;
    n1 = 5;
    do {
        --n1;
        *d1 = *s1;
        ++s1;
        ++d1;
    } while (n1 > 0);
    func_0881F120(arg0->unk_2FEF4.unk_58, buf1, 0x14);
    arg0->unk_2FEF4.unk_258 = -1;
    arg0->unk_2FEF4.unk_25C = -1;
    arg0->unk_321D0 = 0;
    arg0->unk_321C8 = 0;
    arg0->unk_321CC = 0;
}
