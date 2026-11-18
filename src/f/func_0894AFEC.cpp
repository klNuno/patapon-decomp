#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    U unk_00[4];
} Mtx;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[0x40F8];
    s32 unk_40F8;
} T;

class B {
public:
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x38];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

typedef struct {
    T *unk_00;
    u8 pad_04[0xC];
    B unk_10;
    u8 pad_94[0x9C];
    u8 unk_130;
} S;

void func_08858024(s32);
extern s32 func_088581B0(s32);
f32 func_08856234(f32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
s32 func_0887C5A8(Mtx *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08866B54(Mtx *, s32, void *);
extern int func_08864E80(char *, char *);
extern f32 func_088CEE70(T *);
extern s32 func_088CEE58(T *);
extern s32 func_088CEE60(T *);
extern s32 func_088CEE68(T *);
s32 func_08856400(U *);
void func_08814BB4(s32);
void func_08815D9C(s32, s32, s32, s32, s32);

void func_0894AFEC(S *arg0, U *arg1) {
    L_0893CEA8 l;
    struct {
        Mtx unk_00;
        u8 pad_40[8];
    } a;
    Mtx b;
    U c;
    Mtx d;
    U e, f, g, h;
    f32 x, y, z;
    u8 *p;
    s32 n;

    if (arg0->unk_130 != 0) {
        func_08858024(1);
        func_088581B0((s32)&a.unk_00);
        func_08858024(2);
        x = 1.0f;
        if ((u8)func_088CEE68(arg0->unk_00) == 1) {
            x = func_088CEE70(arg0->unk_00);
            if (func_088CEE58(arg0->unk_00) == 0 && func_088CEE60(arg0->unk_00) == 1) {
                x = 1.0f - x;
            }
        }
        y = x * arg1->unk_0C;
        p = (u8 *)&c;
        n = 0x10;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        c.unk_0C = y;
        c.unk_00 = 1.0f;
        c.unk_04 = 1.0f;
        c.unk_08 = 1.0f;
        arg0->unk_10.unk_44 = func_08856400(&c);

        func_0887C5A8(&d);
        func_08858024(1);
        func_088581B0((s32)&d);
        func_08858024(2);
        func_0887C590((char *)&e, 0.0f, 0.0f, 0.0f, 1.0f);
        z = -d.unk_00[3].unk_08 * func_08856234(45.0f) / 136.0f;
        e.unk_00 = -d.unk_00[3].unk_00 + (-240.0f * z);
        e.unk_04 = -d.unk_00[3].unk_04 + (136.0f * z);
        func_08866B54(&b, 0, func_0887C590((char *)&f, z, 0.0f, 0.0f, 0.0f));
        func_08866B54(&b, 1, func_0887C590((char *)&g, 0.0f, z, 0.0f, 0.0f));
        func_08866B54(&b, 2, func_0887C590((char *)&h, 0.0f, 0.0f, 1.0f, 0.0f));
        func_08866B54(&b, 3, &e);

        func_08864E80((char *)&arg0->unk_10, (char *)&b);
        func_08864A30(&l);
        func_08814BB4(4);
        func_08815D9C(0, 2, 10, 0, -1);
        arg0->unk_10.unk_10();
        func_08815D9C(0, 2, 3, 0, 0);
        func_08864A68(&l, -1);
    }
}

}
