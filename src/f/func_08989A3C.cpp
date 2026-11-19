#include "common.h"
extern "C" {
struct V {
    u8 pad_00[0x50];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C(s32);
};
struct T {
    u8 pad_00[0x14];
    V *unk_14;
    u8 pad_18[0x87268];
    u8 unk_87280[4];
};
struct S {
    T *unk_00;
    u8 pad_04[0x10];
    s32 unk_14;
    u8 pad_18[0x34];
    s32 *unk_4C;
    u32 unk_50;
};
struct E {
    u8 pad_00[0x20];
    s32 unk_20;
    char unk_24[1];
};
struct A_088698FC {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};
struct C_088698FC {
    s32 *unk_00;
    s32 unk_04() {
        if (unk_00 != NULL)
            return *unk_00;
        return 0;
    }
    s32 unk_08() {
        --*unk_00;
        return unk_04();
    }
};
struct SP_088698FC {
    void *unk_00;
    C_088698FC unk_04;
};
typedef struct {
    s32 unk_00;
    A_088698FC *unk_04;
    SP_088698FC unk_08;
} M_088698FC;
typedef struct {
    s32 (*unk_00)(s32, s32, s32, s32);
    void *unk_04;
    s32 unk_08;
    u8 unk_0C;
    void *unk_10;
} N_088698FC;
typedef struct {
    u8 pad_00[4];
    N_088698FC unk_04;
    u8 pad_18[4];
    M_088698FC unk_1C;
} B_088698FC;
extern char D_08A06240[];
extern u8 D_08A44A3C[];
extern void *D_08A8812C[];
extern void *D_08AD1E28[];
extern u8 *D_08AD1F14[];
void func_088226BC(char *, char *, ...);
extern s32 func_0885AB3C(s32, s32);
s32 func_0885AB7C(s32, s32, s32);
void func_0885DE4C(void *);
void func_0885F7EC(void *, s32);
void func_08860490(void *, s32 *, char *, s32, s32, B_088698FC *, s32, s32, s32);
void func_08869A88(B_088698FC *, N_088698FC *);
s32 *func_08868F6C(void *, s32, s32);
s32 func_0887744C(u8 *, char *, s32);
extern s32 func_08883388(s32, s32, s32, s32);
s32 func_088F530C(char *);
s32 func_088F5314(char *, s32);
void *func_089AE598(void *);

static inline u8 *func_08989A3C_unk_00()
{
    u8 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}
static inline void func_08989A3C_unk_04(char *p)
{
    s32 i = 0x40;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--i != 0);
    }
}

void func_08989A3C(S *arg0, s32 arg1)
{
    char buf[0x40];
    N_088698FC n;
    B_088698FC b;
    char *p;
    u32 i;
    u32 temp1;
    s32 *a;
    s32 h;
    u32 end;
    E *e;
    s32 *q;
    void *g0;
    void *g1;
    SP_088698FC *s;

    if (arg0->unk_14 != arg1) {
        arg0->unk_14 = arg1;
        temp1 = arg0->unk_50;
        a = arg0->unk_4C;
        s32 *volatile *v = &arg0->unk_4C;
        if ((u32)a != (u32)(a + temp1)) {
            s32 *temp = *v + temp1;
            do {
                ++a;
            } while (a != temp);
        }
        arg0->unk_50 = 0;
        p = (char *)func_089AE598(arg0->unk_00->unk_87280);
        i = 0;
        if (func_088F530C(p) != 0) {
            do {
                s32 *out;
                u32 temp;
                temp = func_088F5314(p, i);
                out = (s32 *)((u8 *)arg0->unk_4C + (arg0->unk_50 << 2));
                if (out != NULL)
                    *out = temp;
                ++i;
                ++arg0->unk_50;
            } while (i < (u32)func_088F530C(p));
        }
        arg0->unk_00->unk_14->unk_3C(0);
        h = func_0887744C(func_08989A3C_unk_00(), D_08A06240, 1);
        end = *(u32 *)func_0885AB3C(h, 0);
        i = 0;
        e = NULL;
        if (end != 0) {
            do {
                e = (E *)func_0885AB7C(h, 0, i);
                if (e->unk_20 == arg1)
                    break;
                ++i;
                e = NULL;
            } while (i < end);
        }
        g0 = D_08A8812C[0];
        g1 = D_08AD1E28[0];
        g1 = g1 != NULL ? g1 : NULL;
        g0 = g0 != NULL ? g0 : NULL;
        func_08989A3C_unk_04(buf);
        func_088226BC(buf, e->unk_24);
        q = func_08868F6C(g1, 7, 0);
        if (*q != 0)
            func_0885DE4C(q);
        n.unk_10 = D_08A44A3C;
        n.unk_0C = 1;
        n.unk_00 = func_08883388;
        n.unk_08 = 7;
        n.unk_04 = NULL;
        func_08869A88(&b, &n);
        func_08860490(g0, q, buf, 0, 0, &b, 0, 0, 0);
        s = &b.unk_1C.unk_08;
        if (s->unk_00 != NULL) {
            if (s->unk_04.unk_08() == 0) {
                b.unk_1C.unk_04->unk_0C(s->unk_00, *(s32 **)&s->unk_04, b.unk_1C.unk_00);
                func_0885F7EC(s->unk_00, b.unk_1C.unk_00);
            }
        }
        b.unk_04.unk_10 = D_08A44A3C;
        n.unk_10 = D_08A44A3C;
    }
}
}
