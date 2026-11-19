#include "common.h"

extern "C" {
typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } V;
typedef struct { V unk_00[4]; } Mtx;
class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};
typedef struct {
    u8 pad_00[0x10];
    T unk_10;
    u8 pad_94[0xC];
    T unk_A0;
    u8 pad_124[0xC];
    T unk_130;
    u8 pad_1B4[0xC];
    T unk_1C0;
    u8 pad_244[0xC];
    T unk_250;
    u8 pad_2D4[0xC];
    char unk_2E0[0x24150];
    s32 unk_24430;
} O;

extern V D_089E58C8[];
void func_08858024(s32);
extern s32 func_088581B0(s32);
extern int func_08864E80(char *, char *);
void func_08866B54(Mtx *, s32, void *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
s32 func_0887C5A8(Mtx *);
f32 func_08856234(f32);
extern void func_089137D0(char *);

void func_089178CC(O *arg0) {
    struct { Mtx unk_00; u8 pad_40[0x10]; } a;
    Mtx b;
    V c, d, e, f;
    Mtx g;
    V h, i, j, k;
    Mtx l;
    V m, n, o, p;
    f32 x, y, z;

    func_0887C5A8(&b);
    func_08858024(1);
    func_088581B0((s32)&b);
    func_08858024(2);
    func_0887C590((char *)&c, 0.0f, 0.0f, 0.0f, 1.0f);
    x = (-b.unk_00[3].unk_08 * func_08856234(45.0f)) / 136.0f;
    c.unk_00 = -b.unk_00[3].unk_00 + (-240.0f * x);
    c.unk_04 = -b.unk_00[3].unk_04 + (136.0f * x);
    func_08866B54(&a.unk_00, 0, func_0887C590((char *)&d, x, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 1, func_0887C590((char *)&e, 0.0f, x, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 2, func_0887C590((char *)&f, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a.unk_00, 3, &c);
    func_08864E80((char *)&arg0->unk_10, (char *)&a.unk_00);
    arg0->unk_10.unk_10();
    func_0887C5A8(&g);
    func_08858024(1);
    func_088581B0((s32)&g);
    func_08858024(2);
    func_0887C590((char *)&h, 0.0f, 0.0f, 0.0f, 1.0f);
    x = (-g.unk_00[3].unk_08 * func_08856234(45.0f)) / 136.0f;
    h.unk_00 = -g.unk_00[3].unk_00 + (D_089E58C8[0].unk_00 - 240.0f) * x;
    h.unk_04 = -g.unk_00[3].unk_04 + (136.0f - D_089E58C8[0].unk_04) * x;
    func_08866B54(&a.unk_00, 0, func_0887C590((char *)&i, x, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 1, func_0887C590((char *)&j, 0.0f, x, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 2, func_0887C590((char *)&k, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a.unk_00, 3, &h);
    func_08864E80((char *)&arg0->unk_A0, (char *)&a.unk_00);
    arg0->unk_A0.unk_10();
    func_08864E80((char *)&arg0->unk_130, (char *)&a.unk_00);
    arg0->unk_130.unk_10();
    func_08864E80((char *)&arg0->unk_250, (char *)&a.unk_00);
    arg0->unk_250.unk_10();

    x = D_089E58C8[0].unk_00;
    x += -12.0f;
    f32 temp = (f32)arg0->unk_24430;
    z = D_089E58C8[0].unk_04 + (22.0f * temp);
    func_0887C5A8(&l);
    func_08858024(1);
    func_088581B0((s32)&l);
    func_08858024(2);
    func_0887C590((char *)&m, 0.0f, 0.0f, 0.0f, 1.0f);
    y = (-l.unk_00[3].unk_08 * func_08856234(45.0f)) / 136.0f;
    m.unk_00 = -l.unk_00[3].unk_00 + (x - 240.0f) * y;
    m.unk_04 = -l.unk_00[3].unk_04 + (136.0f - z) * y;
    func_08866B54(&a.unk_00, 0, func_0887C590((char *)&n, y, 0.0f, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 1, func_0887C590((char *)&o, 0.0f, y, 0.0f, 0.0f));
    func_08866B54(&a.unk_00, 2, func_0887C590((char *)&p, 0.0f, 0.0f, 1.0f, 0.0f));
    func_08866B54(&a.unk_00, 3, &m);
    func_08864E80((char *)&arg0->unk_1C0, (char *)&a.unk_00);
    arg0->unk_1C0.unk_10();
    func_089137D0(arg0->unk_2E0);
}
}
