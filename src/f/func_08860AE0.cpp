#include "common.h"

extern "C" {

class A {
public:
    virtual void *unk_08(s32, s32);
};

typedef struct {
    u8 pad_00[0x148];
    s32 unk_148;
    s32 unk_14C;
    u8 pad_150[0x14];
    u8 *unk_164;
} E;

typedef struct N {
    N *unk_00;
    N *unk_04;
    void *unk_08;
} N;

class L {
public:
    N *unk_00;
    N *unk_04;
    virtual N *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    N *unk_00;
    N *unk_04;
    u8 *unk_08;
    u8 unk_0C[0x604];
    u8 *unk_610;
    N unk_614;
    s32 unk_620;
} R;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 *unk_20;
} T_088611E4;

typedef struct {
    T_088611E4 unk_00;
    s32 unk_24;
    s32 unk_28[3];
} P;

typedef struct T_08914CD0 T_08914CD0;
typedef struct T0 T0;
typedef struct {
    u8 pad_00[0x10];
    A *unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    u8 unk_3C;
    u8 unk_3D;
    u8 pad_3E[2];
    s32 unk_40;
    u8 pad_44[0x94];
    A *unk_D8;
    E *unk_DC;
    s32 unk_E0;
    A *unk_E4;
    s32 unk_E8;
    R unk_EC;
    P unk_710;
    u8 unk_744[8];
    u8 unk_74C[0x82C];
    u8 unk_F78[0x2D0];
    u8 unk_1248[0x49B48 - 0x1248];
    s32 unk_49B48;
    u8 pad_49B4C[4];
    u8 unk_49B50[0x10];
    u8 unk_49B60[0x10];
    u8 unk_49B70;
} S;

extern u8 D_08A44ABC[];
extern u8 D_08A44B04[];
extern u8 D_08A44B14[];
s32 *func_08861350(s32 *arg0, s32 arg1);
char *func_088612E0(char *arg0, s32 arg1, char ***arg2);
void func_0881F5C0(void *, s32, s32);
s32 func_088612D0(s32 *arg0, s32 arg1);
s32 func_088611E4(T_088611E4 *arg0);
s32 func_08859C04(void);
void func_08913E3C(T_08914CD0 *, s32, s32);
void func_089B55A8(void *, s32);
T0 *func_089693F0(T0 *arg0, u8 *arg1);

S *func_08860AE0(S *arg0, A *arg1, s32 arg2) {
    E *e;
    E *end;
    E *q;
    R *r;
    N *n;
    N *t;
    u32 i;
    N *h;
    P *p;

    arg0->unk_10 = arg1;
    arg0->unk_28 = 0;
    arg0->unk_3C = 0;
    arg0->unk_3D = 0;
    arg0->unk_40 = arg2;
    arg0->unk_D8 = arg1;
    arg0->unk_DC = NULL;
    arg0->unk_E0 = arg2;
    arg0->unk_E4 = *(A *volatile *)&arg0->unk_D8;
    s32 count = *(volatile s32 *)&arg0->unk_E0;
    if (count != 0) {
        e = (E *)arg0->unk_E4->unk_08(count * sizeof(E), 0x20);
        arg0->unk_DC = e;
        end = e + arg0->unk_E0;
        do {
            q = e++;
            if (q != NULL) {
                q->unk_164 = D_08A44ABC;
                q->unk_148 = 0;
                q->unk_14C = 0;
            }
        } while (e != end);
    }
    arg0->unk_E8 = 0;
    *(u8 *volatile *)&arg0->unk_EC.unk_08 = D_08A44B14;
    r = &arg0->unk_EC;
    r->unk_08 = D_08A44B04;
    r->unk_610 = (u8 *)(((u32)r->unk_0C + 3) & ~3);
    n = ((L *)&arg0->unk_EC)->unk_08();
    r->unk_00 = n;
    r->unk_04 = n + (((L *)r)->unk_0C() - 1);
    n->unk_04 = (N *)r;
    r->unk_04->unk_00 = (N *)r;
    i = 1;
    if (((L *)r)->unk_0C() > 1U) {
        do {
            t = n++;
            t->unk_00 = n;
            n->unk_04 = t;
            ++i;
        } while (i < ((L *)r)->unk_0C());
    }
    r->unk_614.unk_08 = r;
    r->unk_620 = 0;
    h = &r->unk_614;
    r->unk_614.unk_00 = h;
    p = &arg0->unk_710;
    r->unk_614.unk_04 = h;
    func_08861350(&p->unk_24, (s32)arg1);
    func_088612E0((char *)p->unk_28, arg2, (char ***)&p->unk_24);
    func_0881F5C0(p, 0, 0x24);
    func_0881F5C0((void *)func_088612D0(p->unk_28, 0), 0, arg2 * 0x10);
    p->unk_00.unk_18 = arg2;
    p->unk_00.unk_1C = 0x10;
    p->unk_00.unk_20 = (u8 *)func_088612D0(p->unk_28, 0);
    func_088611E4(&p->unk_00);
    func_08913E3C((T_08914CD0 *)arg0->unk_74C, (s32)arg1, func_08859C04());
    func_089B55A8(arg0->unk_F78, func_08859C04());
    T0 *v = (T0 *)arg0->unk_1248;
    u8 *w = arg0->unk_74C;
    func_089693F0(v, w);
    arg0->unk_49B48 = -1;
    arg0->unk_49B70 = 1;
    func_0881F5C0(arg0->unk_DC, 0, arg2 * sizeof(E));
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    func_0881F5C0(arg0->unk_49B50, 0, 0x10);
    func_0881F5C0(arg0->unk_49B60, 0, 0x10);
    return arg0;
}

}
