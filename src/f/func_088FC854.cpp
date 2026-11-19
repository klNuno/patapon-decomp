#include "common.h"

extern "C" {
typedef struct { f32 unk_00, unk_04; } V2;
typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V4;
typedef struct { V4 unk_00[4]; } Mtx;
typedef V4 V4_088FCD2C;
typedef V2 V2_088FCD2C;
typedef struct { u8 pad_00[4]; s16 unk_04; u8 pad_06[0x22]; u8 unk_28[4]; } E_0891AB5C;
class C {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};
class A {
public:
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x38];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};
struct T {
    s32 unk_00;
    u8 pad_04[0xC];
    A unk_10;
    u8 pad_94[0xC];
    s32 unk_A0;
};
struct S { s32 unk_00; C *unk_04; s32 unk_08; s32 *unk_0C; };

extern V2 D_089FE370[], D_089FE378[], D_089FE380[], D_089FE388[];
extern s32 D_089E3C54[];
extern f32 D_089E3C70[], D_089E3C74[];

void func_08854F60(f32, V4 *, V4 *);
f32 func_08856234(f32);
s32 func_08856400(s32);
void func_08858024(s32);
extern s32 func_088581B0(s32);
extern int func_08864E80(char *, char *);
extern void func_08865FEC(s32, s32, s32);
void func_08866B54(Mtx *, s32, void *);
void func_0886A45C(s32, s32);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
s32 func_0887C5A8(Mtx *);
E_0891AB5C *func_08945908(s32, s32);
extern s32 func_08991310(s32, s32);
void func_089913A0(char *arg0, char *arg1, s32 arg2);
void func_089B295C(void *, V4_088FCD2C *, s32);
void func_089B298C(void *, s32, s32, V2_088FCD2C *);
void func_089B2A88(void *);

inline void unk_00(V4 *arg0) {
    u8 *p = (u8 *)arg0;
    s32 n = 16;
    if (p != NULL) {
        do { *p++ = 0; } while (--n);
    }
}

inline void unk_04(V4 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    unk_00(arg0);
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    arg0->unk_0C = arg4;
}

void func_088FC854(T *arg0, void *arg1, V2 *arg2, s32 arg3, V4 *arg4, f32 fparg0) {
    S a;
    V2 b, c;
    struct { u8 pad_00[8]; V2 unk_08; } d;
    V4 e;
    Mtx f;
    V4 g, h, i, j, k, l;
    Mtx m;
    V4 n, o, p, r;
    f32 x, z, y;

    if (arg3 != -1) {
        E_0891AB5C *s = func_08945908(arg0->unk_00, arg3);
        e.unk_00 = D_089FE370[0].unk_00;
        e.unk_04 = D_089FE370[0].unk_04;
        e.unk_08 = D_089FE378[0].unk_00;
        e.unk_0C = D_089FE378[0].unk_04;
        func_089B295C(arg1, &e, 1);
        b.unk_00 = 1.0f;
        b.unk_04 = 1.0f;
        func_089B298C(arg1, D_089E3C54[s->unk_04], (s32)arg2, &b);
        func_089B2A88(arg1);
        if (fparg0 > 0.0f) {
            e.unk_0C = fparg0;
            func_089B295C(arg1, &e, 1);
            c.unk_00 = 1.0f;
            c.unk_04 = 1.0f;
            func_089B298C(arg1, 0x20, (s32)arg2, &c);
            func_089B2A88(arg1);
        }

        z = arg2->unk_04 + D_089E3C74[0];
        y = arg2->unk_00 + D_089E3C70[0];
        func_0887C5A8(&m);
        func_08858024(1);
        func_088581B0((s32)&m);
        func_08858024(2);
        func_0887C590((char *)&n, 0.0f, 0.0f, 0.0f, 1.0f);
        x = (-m.unk_00[3].unk_08 * func_08856234(45.0f)) / 136.0f;
        n.unk_00 = -m.unk_00[3].unk_00 + (y - 240.0f) * x;
        n.unk_04 = -m.unk_00[3].unk_04 + (136.0f - z) * x;
        func_08866B54(&f, 0, func_0887C590((char *)&o, x, 0.0f, 0.0f, 0.0f));
        func_08866B54(&f, 1, func_0887C590((char *)&p, 0.0f, x, 0.0f, 0.0f));
        func_08866B54(&f, 2, func_0887C590((char *)&r, 0.0f, 0.0f, 1.0f, 0.0f));
        func_08866B54(&f, 3, &n);
        func_08854F60(0.6f, &h, &f.unk_00[0]);
        f.unk_00[0] = h;
        func_08854F60(0.6f, &i, &f.unk_00[1]);
        f.unk_00[1] = i;
        func_08854F60(0.6f, &j, &f.unk_00[2]);
        f.unk_00[2] = j;

        if (arg4 != NULL) {
            unk_04(&k, arg4->unk_00, arg4->unk_04, arg4->unk_08, arg4->unk_0C);
            arg0->unk_10.unk_44 = func_08856400((s32)&k);
        }
        s32 temp = func_08991310(arg0->unk_A0, (s32)s->unk_28);
        if (temp <= 0) {
            return;
        }
        func_089913A0((char *)&a, (char *)arg0->unk_A0, temp);
        func_08865FEC((s32)&arg0->unk_10, a.unk_08, 0);
        if (a.unk_08 != 0) {
            --**(s32 *volatile *)&a.unk_0C;
            s32 *q = *(s32 *volatile *)&a.unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                C *ptr = a.unk_04;
                s32 *q = *(s32 *volatile *)&a.unk_0C;
                ptr->unk_0C(*(volatile s32 *)&a.unk_08, q, a.unk_00);
                func_0886A45C(a.unk_08, a.unk_00);
            }
        }
        func_08864E80((char *)&arg0->unk_10, (char *)&f);
        arg0->unk_10.unk_10();
        unk_00(&l);
        l.unk_00 = 1.0f;
        l.unk_04 = 1.0f;
        l.unk_08 = 1.0f;
        l.unk_0C = 1.0f;
        arg0->unk_10.unk_44 = func_08856400((s32)&l);
    } else {
        g.unk_00 = D_089FE380[0].unk_00;
        g.unk_04 = D_089FE380[0].unk_04;
        g.unk_08 = D_089FE388[0].unk_00;
        g.unk_0C = D_089FE388[0].unk_04;
        func_089B295C(arg1, &g, 1);
        d.unk_08.unk_00 = 1.0f;
        d.unk_08.unk_04 = 1.0f;
        func_089B298C(arg1, 5, (s32)arg2, &d.unk_08);
        func_089B2A88(arg1);
    }
}
}
