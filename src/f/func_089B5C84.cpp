#include "common.h"

extern "C" {
struct C;
class A {
public:
    virtual s32 *unk_08(C *, s32);
    virtual void unk_0C(C *, s32 *, s32);
};
struct C {
    u8 pad_00[0x810];
    u8 unk_810[0x70];
    u32 unk_880;
    u8 pad_884[0xC];
    f32 unk_890, unk_894;
    u8 pad_898[0x80];
    u8 unk_918;
    u8 pad_919[3];
    virtual void unk_08();
    virtual void unk_0C();
};
struct B {
    C unk_00;
    u8 pad_920[0x48];
    u8 unk_968, unk_969, unk_96A;
    u8 pad_96B[0x81];
    B *unk_9EC;
    u8 pad_9F0[0xA];
    u8 unk_9FA;
};
struct R {
    s32 unk_00;
    A *unk_04;
    C *unk_08;
    s32 *unk_0C;
};
struct E {
    char unk_00[4];
    char unk_04[0x200];
    char unk_204[0x200];
    char unk_404[0x20];
};
struct O {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x90];
    s32 unk_A0;
    u8 unk_A4[0x8484];
    E *unk_8528;
    s32 unk_852C;
    u8 pad_8530[8];
    B *unk_8538;
    u8 pad_853C[4];
    char unk_8540[0x80];
};
struct V { u8 pad_00[4]; char unk_04[0x10]; };
struct M { u8 pad_00[0x7C0]; V *unk_7C0; s32 unk_7C4; };

extern f32 D_089F2008[], D_089F200C[];
extern char D_08A08A80[], D_08A08A84[];
extern B *D_08AD8134[];
struct Unk4_089B64F4;
extern Unk4_089B64F4 D_08AD815C[];
void *func_08827A50(s32, s32);
A *func_08827AD4(void);
extern s32 func_0886095C(void);
void func_08865EE0(void *);
void func_08874714(C *, s32);
void func_088AF260(void *, s32);
void func_088B3120(char *, s32, char *);
void func_088F1A78(B *, s32);
void func_088F1C7C(B *);
void func_088F1DB4(void *, s32, s32, s32, void *);
void func_088F2104(s32 arg0, s32 arg1);
s32 func_0896AD3C(char *arg0);
C *func_0897CF28(void *, s32);
void func_089B6414(void *, E *);
typedef E S_089B64F4;
S_089B64F4 *func_089B64F4(S_089B64F4 *arg0, char *arg1, char *arg2, s32 *arg3, Unk4_089B64F4 *arg4);
void func_089B663C(char *arg0, char *arg1);
void func_089B66A0(void *, R *);

inline void unk_00(R &arg0) {
    if (*(C *volatile *)&arg0.unk_08 != NULL) {
        --**(s32 *volatile *)&arg0.unk_0C;
        s32 *q = *(s32 *volatile *)&arg0.unk_0C;
        if ((q != NULL ? *q : 0) == 0) {
            A *p = arg0.unk_04;
            s32 *r = *(s32 *volatile *)&arg0.unk_0C;
            p->unk_0C(*(C *volatile *)&arg0.unk_08, r, arg0.unk_00);
            func_08874714(arg0.unk_08, arg0.unk_00);
        }
    }
}

O *func_089B5C84(O *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    R b, c, d, e;
    E f;

    arg0->unk_00 = arg2;
    func_08865EE0(arg0->unk_10);
    arg0->unk_A0 = arg3;
    C *p = (C *)func_08827A50(0xA20, arg1);
    if (p != NULL) {
        p = func_0897CF28(p, arg2);
    }
    b.unk_00 = arg1;
    A *q = (b.unk_04 = func_08827AD4());
    b.unk_08 = p;
    s32 *r = (b.unk_0C = q->unk_08(p, *(volatile s32 *)&b.unk_00));
    *r = 1;
    func_089B66A0(arg0->unk_A4, &b);
    unk_00(b);

    E *iter = arg0->unk_8528;
    E *base = *(E *volatile *)(u32)&arg0->unk_8528;
    if (iter != base + arg0->unk_852C) {
        E *end = base + *(volatile s32 *)(u32)&arg0->unk_852C;
        do {
            ++iter;
        } while (iter != end);
    }
    arg0->unk_852C = 0;
    B *v = arg0->unk_8538;
    if (v != NULL) {
        v->unk_00.unk_0C();
    }
    v = arg0->unk_8538;
    if (v != NULL) {
        func_088AF260(v->unk_00.unk_810, 1);
        arg0->unk_8538->unk_00.unk_880 &= ~0x100U;
    }
    func_089B663C((char *)&c, (char *)arg0->unk_A4);
    f32 temp = D_089F2008[0];
    C *ptr = c.unk_08;
    ptr->unk_890 = temp;
    ptr->unk_894 = D_089F200C[0];
    unk_00(c);

    M *m = (M *)func_0896AD3C((char *)(func_0886095C() + 0x1248));
    V *it = m->unk_7C0;
    u32 n = 0;
    V *end = it + m->unk_7C4;
    for (; it != end && n < 0x20U; ++it, ++n) {
        char *s = it->unk_04;
        a = (s32)s;
        func_089B6414(arg0->unk_A4, func_089B64F4(&f, s, D_08A08A80, &a, D_08AD815C));
    }
    if (arg0->unk_852C != 0) {
        func_088F2104((s32)arg0->unk_8538, (s32)arg0->unk_8540);
        func_088F1C7C(arg0->unk_8538);
        E *it = arg0->unk_8528;
        E *end = it + *(volatile s32 *)&arg0->unk_852C;
        if (it != end) {
            do {
                func_088F1DB4(arg0->unk_8538, (s32)it->unk_04, (s32)it->unk_204, (s32)it, it->unk_404);
                ++it;
            } while (it != end);
        }
        v = arg0->unk_8538;
        v->unk_969 = 0;
        v->unk_968 = 0;
        v->unk_96A = 0;
        func_088F1A78(v, 0);
    }
    func_088B3120(arg0->unk_8540, 0x80, D_08A08A84);
    func_089B663C((char *)&d, (char *)arg0->unk_A4);
    d.unk_08->unk_918 = 0;
    unk_00(d);
    func_089B663C((char *)&e, (char *)arg0->unk_A4);
    ((B *)e.unk_08)->unk_9FA = 1;
    unk_00(e);

    v = arg0->unk_8538;
    if (D_08AD8134[0] != v) {
        v->unk_9EC = D_08AD8134[0];
        D_08AD8134[0] = v;
    }
    v->unk_969 = 0;
    v->unk_968 = 0;
    return arg0;
}
}
