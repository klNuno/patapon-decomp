#include "common.h"

typedef struct {
    f32 unk_00[3];
} PMF;

typedef struct {
    void *unk_00;
    PMF unk_04;
    s32 *unk_10;
} I;

typedef struct {
    void *unk_00;
    s32 unk_04;
    I unk_08;
    void *unk_1C;
} F;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0xF90];
    E *unk_F90;
    u8 pad_F94[4];
    s32 unk_F98;
    u8 pad_F9C[0x90];
    s32 unk_102C;
    u8 pad_1030[0x10];
    u8 unk_1040;
    u8 pad_1041[3];
    s32 unk_1044;
    f32 unk_1048;
    u8 pad_104C[0x1C];
    F unk_1068;
    F unk_1088;
} S;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[4];
    s32 unk_106C;
    u8 pad_1070[0x3E10];
    char unk_4E80[0x33758];
    s32 unk_385D8;
} T;

extern f32 D_08A07288[];
extern f32 D_08A07290[];
extern f32 D_08A07294[];
extern f32 D_08A07298[];
extern f32 D_08A072A0[];
extern f32 D_08A072A8[];
extern f32 D_08A072AC[];
extern f32 D_08A072B0[];
extern f32 D_08A072B8[];
extern u8 D_08A48610[];
extern u8 D_08A4861C[];
extern u8 D_08A48628[];
extern u8 D_08A48634[];
extern u8 D_08A48640[];
extern u8 D_08A4864C[];
extern u8 D_08A48668[];
extern u8 D_08A48674[];

void func_0881F120(void *, void *, s32);
s32 func_08998080(s32, s32);
s32 func_089A04FC(char *arg0);
void func_0899A9F4(S *arg0, s32 arg1, F *arg2, F *arg3);

void func_089A5010(T *arg0, s32 arg1) {
    F a;
    F b;
    F c;
    F d;
    PMF x;
    volatile PMF y;
    PMF z;
    PMF w;
    I *p;
    S *r;

    arg0->unk_385D8 = 0;
    if (arg1 != 1) {
        a.unk_04 = 0;
        x.unk_00[0] = D_08A07288[1];
        x.unk_00[1] = D_08A07290[0];
        x.unk_00[2] = D_08A07294[0];
        a.unk_1C = D_08A4864C;
        p = &a.unk_08;
        if (p != NULL) {
            p->unk_00 = D_08A48634;
            p->unk_00 = D_08A48674;
            p->unk_04 = x;
            p->unk_10 = (s32 *)arg0;
        }
        a.unk_00 = p;

        y.unk_00[0] = D_08A07298[0];
        b.unk_04 = 0;
        y.unk_00[1] = D_08A07298[1];
        y.unk_00[2] = D_08A072A0[0];
        b.unk_1C = D_08A48640;
        p = &b.unk_08;
        if (p != NULL) {
            p->unk_00 = D_08A4861C;
            p->unk_00 = D_08A48668;
            p->unk_04 = y;
            p->unk_10 = (s32 *)arg0;
        }
        b.unk_00 = p;

        c.unk_1C = D_08A4864C;
        c.unk_04 = 0;
        if (&a != &c) {
            if (a.unk_00 != NULL) {
                if (a.unk_04 != 0) {
                    c.unk_04 = a.unk_04;
                    p = &c.unk_08;
                    if (p != NULL) {
                        z.unk_00[0] = D_08A072A0[1];
                        z.unk_00[1] = D_08A072A8[0];
                        z.unk_00[2] = D_08A072AC[0];
                        p->unk_00 = D_08A48634;
                        p->unk_00 = D_08A48628;
                        p->unk_04 = z;
                        p->unk_10 = &c.unk_04;
                    }
                    c.unk_00 = p;
                } else {
                    func_0881F120(&c.unk_08, &a.unk_08, 0x14);
                    c.unk_00 = &c.unk_08;
                }
            } else {
                c.unk_00 = NULL;
                c.unk_04 = 0;
            }
        }

        d.unk_1C = D_08A48640;
        d.unk_04 = 0;
        if (&b != &d) {
            if (b.unk_00 != NULL) {
                if (b.unk_04 != 0) {
                    d.unk_04 = b.unk_04;
                    p = &d.unk_08;
                    if (p != NULL) {
                        w.unk_00[0] = D_08A072B0[0];
                        w.unk_00[1] = D_08A072B0[1];
                        w.unk_00[2] = D_08A072B8[0];
                        p->unk_00 = D_08A4861C;
                        p->unk_00 = D_08A48610;
                        p->unk_04 = w;
                        p->unk_10 = &d.unk_04;
                    }
                    d.unk_00 = p;
                } else {
                    func_0881F120(&d.unk_08, &b.unk_08, 0x14);
                    d.unk_00 = &d.unk_08;
                }
            } else {
                d.unk_00 = NULL;
                d.unk_04 = 0;
            }
        }
        r = (S *)func_08998080(arg0->unk_1064, arg0->unk_106C);
        func_0899A9F4(r, func_089A04FC(arg0->unk_4E80), &c, &d);
    }
}
