#include "common.h"

#pragma divbyzerocheck on

extern "C" {
struct V {
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(u32);
    virtual void unk_14();
};
struct W {
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(u32);
    virtual void unk_18();
    virtual void unk_1C();
};
typedef struct T {
    u8 pad_00[0x13CC];
    u32 unk_13CC;
    u8 pad_13D0[8];
    u32 unk_13D8;
    u8 pad_13DC[0x186C];
    u8 unk_2C48[4];
    u8 pad_2C4C[0x7C18];
    s32 unk_A864;
    u8 pad_A868[0xC];
    W *unk_A874;
} T;
typedef struct Q {
    T *unk_00;
} Q;
typedef struct U {
    f32 unk_00[4];
} U;
typedef struct S S;

void func_088576F8(void);
void func_088577AC(void);
void func_08857C74(f32, f32, f32, f32);
void func_08857E5C(U *, U *, U *);
void func_08858024(s32);
s32 func_08859C04(void);
void func_0885A074(s32);
void func_0885A0EC(char *arg0);
void func_0885A0F8(S *arg0);
extern s32 func_0886095C(void);
void func_08862AD4(s32);
void func_088785B4(void *, u32);
void func_0887C28C(s32);
char *func_0887C590(char *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3);
void func_08913708(char *, s32);
extern void func_089137D0(char *);
void func_089B4608(s32 *arg0, s32 *arg1);
void func_089B4610(s32 *arg0, s32 *arg1);
s32 func_089B4D64(s32 *, s32 *);
void func_089B4D7C(s32 *);
s32 func_089B4D90(s32 *arg0);
s32 *func_089B4D9C(s32 *arg0, s32 *arg1);
s32 *func_089B4DAC(s32 *arg0);
void func_089B5368(void);
s32 func_089B5380(void);
u8 func_089B5398(char *arg0);
s32 func_089B53A0(char *arg0);
s32 func_089B53A8(char *arg0);
s32 func_089B53B4(char *arg0);

void func_089B4FEC(Q *arg0) {
    s32 a, b, c, d, e;
    struct { u8 pad_00[8]; s32 unk_08; } f;
    U g, h, i;
    T *t;
    s32 q;
    u32 n, m, l;

    t = arg0->unk_00;
    q = func_08859C04();
    n = 60;
    if (func_089B53B4((char *)q) != 0) {
        n = 30;
    }
    m = 4800U / n;
    l = t->unk_13CC + m;
    t->unk_13D8 = m;

    func_08862AD4(func_0886095C());
    func_0885A0F8((S *)q);
    func_0885A074(q);
    func_08858024(1);
    func_088576F8();
    func_0887C590((char *)&g, 0.0f, 0.0f, 300.0f, 1.0f);
    func_0887C590((char *)&h, 0.0f, 0.0f, 0.0f, 1.0f);
    func_0887C590((char *)&i, 0.0f, 1.0f, 0.0f, 0.0f);
    func_08857E5C(&g, &h, &i);
    func_08858024(0);
    func_088576F8();
    func_08857C74(0.785f, 30.0f / 17.0f, 50.0f, 5000.0f);
    func_08858024(2);
    func_088576F8();
    func_088577AC();

    func_089B4DAC(&a);
    func_089B4610(&c, &t->unk_A864);
    func_089B4D9C(&a, &c);
    func_089B4608(&d, &t->unk_A864);
    if (func_089B4D64(&a, &d) != 0) {
        do {
            if (*(V **)func_089B4D90(&a) != NULL) {
                (*(V **)func_089B4D90(&a))->unk_10(t->unk_13D8);
            }
            func_089B4D7C(&a);
            func_089B4608(&d, &t->unk_A864);
        } while (func_089B4D64(&a, &d) != 0);
    }

    t->unk_A874->unk_14(m);
    func_08913708((char *)func_089B53A8((char *)t), m);
    func_088785B4(t->unk_2C48, m);
    t->unk_A874->unk_1C();
    func_089137D0((char *)func_089B53A8((char *)t));
    if (func_089B53A0((char *)t->unk_A874) != 0 && func_089B5398((char *)t->unk_A874) == 1) {
        func_0887C28C(func_089B5380());
    }
    func_089B5368();

    func_089B4DAC(&b);
    func_089B4610(&e, &t->unk_A864);
    func_089B4D9C(&b, &e);
    func_089B4608(&f.unk_08, &t->unk_A864);
    if (func_089B4D64(&b, &f.unk_08) != 0) {
        do {
            if (*(V **)func_089B4D90(&b) != NULL) {
                (*(V **)func_089B4D90(&b))->unk_14();
            }
            func_089B4D7C(&b);
            func_089B4608(&f.unk_08, &t->unk_A864);
        } while (func_089B4D64(&b, &f.unk_08) != 0);
    }
    func_0885A0EC((char *)q);
    t->unk_13CC = l;
}
}
