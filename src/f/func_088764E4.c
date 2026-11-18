#include "common.h"

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s16 unk_24, unk_26;
    u8 pad_28[6];
    s16 unk_2E;
    u8 pad_30[0x20];
    f32 unk_50, unk_54, unk_58;
    s32 unk_5C;
    u8 unk_60[0x24];
    u8 unk_84[0x104];
} B;

typedef struct {
    u8 pad_00[0x30];
} R;

typedef struct {
    char unk_00[0x20];
    s32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34;
    u8 pad_38[0x18];
    u8 unk_50[0x24];
    R unk_74[3];
} C;

typedef struct {
    char unk_00[8];
    s32 unk_08, unk_0C, unk_10;
    u8 pad_14[0x0C];
    s32 unk_20, unk_24, unk_28, unk_2C, unk_30, unk_34;
    u8 pad_38[8];
    char unk_40[0x20];
    s32 unk_60, unk_64, unk_68;
    u8 pad_6C[0x14];
    u8 unk_80[0x104];
    B unk_184[3];
    C unk_61C[18];
} A;

void func_08822B3C(char *, char *);
void func_08875B9C(A *);
void func_08875BAC(B *);
void func_08876338(void *);
void func_088763E8(void *);
void func_088763F8(void *);
void *func_088766F0(void *);

extern char D_089DD520[];
extern char D_089DD3D4[];
extern char D_089DD3CC[];
extern char D_089DD3C4[];
extern char D_089DD3BC[];

A *func_088764E4(A *arg0) {
    B *p;
    C *q;
    R *r;
    s32 i, j;

    func_088766F0(arg0->unk_80);
    func_08822B3C(arg0->unk_40, D_089DD520);
    arg0->unk_68 = 0;
    arg0->unk_64 = 0;
    arg0->unk_60 = 0;
    p = arg0->unk_184;
    do {
        func_088763F8(p->unk_60);
        func_088766F0(p->unk_84);
        func_08875BAC(p);
        p++;
    } while (p < arg0->unk_184 + 3);
    q = arg0->unk_61C;
    do {
        q->unk_24 = -1;
        func_088763F8(q->unk_50);
        r = q->unk_74;
        do {
            func_088763E8(r);
            r++;
        } while (r < q->unk_74 + 3);
        func_08876338(q);
        q++;
    } while (q < arg0->unk_61C + 18);
    func_08822B3C(arg0->unk_00, D_089DD3D4);
    arg0->unk_08 = 0x40;
    arg0->unk_0C = 0x3F4CCCCD;
    arg0->unk_10 = 3;
    arg0->unk_20 = 1;
    arg0->unk_24 = 0x144;
    arg0->unk_28 = 3;
    arg0->unk_2C = 0x188;
    arg0->unk_30 = 0x12;
    arg0->unk_34 = 0x104;
    func_08822B3C(arg0->unk_40, D_089DD3CC);
    arg0->unk_60 = 0;
    arg0->unk_64 = 3;
    i = 0;
    p = (B *)arg0;
    do {
        B *b = (B *)((u8 *)p + 0x184);
        f32 x;

        func_08875BAC(b);
        func_08822B3C(b->unk_00, D_089DD3C4);
        b->unk_20 = i;
        b->unk_24 = 0;
        b->unk_26 = 0;
        b->unk_2E = 0;
        x = 20.0f * (f32)i;
        i++;
        p++;
        b->unk_50 = x;
        b->unk_54 = 0.0f;
        b->unk_58 = 0.0f;
        b->unk_5C = 0xC1700000;
    } while (i < 3);
    j = 0;
    q = (C *)arg0;
    do {
        C *c = (C *)((u8 *)q + 0x61C);

        func_08822B3C(c->unk_00, D_089DD3BC);
        c->unk_20 = -1;
        c->unk_24 = -1;
        c->unk_28 = 0;
        c->unk_2C = 0;
        j++;
        c->unk_30 = 0;
        c->unk_34 = 0;
        q++;
    } while (j < 18);
    func_08875B9C(arg0);
    return arg0;
}
