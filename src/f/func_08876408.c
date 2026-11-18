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

extern char D_089DD398[];
extern P08876408 D_089F9354[];

void func_088764E4(void *);
void func_08875A38(void *);
void func_08875C3C(T08876408 *);
void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
void func_0881F120(void *, void *, s32);

T08876408 *func_08876408(T08876408 *arg0) {
    P08876408 buf[5];
    P08876408 *s;
    P08876408 *d;
    s32 n;

    arg0->unk_00 = 0;
    arg0->unk_08 = 0;
    arg0->unk_04 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    func_088764E4(arg0->unk_264);
    func_08875A38(arg0->unk_264);
    arg0->unk_14 = 0;
    func_08875C3C(arg0);
    func_08875A38(arg0->unk_264);
    arg0->unk_1AC8 = 0;
    func_0881F5C0(arg0->unk_1ACC, 0, 0x800);
    arg0->unk_22CC = 0;
    arg0->unk_260 = 0;
    arg0->unk_22D0 = -1;
    func_08822B3C((char *)arg0->unk_18, D_089DD398);
    s = D_089F9354;
    d = buf;
    n = 5;
    do {
        n--;
        *d = *s;
        s++;
        d++;
    } while (n > 0);
    func_0881F120(arg0->unk_58, buf, 0x14);
    arg0->unk_258 = -1;
    arg0->unk_25C = -1;
    return arg0;
}
