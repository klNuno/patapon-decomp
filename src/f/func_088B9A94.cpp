#include "common.h"

extern "C" {
struct V {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x38];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};
typedef struct T {
    V unk_00;
    u8 pad_84[0xC];
} T;
typedef struct Q {
    T unk_00[2];
    s32 unk_120[2];
} Q;
typedef struct Mtx {
    f32 unk_00[16];
} Mtx;
typedef struct U {
    f32 unk_00, unk_04, unk_08, unk_0C;
    void unk_10(f32 arg0) {
        u8 *p = (u8 *)this;
        s32 n = 16;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        unk_00 = 1.0f;
        unk_04 = 1.0f;
        unk_08 = 1.0f;
        unk_0C = arg0;
    }
};

s32 func_08856400(s32);
void func_08858024(s32);
extern s32 func_088581B0(s32);
void func_08866B54(Mtx *, s32, void *);
f32 func_08856234(f32);
extern int func_08864E80(char *, char *);
s32 func_088CEE58(char *arg0);
u8 func_088CEE68(char *arg0);
f32 func_088CEE70(char *arg0);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
s32 func_0887C5A8(Mtx *);

void func_088B9A94(char *arg0, Q *arg1, f32 arg2) {
    Mtx a;
    U b, c, d;
    Mtx e;
    U h, i, j, k;
    f32 x, y, z;
    s32 n, off, r;
    V *p;

    func_0887C5A8(&e);
    func_08858024(1);
    func_088581B0((s32)&e);
    func_08858024(2);
    func_0887C590((char *)&h, 0.0f, 0.0f, 0.0f, 1.0f);
    x = func_08856234(45.0f);
    z = (-e.unk_00[14] * x) / 136.0f;
    x = e.unk_00[12];
    y = e.unk_00[13];
    h.unk_00 = -x + (-240.0f * z);
    h.unk_04 = -y + (136.0f * z);
    func_08866B54(&a, 0, func_0887C590((char *)&i, z, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a, 1, func_0887C590((char *)&j, 0.0f, z, 0.0f, 0.0f));
    func_08866B54(&a, 2, func_0887C590((char *)&k, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a, 3, &h);
    if (func_088CEE68(arg0) == 1) {
        n = func_088CEE58(arg0) != 0;
        if (arg1->unk_120[n] != 0) {
            b.unk_10(arg2 * (1.0f - func_088CEE70(arg0)));
            off = n * sizeof(T);
            r = func_08856400((s32)&b);
            p = (V *)(off + (u32)arg1);
            p->unk_44 = r;
            func_08864E80((char *)p, (char *)&a);
            p->unk_10();
        }
        n = (n ^ 0) == 0;
        if (arg1->unk_120[n] != 0) {
            c.unk_10(arg2 * func_088CEE70(arg0));
            off = n * sizeof(T);
            r = func_08856400((s32)&c);
            p = (V *)(off + (u32)arg1);
            p->unk_44 = r;
            func_08864E80((char *)p, (char *)&a);
            p->unk_10();
        }
    } else {
        n = func_088CEE58(arg0) != 0;
        if (arg1->unk_120[n] != 0) {
            d.unk_10(arg2);
            off = n * sizeof(T);
            r = func_08856400((s32)&d);
            p = (V *)(off + (u32)arg1);
            p->unk_44 = r;
            func_08864E80((char *)p, (char *)&a);
            p->unk_10();
        }
    }
}
}
