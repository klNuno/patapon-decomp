#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { u8 pad_00[0x20]; s32 unk_20; } U;
typedef struct {
    u8 pad_00[0x150];
    V4 unk_150;
    u8 pad_160[0x10];
    V4 unk_170;
} T;
typedef struct {
    u8 pad_00[0x64];
    U *unk_64;
    T *unk_68;
} S;

void func_08854CD8(V4 *, V4 *, V4 *);
void func_08854D10(V4 *, V4 *, V4 *);
void func_08854F60(f32, V4 *, V4 *);
s32 func_088CEE58(char *arg0);
s32 func_088CEE60(char *arg0);
u8 func_088CEE68(char *arg0);
f32 func_088CEE70(char *arg0);

void func_088B9934(V4 *arg0, S *arg1, s32 arg2) {
    V4 a, b, c, d;
    s32 i;
    T *q;
    V4 *p;
    f32 f;
    f32 x, y, z, w;

    i = arg1->unk_64[arg2].unk_20;
    q = &arg1->unk_68[i];
    if (func_088CEE68((char *)arg1) == 1) {
        p = func_088CEE58((char *)arg1) == 0 ? &q->unk_150 : &q->unk_170;
        w = p->unk_00;
        z = p->unk_0C;
        y = p->unk_08;
        x = p->unk_04;
        a.unk_00 = x;
        a.unk_04 = y;
        a.unk_08 = z;
        a.unk_0C = w;
        p = func_088CEE60((char *)arg1) == 0 ? &q->unk_150 : &q->unk_170;
        w = p->unk_00;
        z = p->unk_0C;
        y = p->unk_08;
        x = p->unk_04;
        b.unk_00 = x;
        b.unk_04 = y;
        b.unk_08 = z;
        b.unk_0C = w;
        f = func_088CEE70((char *)arg1);
        func_08854D10(&d, &b, &a);
        func_08854F60(f, &c, &d);
        func_08854CD8(arg0, &a, &c);
    } else {
        p = func_088CEE58((char *)arg1) == 0 ? &q->unk_150 : &q->unk_170;
        w = p->unk_00;
        z = p->unk_0C;
        y = p->unk_08;
        x = p->unk_04;
        arg0->unk_00 = x;
        arg0->unk_04 = y;
        arg0->unk_08 = z;
        arg0->unk_0C = w;
    }
}
