#include "common.h"

extern "C" {

class B_08899C08 {
public:
    virtual void v0();
};

class C_08899C08 {
public:
    virtual void v0();
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

    void unk_10() {
        void **p;
        s32 *q;
        s32 n;

        if (this != NULL && (p = &unk_08.unk_00, *p != NULL)) {
            --*unk_0C.unk_00;
            q = unk_0C.unk_00;
            if (q != NULL) {
                n = *q;
            } else {
                n = 0;
            }
            if (n == 0) {
                unk_04->v1(*p, q, unk_00);
                func_0889A26C(*p, unk_00);
            }
        }
    }
};

struct A_08898A80 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08898A80 {
    s32 *unk_00;
    s32 unk_04() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 unk_08() {
        --*unk_00;
        return unk_04();
    }
};

struct SP_08898A80 {
    void *unk_00;
    C_08898A80 unk_04;
};

typedef struct {
    s32 unk_00;
    A_08898A80 *unk_04;
    SP_08898A80 unk_08;
} Obj_08898A80;

class B {
public:
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
};

typedef struct {
    E_08899C08 *unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x30];
    V unk_30;
} W;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[0x24];
    Obj_08898A80 unk_398;
    W unk_3A8;
    u8 pad_3E0[0x8];
    u8 unk_3E8[0xC38];
    u8 unk_1020[0x20];
    u8 unk_1040[1];
} S;

extern u8 D_08A45790[];
extern u8 D_08A457AC[];
extern u8 D_08A457C4[];
extern u8 D_08A457D4[];
extern u8 D_08A45820[];

void func_0880416C(void *);
void func_0889A2C0(void *, s32);
void func_088D5C40(void *, s32);
void func_0891DFC0(void *, s32);
void func_0893FE8C(void *, s32);
void func_089676CC(void *, s32);

S *func_08898B3C(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A45790;
        arg0->unk_58 = D_08A457AC;
        arg0->unk_7C = D_08A457C4;
        arg0->unk_CC = D_08A457D4;
        arg0->unk_370 = D_08A45820;
        ((B *)arg0)->unk_18();
        func_0893FE8C(arg0->unk_1040, -1);
        func_0891DFC0(arg0->unk_1020, -1);
        func_088D5C40(arg0->unk_3E8, -1);
        if (&arg0->unk_3A8 != NULL) {
            V *v = &arg0->unk_3A8.unk_30;
            E_08899C08 *p = arg0->unk_3A8.unk_30.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_3A8.unk_30.unk_04)) {
                s32 *n = &arg0->unk_3A8.unk_30.unk_04;
                do {
                    if (p != NULL) {
                        p->unk_10();
                    }
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_3A8.unk_30.unk_04 = 0;
        }
        if (&arg0->unk_398 != NULL) {
            if (&arg0->unk_398 != NULL) {
                SP_08898A80 *s = &arg0->unk_398.unk_08;
                if (arg0->unk_398.unk_08.unk_00 != NULL) {
                    C_08898A80 *c = &arg0->unk_398.unk_08.unk_04;
                    if (c->unk_08() == 0) {
                        arg0->unk_398.unk_04->v1(s->unk_00, *(s32 **)c, arg0->unk_398.unk_00);
                        func_0889A2C0(s->unk_00, arg0->unk_398.unk_00);
                    }
                }
            }
        }
        func_089676CC(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
