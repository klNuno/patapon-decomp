#include "common.h"
extern "C" {
class V {
public:
    virtual void unk_08();
    virtual void unk_0C();
};
class D {
public:
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};
void func_0886A45C(s32, s32);
struct H {
    s32 unk_00;
    D *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            --*c;
            s32 *q = unk_0C;
            if ((q != NULL ? *q : 0) == 0) {
                unk_04->unk_0C(p, q, unk_00);
                func_0886A45C(p, unk_00);
            }
        }
    }
};
typedef struct {
    H *unk_00;
    s32 unk_04;
} W;
typedef struct {
    u8 pad_00[0x60];
} E;
typedef struct {
    E *unk_00;
    s32 unk_04;
} U;
typedef struct {
    u8 pad_00[0x80];
    u8 *unk_80;
} B;
typedef struct {
    u8 pad_00[0x28];
    u8 * unk_28;
    u8 pad_2C[0x14];
    B unk_40;
    u8 pad_C4[0x10C];
    B unk_1D0;
    u8 pad_254[0x14C];
    u8 unk_3A0;
    u8 pad_3A1[0x5F];
    u8 unk_400;
    u8 pad_401[0xD0F];
    u8 unk_1110;
    u8 pad_1111[0xC7F];
    u8 unk_1D90;
    u8 pad_1D91[0x127F];
    u8 * unk_3010;
    u8 unk_3014;
    u8 pad_3015[0xD83];
    U unk_3D98;
    u8 pad_3DA0[0x14];
    u8 unk_3DB4;
    u8 pad_3DB5[0x93];
    W unk_3E48;
} S;
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_088CE530(void *, s32);
void func_089136C0(void *, s32);
void func_08952CE0(void *, s32);
void func_089822F4(void *, s32);
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern u8 D_08A47EE8[];
extern u8 D_08A48158[];

S *func_08982394(S *arg0, s16 arg1)
{
    H *p;
    W *w;
    s32 *n;
    E *e;
    U *u;
    V *v;
    if (arg0 != NULL) {
        arg0->unk_28 = D_08A48158;
        if (&arg0->unk_3DB4 != NULL) {
            p = arg0->unk_3E48.unk_00;
            w = &arg0->unk_3E48;
            if ((u32)p != (u32)(p + arg0->unk_3E48.unk_04)) {
                n = &arg0->unk_3E48.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL)
                            p->release();
                    }
                    p++;
                } while (p != w->unk_00 + *n);
            }
            arg0->unk_3E48.unk_04 = 0;
        }
        v = (V *)&arg0->unk_3010;
        if (v != NULL) {
            arg0->unk_3010 = D_08A44CAC;
            if (v != NULL) {
                arg0->unk_3010 = D_08A44C60;
                v->unk_0C();
                if (&arg0->unk_3014 != NULL) {
                    e = arg0->unk_3D98.unk_00;
                    u = &arg0->unk_3D98;
                    if ((u32)e != (u32)(e + arg0->unk_3D98.unk_04)) {
                        do {
                            e++;
                        } while (e != u->unk_00 + arg0->unk_3D98.unk_04);
                    }
                    arg0->unk_3D98.unk_04 = 0;
                }
                if (&arg0->unk_3010 != NULL)
                    arg0->unk_3010 = D_08A44C14;
            }
        }
        func_08804000(&arg0->unk_1D90, func_08952CE0, 0x190, 8);
        func_08804000(&arg0->unk_1110, func_08952CE0, 0x190, 8);
        func_08804000(&arg0->unk_400, func_089822F4, 0x1A0, 8);
        func_089136C0(&arg0->unk_3A0, -1);
        if (&arg0->unk_1D0 != NULL) {
            arg0->unk_1D0.unk_80 = D_08A47EE8;
            func_08865F78(&arg0->unk_1D0, 0);
        }
        if (&arg0->unk_40 != NULL) {
            arg0->unk_40.unk_80 = D_08A47EE8;
            func_08865F78(&arg0->unk_40, 0);
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0)
            func_0880416C(arg0);
    }
    return arg0;
}
}
