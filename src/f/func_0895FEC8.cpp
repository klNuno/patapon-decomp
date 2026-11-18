#include "common.h"

extern "C" {

struct V {
    virtual void func_08();
    virtual void func_0C(void *, s32 *, s32);
};

struct C {
    s32 *unk_00;

    s32 func_00() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }

    s32 func_04() {
        --*unk_00;
        return func_00();
    }
};

struct E {
    s32 unk_00;
    V *unk_04;
    void *unk_08;
    C unk_0C;
};

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} P;

typedef struct {
    u8 pad_00[0x8];
    u8 *unk_08;
    u8 pad_0C[0x14];
    P *unk_20;
    u8 pad_24[0xC];
    u8 unk_30[0x28];
    u8 *unk_58;
    u8 pad_5C[4];
    u8 unk_60[0x1C];
    u8 *unk_7C;
    u8 pad_80[4];
    u8 unk_84[0x2C];
    u8 unk_B0[0x1C];
    u8 *unk_CC;
    u8 pad_D0[8];
    s32 unk_D8;
    u8 pad_DC[8];
    u8 unk_E4[0x24];
    u8 *unk_108;
    u8 pad_10C[0x18];
    E unk_124;
    E unk_134;
    E unk_144;
    E unk_154;
    E unk_164;
    u8 unk_174[0x1C];
    u8 *unk_190;
    void *unk_194;
} S;

struct L_0895F0B8;
struct A_0895F660;
struct B_0895F660;
struct T0895FA88;

void func_08961738(s32 arg0);
void func_08962AC8(void *, void *);
void func_0895F6F4(A_0895F660 *);
void func_089617CC(void *, s32);
void func_0896191C(void *, s32);
void func_08961820(void *, s32);
void func_08961874(void *, s32);
void func_089618C8(void *, s32);
void func_0895FCC8(L_0895F0B8 *);
void func_0895FC58(B_0895F660 *, s32);
T0895FA88 *func_0895FA88(T0895FA88 *arg0, s16 arg1);
void func_088CE530(void *, s32);
void func_0895EFE4(void *, s32);
void func_0880416C(void *);

extern u8 D_08A47974[], D_08A47A44[], D_08A47A60[], D_08A47A78[], D_08A47A88[];
extern u8 D_08A47AD4[], D_08A47AE0[], D_08A47AF0[];

S *func_0895FEC8(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_08 = D_08A47A44;
        arg0->unk_58 = D_08A47A60;
        arg0->unk_7C = D_08A47A78;
        arg0->unk_CC = D_08A47A88;
        func_08961738((s32)arg0);
        void *h = arg0->unk_194;
        if (h != NULL) {
            func_08962AC8(arg0->unk_20->unk_10, h);
            arg0->unk_194 = NULL;
            arg0->unk_D8 = -1;
        }
        A_0895F660 *a = (A_0895F660 *)arg0->unk_174;
        if (a != NULL) {
            arg0->unk_190 = D_08A47AE0;
            func_0895F6F4(a);
        }
        if (&arg0->unk_164 != NULL) {
            if (&arg0->unk_164 != NULL) {
                void **p = &arg0->unk_164.unk_08;
                if (*p != NULL) {
                    C *c = &arg0->unk_164.unk_0C;
                    if (c->func_04() == 0) {
                        arg0->unk_164.unk_04->func_0C(*p, *(s32 **)c, arg0->unk_164.unk_00);
                        func_089617CC(*p, arg0->unk_164.unk_00);
                    }
                }
            }
        }
        if (&arg0->unk_154 != NULL) {
            if (&arg0->unk_154 != NULL) {
                void **p = &arg0->unk_154.unk_08;
                if (*p != NULL) {
                    C *c = &arg0->unk_154.unk_0C;
                    if (c->func_04() == 0) {
                        arg0->unk_154.unk_04->func_0C(*p, *(s32 **)c, arg0->unk_154.unk_00);
                        func_0896191C(*p, arg0->unk_154.unk_00);
                    }
                }
            }
        }
        if (&arg0->unk_144 != NULL) {
            if (&arg0->unk_144 != NULL) {
                void **p = &arg0->unk_144.unk_08;
                if (*p != NULL) {
                    C *c = &arg0->unk_144.unk_0C;
                    if (c->func_04() == 0) {
                        arg0->unk_144.unk_04->func_0C(*p, *(s32 **)c, arg0->unk_144.unk_00);
                        func_08961820(*p, arg0->unk_144.unk_00);
                    }
                }
            }
        }
        if (&arg0->unk_134 != NULL) {
            if (&arg0->unk_134 != NULL) {
                void **p = &arg0->unk_134.unk_08;
                if (*p != NULL) {
                    C *c = &arg0->unk_134.unk_0C;
                    if (c->func_04() == 0) {
                        arg0->unk_134.unk_04->func_0C(*p, *(s32 **)c, arg0->unk_134.unk_00);
                        func_08961874(*p, arg0->unk_134.unk_00);
                    }
                }
            }
        }
        if (&arg0->unk_124 != NULL) {
            if (&arg0->unk_124 != NULL) {
                void **p = &arg0->unk_124.unk_08;
                if (*p != NULL) {
                    C *c = &arg0->unk_124.unk_0C;
                    if (c->func_04() == 0) {
                        arg0->unk_124.unk_04->func_0C(*p, *(s32 **)c, arg0->unk_124.unk_00);
                        func_089618C8(*p, arg0->unk_124.unk_00);
                    }
                }
            }
        }
        L_0895F0B8 *b = (L_0895F0B8 *)arg0->unk_E4;
        if (b != NULL) {
            arg0->unk_108 = D_08A47AD4;
            func_0895FCC8(b);
            func_0895FC58((B_0895F660 *)arg0->unk_E4, -1);
        }
        A_0895F660 *c = (A_0895F660 *)arg0->unk_B0;
        if (c != NULL) {
            arg0->unk_CC = D_08A47AE0;
            func_0895F6F4(c);
        }
        if (arg0->unk_60 != NULL) {
            arg0->unk_7C = D_08A47AF0;
            func_0895FA88((T0895FA88 *)arg0->unk_84, -1);
            func_0895FC58((B_0895F660 *)arg0->unk_60, 0);
        }
        func_088CE530(arg0->unk_30, 0);
        if (arg0 != NULL) {
            arg0->unk_08 = D_08A47974;
            func_0895EFE4(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
