#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} E;

typedef struct {
    u8 pad_00[0x14];
    E *unk_14;
} T;

typedef struct {
    u8 pad_00[0x30];
} V;

typedef struct {
    char unk_00[0x24];
    s32 unk_24;
    u8 pad_28[8];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x18];
    u8 unk_50[0x24];
    V unk_74[3];
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[0xC];
} U;

extern char D_089FD72C[];
void func_08822B3C(char *, char *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08876338(void *);
void func_088763E8(void *);
void func_088763F8(void *);
s32 func_0888E684(s32, S *, U *);
s32 func_08894FBC(s32, s32, s32);
s32 func_08899E18(s32, s32);

void func_088EA7E8(T *arg0, void *arg1) {
    S s;
    U u;
    s32 *d;
    s32 *c;
    s32 *b;
    s32 *a;
    f32 *e;
    f32 *f;
    s32 *g;
    E *p;
    s32 v;
    V *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    p = arg0->unk_14;
    if (p != NULL) {
        v = func_08894FBC(func_08899E18(p->unk_36B10, *a), *b, 0);
        if (v != 0) {
            f32 y, x;
            s.unk_24 = -1;
            func_088763F8(s.unk_50);
            q = s.unk_74;
            do {
                func_088763E8(q);
                q++;
            } while (q < s.unk_74 + 3);
            func_08876338(&s);
            func_08822B3C(s.unk_00, D_089FD72C);
            s.unk_30 = *c;
            s.unk_34 = *d;
            y = *f;
            x = *e;
            u.unk_00 = x;
            u.unk_04 = y;
            u.unk_0C = 1.0f;
            u.unk_08 = 0.0f;
            *g = func_0888E684(v, &s, &u);
        }
    }
    func_08852F00(arg1, 0);
}
