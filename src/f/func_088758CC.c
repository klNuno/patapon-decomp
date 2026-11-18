#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
} P088758CC;

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
} T088758CC;

typedef struct {
    T088758CC unk_00;
    T088758CC unk_22D4;
    s32 unk_45A8;
    s32 unk_45AC;
    s32 unk_45B0;
    s32 unk_45B4;
    s32 unk_45B8;
    s32 unk_45BC;
    u8 unk_45C0[0x200];
} S088758CC;

extern char D_089DD398[];
extern P088758CC D_089F9354[];

void func_08875A38(void *);
void func_08875C3C(T088758CC *);
void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
void func_0881F120(void *, void *, s32);

void func_088758CC(S088758CC *arg0) {
    P088758CC buf1[5];
    P088758CC buf2[5];
    P088758CC *s;
    P088758CC *d;
    s32 n;

    arg0->unk_00.unk_14 = 0;
    func_08875C3C(&arg0->unk_00);
    func_08875A38(arg0->unk_00.unk_264);
    arg0->unk_00.unk_1AC8 = 0;
    func_0881F5C0(arg0->unk_00.unk_1ACC, 0, 0x800);
    arg0->unk_00.unk_22CC = 0;
    arg0->unk_00.unk_260 = 0;
    arg0->unk_00.unk_22D0 = -1;
    func_08822B3C((char *)arg0->unk_00.unk_18, D_089DD398);
    s = D_089F9354;
    d = buf1;
    n = 5;
    do {
        n--;
        *d = *s;
        s++;
        d++;
    } while (n > 0);
    func_0881F120(arg0->unk_00.unk_58, buf1, 0x14);
    arg0->unk_00.unk_258 = -1;
    arg0->unk_00.unk_25C = -1;
    arg0->unk_22D4.unk_14 = 0;
    func_08875C3C(&arg0->unk_22D4);
    func_08875A38(arg0->unk_22D4.unk_264);
    arg0->unk_22D4.unk_1AC8 = 0;
    func_0881F5C0(arg0->unk_22D4.unk_1ACC, 0, 0x800);
    arg0->unk_22D4.unk_22CC = 0;
    arg0->unk_22D4.unk_260 = 0;
    arg0->unk_22D4.unk_22D0 = -1;
    func_08822B3C((char *)arg0->unk_22D4.unk_18, D_089DD398);
    s = D_089F9354;
    d = buf2;
    n = 5;
    do {
        n--;
        *d = *s;
        s++;
        d++;
    } while (n > 0);
    func_0881F120(arg0->unk_22D4.unk_58, buf2, 0x14);
    arg0->unk_22D4.unk_258 = -1;
    arg0->unk_22D4.unk_25C = -1;
    arg0->unk_45B0 = -1;
    arg0->unk_45B4 = -1;
    arg0->unk_45A8 = 0;
    arg0->unk_45AC = 0;
    arg0->unk_45B8 = 0;
    arg0->unk_45BC = 0;
    func_0881F5C0(arg0->unk_45C0, 0, 0x200);
}
