#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    U unk_00;
    U unk_10;
    U unk_20;
    U unk_30;
} Mtx;

class T {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

typedef struct {
    u8 pad_00[0x1D7F70];
    T unk_1D7F70;
    u8 pad_1D7FF4[0xC];
    u8 unk_1D8000;
} S;

extern f32 D_089E14A0[];
void func_08855354(char *);
f32 func_08856234(f32);
void func_088576F8(void);
void func_08857D10(f32, f32, f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08858024(s32);
extern s32 func_088581B0(s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
extern int func_08864E80(char *, char *);
void func_08866B54(Mtx *, s32, void *);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
s32 func_0887C5A8(s32 arg0);

void func_088DF200(S *arg0)
{
    struct {
        u8 pad_00[8];
        L_0893CEA8 unk_08;
    } l;
    U a;
    U b;
    U c;
    Mtx d;
    Mtx e;
    U f;
    U g;
    U h;
    U i;
    f32 x;
    f32 y;

    if (arg0->unk_1D8000 != 0) {
        a.unk_08 = 100.0f;
        a.unk_0C = 1.0f;
        b.unk_0C = 1.0f;
        c.unk_04 = 1.0f;
        c.unk_0C = 1.0f;
        a.unk_00 = 0.0f;
        a.unk_04 = 0.0f;
        b.unk_00 = 0.0f;
        b.unk_04 = 0.0f;
        b.unk_08 = 0.0f;
        c.unk_00 = 0.0f;
        c.unk_08 = 0.0f;
        func_08858024(0);
        func_088576F8();
        x = a.unk_08 * func_08856234(45.0f);
        func_08857D10((30.0f / 17.0f) * -x, (30.0f / 17.0f) * x, -x, x, 0.1f, 1000.0f);
        func_08858024(1);
        func_088576F8();
        func_08857E5C(&a, &b, &c);
        func_08858024(2);
        func_08864A30(&l.unk_08);
        func_08855354((char *)&d);
        func_0887C5A8((s32)(u32)&e);
        func_08858024(1);
        func_088581B0((s32)&e);
        func_08858024(2);
        func_0887C590((char *)&f, 0.0f, 0.0f, 0.0f, 1.0f);
        y = (-e.unk_30.unk_08 * func_08856234(45.0f)) / 136.0f;
        f.unk_00 = -e.unk_30.unk_00 + (D_089E14A0[0] - 240.0f) * y;
        f.unk_04 = -e.unk_30.unk_04 + (136.0f - D_089E14A0[1]) * y;
        func_08866B54(&d, 0, func_0887C590((char *)&g, y, 0.0f, 0.0f, 0.0f));
        func_08866B54(&d, 1, func_0887C590((char *)&h, 0.0f, y, 0.0f, 0.0f));
        func_08866B54(&d, 2, func_0887C590((char *)&i, 0.0f, 0.0f, 1.0f, 0.0f));
        func_08866B54(&d, 3, &f);
        func_08864E80((char *)&arg0->unk_1D7F70, (char *)&d);
        arg0->unk_1D7F70.unk_10();
        func_08864A68(&l.unk_08, -1);
    }
}

}
