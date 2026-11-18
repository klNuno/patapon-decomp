#include "common.h"

extern "C" {

class T {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual s32 unk_1C();
};

class B {
public:
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual u8 unk_1C();
};

class V {
public:
    virtual void unk_08();
    virtual void unk_0C(T *, s32 *, s32);
};

class C {
public:
    u8 pad_00[0x2760];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
};

class A : public C {
public:
    u8 pad_2764[0xC];
    B unk_2770;
    u8 pad_27CC[0x2340];
    u8 *unk_4B0C;
    u8 unk_4B10[0x1058];
    u8 unk_5B68[1];
};

typedef struct {
    s32 unk_00;
    V *unk_04;
    T *unk_08;
    s32 *unk_0C;
} R;

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
} S;

typedef struct {
    f32 unk_00, unk_04;
} P;

typedef struct S1 S1;

f32 func_0881A1E0(f32);
f32 func_08819D88(f32);
s32 func_0887EDA8(s32, s32);
s32 func_088C648C(void *);
void func_088E1204(T *, s32);
void func_088F31AC(char *arg0, char *arg1);
void func_088F4618(char *arg0, char *arg1);
void func_088F5224(char *arg0);
void func_088F5328(T *, s32);
void func_088F537C(char *arg0, char *arg1);
void func_089261F8(void *, s32);
void func_089ADF6C(S1 *arg0, u32 arg1, s32 arg2);
s32 func_089AE140(char *arg0);

static inline void unk_00(R *p, s32 arg1) {
    if (p->unk_08 != NULL) {
        --**(s32 *volatile *)&p->unk_0C;
        s32 *c = p->unk_0C;
        if ((c != NULL ? *c : 0) == 0) {
            V *v = *(V *volatile *)&p->unk_04;
            c = *(s32 *volatile *)&p->unk_0C;
            v->unk_0C(*(T *volatile *)&p->unk_08, c, p->unk_00);
            s32 n = *(volatile s32 *)&p->unk_00;
            T *t = *(T *volatile *)&p->unk_08;
            if (arg1 != 0) {
                func_088F5328(t, n);
            } else {
                func_088E1204(t, n);
            }
        }
    }
}

void func_088F4B24(A *arg0, s32 arg1, s32 arg2) {
    R a, b;
    P p;

    func_088F31AC((char *)&a, (char *)(arg0->unk_4B0C + 0x50560));
    if (a.unk_08 != NULL && a.unk_08->unk_1C() == 1) {
        func_088F537C((char *)&b, (char *)&a);
        S *q = (S *)func_088C648C(arg0->unk_4B0C + 0x506F0);
        f32 s = func_0881A1E0(-0.6283185482025146f);
        f32 d = s / func_08819D88(-0.6283185482025146f);
        f32 x = q->unk_38 * d;
        p.unk_04 = 0.0f;
        p.unk_00 = x;
        func_088F4618((char *)q, (char *)&p);
        unk_00(&b, 1);
    }
    if (arg0->unk_2770.unk_1C() == 1 && (u8)func_089AE140((char *)arg0) == 1 &&
        func_0887EDA8(arg2, 0x2000) != 0) {
        func_088F5224((char *)arg0);
        arg0->unk_28();
    }
    func_089ADF6C((S1 *)arg0, arg1, arg2);
    func_089261F8(arg0->unk_5B68, arg1);
    func_089261F8(arg0->unk_4B10, arg1);
    unk_00(&a, 0);
}

}
