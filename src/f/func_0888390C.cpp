#include "common.h"

extern "C" {

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S_0888390C;

class Q_0888390C {
public:
    u8 pad_00[0x14];
    virtual void v08();
    virtual s32 v0C();
};

class E_0888390C {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40(void *, s32);
};

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
    s32 unk_10;
} B_0888390C;

typedef struct {
    u8 pad_00[0xD8];
    u8 unk_D8[0x10];
    E_0888390C *unk_E8;
    u8 pad_EC[0x100 - 0xEC];
    u8 unk_100;
    u8 pad_101[7];
    B_0888390C unk_108;
} O_0888390C;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x100];
    s32 unk_104;
    s32 unk_108;
} A_0888390C;

extern void *D_08AD1E28[];
extern u8 D_08AD22A1[];
extern char D_089DDF1C[];
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
O_0888390C *func_0896CFE0(s32, s32, s32);
void *func_08827A50(s32, s32);
Q_0888390C *func_08883AEC(S_0888390C *, s32);
void func_08869408(void *, Q_0888390C *, s32);
void func_0885DD94(B_0888390C *, s32, char *, s32);
void func_0881F120(void *, void *, s32);
void func_0885DE4C(B_0888390C *);
void func_08869030(void *, s32, s32, O_0888390C *, s32, s32);

void func_0888390C(s32 arg0, void *arg1, s32 arg2, A_0888390C *arg3) {
    s32 n;
    O_0888390C *o;
    void *g;
    void *h;
    S_0888390C *s;
    Q_0888390C *q;
    E_0888390C *e;
    void *sp3C;

    if (D_08AD1E28[0] != NULL) {
        g = D_08AD1E28[0];
    } else {
        g = NULL;
    }
    n = arg3->unk_104;
    o = func_0896CFE0(arg3->unk_108, arg0, arg3->unk_00);
    h = o->unk_D8;
    s = (S_0888390C *)func_08827A50(0xD90, n);
    if (s != NULL) {
        s->unk_00 = D_08A44C14;
        s->unk_00 = D_08A44C60;
        s->unk_D88 = (u8 *)(((u32)s->unk_04 & 3) + (u32)s + 0x04);
        s->unk_D8C = 0;
        s->unk_00 = D_08A44CAC;
    }
    q = func_08883AEC(s, n);
    func_08869408(h, q, n);
    *(s32 *)((u8 *)h + 0x10) = q->v0C();
    o->unk_100 = 1;
    e = o->unk_E8;
    if (D_08AD22A1[0] == 0) {
        B_0888390C *b = &o->unk_108;

        if (n != 0) {
            b->unk_0C = n;
        }
        if (b->unk_00 == NULL) {
            func_0885DD94(b, arg2, D_089DDF1C, 0x81);
        }
        if (arg2 <= b->unk_04) {
            func_0881F120(b->unk_00, arg1, arg2);
        }
    } else {
        B_0888390C *b = &o->unk_108;

        func_0885DE4C(b);
        b->unk_00 = arg1;
        b->unk_04 = arg2;
        b->unk_08 = 0;
        b->unk_10 = 0;
    }
    sp3C = o->unk_108.unk_00;
    e->v40(&sp3C, 0);
    func_08869030(g, 2, arg3->unk_00, o, n, 0);
}

}
