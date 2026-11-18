#include "common.h"

extern "C" {

class B_08899C08 {
public:
    virtual void v0();
};

class C_08899C08 {
public:
    virtual s32 *v0(void *, B_08899C08 *);
    virtual void v1(void *, s32 *, B_08899C08 *);
};

void func_0889A26C(void *, B_08899C08 *);

struct P_08899C08 {
    void *unk_00;
};

struct R_08899C08 {
    s32 *unk_00;
};

class E_08899C08 {
public:
    B_08899C08 *unk_00;
    C_08899C08 *unk_04;
    P_08899C08 unk_08;
    R_08899C08 unk_0C;

    E_08899C08() {}
    E_08899C08(E_08899C08 &arg0) :
        unk_00(*(B_08899C08 *volatile *)&arg0.unk_00),
        unk_04(arg0.unk_04) {
        unk_08.unk_00 = *(void *volatile *)&arg0.unk_08.unk_00;
        unk_0C.unk_00 = arg0.unk_0C.unk_00;
        if (unk_08.unk_00 != NULL) ++*unk_0C.unk_00;
    }

    void f_04() {
        if (unk_08.unk_00 != NULL) {
            --**(s32 *volatile *)&unk_0C.unk_00;
            s32 *q = unk_0C.unk_00;
            s32 r;
            if (q != NULL) {
                r = *q;
            } else {
                r = 0;
            }
            if (r == 0) {
                unk_04->v1(unk_08.unk_00, q, unk_00);
                func_0889A26C(unk_08.unk_00, unk_00);
            }
        }
    }

    void f_00() {
        void **temp;
        s32 *temp2;
        s32 temp3;

        if (this != NULL && (temp = &unk_08.unk_00, *temp != NULL)) {
            --*unk_0C.unk_00;
            temp2 = unk_0C.unk_00;
            if (temp2 != NULL) {
                temp3 = *temp2;
            } else {
                temp3 = 0;
            }
            if (temp3 == 0) {
                unk_04->v1(*temp, temp2, unk_00);
                func_0889A26C(*temp, unk_00);
            }
        }
    }
};

class S_08899C08 {
public:
    u8 pad_00[0x10];
};

typedef struct {
    E_08899C08 *unk_00;
    u32 unk_04;
} V;

typedef struct {
    B_08899C08 *unk_00;
    u8 pad_04[0x370];
    void *unk_374;
    u8 pad_378[8];
    u8 unk_380;
    u8 pad_381[0x17];
    u8 unk_398[0x40];
    V unk_3D8;
} S;

s32 func_08827A50(s32, s32);
extern s32 func_08827AD4(void);
s32 func_08898D48(void);
void *func_08891660(void *, void *, B_08899C08 *, S *);
void *func_0889A33C(void *, void *, B_08899C08 *, S *);
void func_08899010(S_08899C08 *, void *, B_08899C08 *);
void func_08898FCC(S_08899C08 *, void *);
void func_08898A80(S_08899C08 *, s32);

inline void *operator new(unsigned int, void *p) { return p; }

void func_08898D50(S *arg0) {
    E_08899C08 e;
    S_08899C08 h;
    E_08899C08 *p;
    V *v;
    u32 *n;
    u32 i;
    B_08899C08 *a;
    void *q;

    p = arg0->unk_3D8.unk_00;
    v = &arg0->unk_3D8;
    if ((u32)p != (u32)(p + arg0->unk_3D8.unk_04)) {
        n = &arg0->unk_3D8.unk_04;
        do {
            if (p != NULL) p->f_00();
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_3D8.unk_04 = 0;
    i = arg0->unk_3D8.unk_04;
    if (i < (u32)func_08898D48()) {
        do {
            a = arg0->unk_00;
            if ((q = (void *)func_08827A50(0x98C0, (s32)a)) != NULL) {
                q = func_08891660(q, arg0->unk_374, arg0->unk_00, arg0);
            }
            e.unk_00 = a;
            e.unk_04 = (C_08899C08 *)func_08827AD4();
            e.unk_08.unk_00 = q;
            s32 *r = e.unk_04->v0(q, *(B_08899C08 *volatile *)&e.unk_00);
            *r = 1;
            E_08899C08 *z = arg0->unk_3D8.unk_00 + arg0->unk_3D8.unk_04;
            e.unk_0C.unk_00 = r;
            new (z) E_08899C08(e);
            ++arg0->unk_3D8.unk_04;
            e.f_04();
            i = arg0->unk_3D8.unk_04;
        } while (i < (u32)func_08898D48());
    }
    if ((q = (void *)func_08827A50(0x3A0, (s32)arg0->unk_00)) != NULL) {
        q = func_0889A33C(q, arg0->unk_374, arg0->unk_00, arg0);
    }
    func_08899010(&h, q, arg0->unk_00);
    func_08898FCC(&h, arg0->unk_398);
    func_08898A80(&h, -1);
    arg0->unk_380 = 1;
}
}
