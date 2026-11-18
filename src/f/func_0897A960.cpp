#include "common.h"

extern "C" {

class V {
public:
    virtual s32 *func_08(void *, s32);
    virtual void func_0C(void *, s32 *, s32);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
} A;

typedef struct {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    s32 *unk_0C;
} H;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    u8 unk_08[4];
} T;

typedef struct {
    s32 (*unk_00)(void *, void *, void *, void *);
    T *unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D[3];
    void *volatile unk_10;
} B;

typedef struct {
    u8 pad_00[0x14];
    void *volatile unk_14;
    u8 pad_18[4];
    H unk_1C;
} C;

extern u8 D_08A44A3C[];
extern u8 D_08A44AD8[];
extern char D_08A05894[];
extern void *D_08A8812C[];

void *func_08827A50(s32, s32);
s32 func_08827AD4(void);
void func_08822B3C(char *, char *);
void func_08822918(char *, char *);
void func_0885F7EC(void *, s32);
void func_08860490(void *, s32, char *, s32, s32, C *, s32, s32, s32);
void func_08869A88(C *, B *);
char *func_0891C6C8(s32);
void func_0897A848(void *, s16);
void func_0897A904(H *, s32);
void func_0897A948(H *);
void func_0897AC40(void *, s16);
void func_0897AD08(void *, void *, void *);
void func_0897AE24(void *, s32 *, H *);
u8 *func_0897AE70(void *);
s32 func_0897AE7C(void *, void *);
void func_0897AE94(void *, void *);
void func_0897AEA0(void *, void *, s32 *);
void func_0897AF10(H *, H *);
s32 func_0897AF58(void *, s32 *);
void func_0897B240(T *, s32);
s32 func_0897B378(void *, void *, void *, void *);
void func_0897B3C0(void *, s32);

void func_0897A960(T *arg0, s32 arg1, s32 arg2) {
    char str[0x400];
    H a;
    B b;
    C c;
    H d;
    s32 e;
    s32 f;
    s32 g;
    H h;
    u8 i[0x14];
    s32 j;
    s32 k;
    A *p;
    s32 *n;
    s32 x;
    u8 *q;
    void *r;

    s32 y = arg2;
    j = arg1;
    func_0897B240(arg0, arg1);
    k = arg0->unk_00;
    p = (A *)func_08827A50(0x1C, k);
    if (p != NULL) {
        x = arg0->unk_00;
        p->unk_18 = D_08A44AD8;
        p->unk_14 = 0;
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->unk_08 = 0;
        p->unk_10 = 0;
        p->unk_0C = x;
    }
    a.unk_00 = k;
    a.unk_04 = (V *)func_08827AD4();
    a.unk_08 = p;
    n = a.unk_04->func_08(p, *(volatile s32 *)&a.unk_00);
    a.unk_0C = n;
    *n = 1;

    k = func_0897AF58(arg0->unk_08, &j);
    func_0897AF10(&d, &a);
    func_0897A904(&d, k);
    func_0897A848(&d, -1);
    if (a.unk_08 != NULL) {
        --**(s32 *volatile *)&a.unk_0C;
        n = a.unk_0C;
        if ((n != NULL ? *n : 0) == 0) {
            V *v = *(V *volatile *)&a.unk_04;
            s32 *p = *(s32 *volatile *)&a.unk_0C;
            v->func_0C(*(void *volatile *)&a.unk_08, p, a.unk_00);
            func_0897B3C0(a.unk_08, a.unk_00);
        }
    }

    func_08822B3C(str, D_08A05894);
    func_08822918(str, func_0891C6C8(j));
    b.unk_10 = D_08A44A3C;
    b.unk_0C = 1;
    b.unk_00 = func_0897B378;
    b.unk_08 = j;
    b.unk_04 = arg0;
    func_08869A88(&c, &b);
    func_0897AEA0(&e, arg0->unk_08, &j);
    func_0897AE94(&f, arg0->unk_08);
    if (func_0897AE7C(&e, &f) != 0) {
        q = func_0897AE70(&e) + 4;
    } else {
        func_0897A948(&h);
        func_0897AE24(i, &j, &h);
        func_0897AD08(&g, arg0->unk_08, i);
        q = func_0897AE70(&g) + 4;
        func_0897AC40(i, -1);
        func_0897A848(&h, -1);
    }
    r = D_08A8812C[0];
    x = *(volatile s32 *)(q + 8);
    r = r != NULL ? r : NULL;
    func_08860490(r, x, str, 0, 0, &c, y, 0, 0);

    if (c.unk_1C.unk_08 != NULL) {
        --**(s32 *volatile *)&c.unk_1C.unk_0C;
        n = c.unk_1C.unk_0C;
        if ((n != NULL ? *n : 0) == 0) {
            V *v = *(V *volatile *)&c.unk_1C.unk_04;
            s32 *p = *(s32 *volatile *)&c.unk_1C.unk_0C;
            v->func_0C(*(void *volatile *)&c.unk_1C.unk_08, p, c.unk_1C.unk_00);
            func_0885F7EC(c.unk_1C.unk_08, c.unk_1C.unk_00);
        }
    }
    c.unk_14 = D_08A44A3C;
    b.unk_10 = D_08A44A3C;
}

}
