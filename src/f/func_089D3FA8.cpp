#include "common.h"

extern "C" {

struct A {
    virtual s32 *unk_08(void *, s32);
    virtual void unk_0C(void *, s32 *, s32);
};

struct B {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

struct C {
    u8 pad_00[0x90];
    B unk_90;
};

struct H {
    s32 unk_00;
    A *unk_04;
    C *unk_08;
    s32 *unk_0C;
};

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
} T;

typedef struct {
    T *unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    H unk_10;
    f32 unk_20;
    f32 unk_24;
    u32 unk_28;
    u8 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 *unk_3C;
} S;

extern u8 D_08A48FE4[];
extern void *D_08AD1E28[];
void *func_08827A50(s32, s32);
extern s32 func_08827AD4(void);
extern C *func_0898A680(C *, s32);
char *func_089D4248(char *arg0, char *arg1);
void func_089D4204(char *arg0, char *arg1);
extern void *func_089845C8(void *, s16);
extern void func_08865FEC(s32, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
extern int func_088CE1EC(s32, char *);
void func_08855354(char *);
extern int func_08864E80(char *, char *);
void func_0898ABB8(void *, f32, s32, s32);
void func_089853B4(void *, s32);

static inline void *unk_00(void)
{
    void *p = D_08AD1E28[0];
    return p != NULL ? p : NULL;
}

S *func_089D3FA8(S *arg0, T *arg1, s32 arg2, s32 arg3, char *arg4,
                 f32 *arg5, f32 *arg6, s32 arg7, s32 arg8)
{
    H h;
    struct { H unk_00; u8 pad_10[8]; } g;
    struct { u8 pad_00[0x30]; f32 unk_30; f32 unk_34; u8 pad_38[0x10]; } l;
    s32 n;
    C *p;
    C *q;
    A *a;
    s32 *r;

    arg0->unk_3C = D_08A48FE4;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0.0f;
    arg0->unk_0C = 0.0f;
    arg0->unk_10.unk_00 = 0;
    arg0->unk_10.unk_04 = NULL;
    arg0->unk_10.unk_08 = NULL;
    arg0->unk_10.unk_0C = NULL;
    arg0->unk_28 = 0;
    arg0->unk_2C = 1;
    arg0->unk_30 = arg8;
    arg0->unk_38 = arg3;
    n = arg0->unk_00->unk_28;
    p = (C *)func_08827A50(0x370, n);
    if (p != NULL) {
        p = func_0898A680(p, 0);
    }
    h.unk_00 = n;
    h.unk_04 = (A *)func_08827AD4();
    h.unk_08 = p;
    r = h.unk_04->unk_08(p, h.unk_00);
    h.unk_0C = r;
    *r = 1;
    func_089D4248((char *)&g, (char *)&h);
    func_089D4204((char *)&g, (char *)&arg0->unk_10);
    func_089845C8(&g, -1);

    a = (A *)unk_00();
    q = arg0->unk_10.unk_08;
    func_08865FEC((s32)q, func_08868CAC(a, 7, arg4, 1), 1);
    q = arg0->unk_10.unk_08;
    if (q != NULL) {
        q = (C *)((char *)q + 0x90);
    }
    func_088CE1EC(arg0->unk_38, (char *)q);
    arg0->unk_08 = arg5[0];
    arg0->unk_0C = arg5[1];
    func_08855354((char *)&l);
    l.unk_30 = arg0->unk_08;
    l.unk_34 = arg0->unk_0C;
    func_08864E80((char *)arg0->unk_10.unk_08, (char *)&l);
    arg0->unk_10.unk_08->unk_90.unk_14(-10);
    func_0898ABB8(arg0->unk_10.unk_08, 0.0f, arg7, 1);
    arg0->unk_34 = arg7;
    arg0->unk_20 = arg6[0];
    arg0->unk_24 = arg6[1];
    arg0->unk_28 = 0x40000000;

    if (h.unk_08 != NULL) {
        --**(s32 *volatile *)&h.unk_0C;
        r = *(s32 *volatile *)&h.unk_0C;
        if ((r != NULL ? *r : 0) == 0) {
            h.unk_04->unk_0C(*(C *volatile *)&h.unk_08, h.unk_0C, h.unk_00);
            func_089853B4(h.unk_08, h.unk_00);
        }
    }
    return arg0;
}

}
