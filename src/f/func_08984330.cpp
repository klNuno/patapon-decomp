#include "common.h"

extern "C" {

class A_089845C8 {
public:
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

void func_089853B4(void *, s32);

struct S {
    u8 pad_00[0x44];
    s32 unk_44;
};

struct T08985704_S {
    s32 unk_00;
    A_089845C8 *unk_04;
    S *unk_08;
    s32 *unk_0C;

    void release()
    {
        if (*(S *volatile *)&unk_08 != NULL) {
            --**(s32 *volatile *)&unk_0C;
            s32 *p = *(s32 *volatile *)&unk_0C;
            if ((p != NULL ? *p : 0) == 0) {
                unk_04->v1(unk_08, unk_0C, unk_00);
                func_089853B4(unk_08, unk_00);
            }
        }
    }
};

struct T08985704_A {
    u8 pad_00[0x1B8];
    u8 unk_1B8[0x634 - 0x1B8];
    f32 unk_634;
    u8 pad_638[0x674 - 0x638];
    u8 unk_674[1];
};

struct V_0898E100 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;

    V_0898E100(f32 a, f32 b, f32 c, f32 d)
    {
        u8 *p = (u8 *)this;
        s32 n = 0x10;
        if (p != NULL) {
            do {
                *p++ = 0;
            } while (--n);
        }
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
        unk_0C = d;
    }
};

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
} M_0898E100;

struct Sub_08981CCC;

void func_08985654(T08985704_A *);
s32 func_08985704(T08985704_S *arg0, T08985704_A *arg1);
s32 func_08868CAC(void *, s32, char *, s32);
extern void func_08865FEC(s32, s32, s32);
s32 func_08856400(V_0898E100 *);
void func_08855354(M_0898E100 *);
void func_08864E80(void *, M_0898E100 *);
void func_0898D5AC(void *);
s32 *func_08868E8C(void *, s32, char *);
void func_0897B950(Sub_08981CCC *, s32);

extern void *D_08AD1E28[];
extern char *D_08A05DD4[];
extern char *D_08A05DFC[];
extern char *D_08A05DE4[];
extern char *D_08A05DC4[];
extern f32 D_089ED300[];

void func_08984330(T08985704_A *arg0)
{
    T08985704_S a;
    T08985704_S b;
    T08985704_S c;
    M_0898E100 m;
    void *p;
    S *q;
    char *r;
    f32 f;

    func_08985654(arg0);
    p = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08985704(&a, arg0);
    r = D_08A05DD4[0];
    q = a.unk_08;
    func_08865FEC((s32)q, func_08868CAC(p, 7, r, 1), 1);
    func_08985704(&b, arg0);
    r = D_08A05DFC[0];
    q = b.unk_08;
    func_08865FEC((s32)q, func_08868CAC(p, 7, r, 1), 1);
    func_08985704(&c, arg0);
    r = D_08A05DE4[0];
    q = c.unk_08;
    func_08865FEC((s32)q, func_08868CAC(p, 7, r, 1), 1);
    f = arg0->unk_634;
    q = c.unk_08;
    V_0898E100 v(1.0f, 1.0f, 1.0f, f);
    q->unk_44 = func_08856400(&v);
    func_08855354(&m);
    m.unk_30 = D_089ED300[0];
    m.unk_34 = D_089ED300[1];
    func_08864E80(b.unk_08, &m);
    func_0898D5AC(arg0->unk_1B8);
    func_0897B950((Sub_08981CCC *)arg0->unk_674, *func_08868E8C(p, 7, D_08A05DC4[0]));
    c.release();
    b.release();
    a.release();
}
}
