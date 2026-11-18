#include "common.h"

typedef struct {
    f32 unk_00[2];
} F2;

typedef struct {
    f32 unk_00[4];
} F4;

typedef struct {
    s8 unk_00[0x20];
    s32 unk_20;
    s32 unk_24;
    f32 unk_28;
    F4 unk_2C;
    f32 unk_3C;
} A;

typedef struct {
    s8 unk_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    s16 unk_2E;
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[2];
    F2 unk_38;
    F4 unk_40;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    F4 unk_60;
    F4 unk_70;
    f32 unk_80;
} B;

typedef struct {
    A unk_00;
    s32 unk_40[0x41];
} C;

typedef struct {
    B unk_00;
    s32 unk_84[0x41];
} E;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} H;

typedef struct {
    u8 pad_00[0x378];
    u8 unk_378[4];
} S;

extern u8 *D_08AD1F14[];
extern char D_089DD520[];
extern char D_089FA52C[];
extern char D_089FA554[];

void func_08822B3C(char *, char *);
extern s32 func_0885AAF8(s32);
extern s32 func_0885AB7C(s32, s32, s32);
void func_08875BAC(B *);
void func_088763F8(void *);
void func_088766F0(void *);
s32 func_0887744C(u8 *, char *, s32);
s32 func_0888AFAC(char *);
void func_088997B4(S *, E *, s32);
s32 func_088BCF68(s32 arg0);
s32 func_0893D3B0(void *);

void func_08899468(S *arg0) {
    s32 t0[0x41];
    A a;
    s32 t1[0x41];
    B b;
    u8 *g;
    s32 t;
    s32 *n;
    H *h;
    C *p;
    E *q;
    char *r;
    s32 i;

    g = D_08AD1F14[0];
    t = func_0887744C(g != NULL ? g : NULL, D_089FA52C, 15);
    n = (s32 *)func_088BCF68(func_0893D3B0(arg0->unk_378));
    h = (H *)func_0885AAF8(t);
    h->unk_20 = 1;
    h->unk_24 = 0x144;
    h->unk_28 = *n;
    h->unk_2C = 0x188;
    h->unk_30 = 0;
    h->unk_34 = 0x104;
    p = (C *)func_0885AB7C(t, 0, 0);
    *(u32 *)&p->unk_00.unk_28 = 0x461C4000;
    q = NULL;
    if (*n != 0) {
        q = (E *)func_0885AB7C(t, 1, 0);
    }

    func_088766F0(t0);
    func_08822B3C((char *)a.unk_00, D_089DD520);
    *(u32 *)&a.unk_28 = 0;
    a.unk_24 = 0;
    a.unk_20 = 0;
    {
        volatile s8 *src;
        s8 *dst;
        s32 n;
        src = a.unk_00;
        n = 16;
        dst = p->unk_00.unk_00;
        do {
            s8 a = src[0];
            s8 b = src[1];
            dst[0] = a;
            dst[1] = b;
            src += 2;
            dst += 2;
        } while (--n > 0);
    }
    p->unk_00.unk_20 = a.unk_20;
    p->unk_00.unk_24 = a.unk_24;
    p->unk_00.unk_28 = a.unk_28;
    p->unk_00.unk_2C = a.unk_2C;
    p->unk_00.unk_3C = a.unk_3C;
    {
        s32 *src = t0;
        s32 *dst = p->unk_40;
        s32 n = 65;
        do {
            *dst = *src;
            ++src;
            ++dst;
        } while (--n > 0);
    }
    p->unk_00.unk_24 = *n;
    *(u32 *)&p->unk_00.unk_28 = 0x43FA0000;
    r = (char *)p->unk_40;
    *(s32 *)(r + 0x70) = func_0888AFAC(D_089FA554);
    func_08822B3C(r + 0x50, D_089FA554);

    func_088763F8(&b.unk_60);
    func_088766F0(t1);
    func_08875BAC(&b);
    i = 0;
    if (i < p->unk_00.unk_24) {
        do {
            {
                volatile s8 *src;
                s8 *dst;
                s32 n;
                src = b.unk_00;
                n = 16;
                dst = q->unk_00.unk_00;
                do {
                    s8 a = src[0];
                    s8 b = src[1];
                    dst[0] = a;
                    dst[1] = b;
                    src += 2;
                    dst += 2;
                } while (--n > 0);
            }
            q->unk_00.unk_20 = b.unk_20;
            q->unk_00.unk_24 = b.unk_24;
            q->unk_00.unk_26 = b.unk_26;
            q->unk_00.unk_28 = b.unk_28;
            q->unk_00.unk_2A = b.unk_2A;
            q->unk_00.unk_2C = b.unk_2C;
            q->unk_00.unk_2E = b.unk_2E;
            q->unk_00.unk_30 = b.unk_30;
            q->unk_00.unk_34 = b.unk_34;
            q->unk_00.unk_38 = b.unk_38;
            q->unk_00.unk_40 = b.unk_40;
            q->unk_00.unk_50 = b.unk_50;
            q->unk_00.unk_54 = b.unk_54;
            q->unk_00.unk_58 = b.unk_58;
            q->unk_00.unk_5C = b.unk_5C;
            q->unk_00.unk_60 = b.unk_60;
            q->unk_00.unk_70 = b.unk_70;
            q->unk_00.unk_80 = b.unk_80;
            {
                s32 *src = t1;
                s32 *dst = q->unk_84;
                s32 n = 65;
                do {
                    *dst = *src;
                    ++src;
                    ++dst;
                } while (--n > 0);
            }
            func_088997B4(arg0, q, i);
            ++i;
            ++q;
        } while (i < p->unk_00.unk_24);
    }
}
