#include "common.h"

extern "C" {

typedef struct S S;
typedef struct T T;

struct S {
    s32 unk_00;
    s8 unk_04[0x80];
    s8 unk_84[0x80];
    s32 unk_104;
    T *unk_108;
    s32 unk_10C;
};

struct T {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0xC];
    char unk_50[0x80];
    s32 unk_D0;
    u8 pad_D4[0x34];
    T *unk_108;
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    const S *unk_08;
    s32 unk_0C;
} E;

struct A { E unk_00[23]; };

typedef struct {
    f32 unk_00;
    f32 unk_04;
} H;

typedef struct {
    H unk_00;
    H unk_08;
} F;

typedef struct {
    u8 pad_00[4];
    char unk_04[0x80];
    s32 unk_84;
    u8 *unk_88;
} B;

s32 func_08822AD0(char *, char *);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
s32 func_08858BD8(void);
s32 func_088690F8(u8 *, s32, s32, s32, s32, s32);
void func_0888ACC8(s32 **, E *, s32, s32, F *);
s32 func_0888AFAC(char *);
void func_0893D718(char *, char *);
void *func_0896CE18(void *, void *, s32, s32);
T *func_0896CFE0(T *, s32, s32);
s32 *func_08976030(s32);

extern s32 D_089DDF2C[];
extern H D_089F9C88[];
extern H D_089F9C90[];
extern A D_089F9CFC[];
extern char D_089F9E6C[];
extern char D_089F9E7C[];
extern u8 D_08A44CF8[];
extern u8 *D_08AD1E28[];


static inline s32 func_04(B *arg0, T *arg1)
{
    char *temp = arg1->unk_50;
    s32 result;
    if (arg0->unk_84 == arg1->unk_D0) {
        func_08822AD0(arg0->unk_04, temp);
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

void func_08884A74(s32 arg0, s32 *arg1, s32 arg2, S *arg3)
{
    s32 *a;
    S b;
    S c;
    volatile F d;
    A e;
    B f;

    u8 *temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    T *t = arg3->unk_108;
    s32 u = arg3->unk_104;
    T *p = func_0896CFE0(t, arg0, arg3->unk_00);

    if (*arg1 == D_089DDF2C[0]) {
        a = arg1;

        b = *arg3;
        b.unk_108 = p;

        c = *arg3;
        c.unk_108 = t;
        c.unk_104 = func_08858BD8();

        d.unk_00.unk_00 = D_089F9C88[0].unk_00;
        d.unk_00.unk_04 = D_089F9C88[0].unk_04;
        d.unk_08.unk_00 = D_089F9C90[0].unk_00;
        d.unk_08.unk_04 = D_089F9C90[0].unk_04;
        *(const S *volatile *)&d.unk_08.unk_00 = &b;

        e = D_089F9CFC[0];
        e.unk_00[0].unk_08 = &b;
        e.unk_00[1].unk_08 = &b;
        e.unk_00[2].unk_08 = &b;
        e.unk_00[4].unk_08 = &b;
        e.unk_00[5].unk_08 = &b;
        e.unk_00[6].unk_08 = &b;
        e.unk_00[7].unk_08 = &b;
        e.unk_00[8].unk_08 = &b;
        e.unk_00[9].unk_08 = &b;
        e.unk_00[10].unk_08 = &b;
        e.unk_00[11].unk_08 = &b;
        e.unk_00[12].unk_08 = &b;
        e.unk_00[13].unk_08 = &b;
        e.unk_00[14].unk_08 = &b;
        e.unk_00[15].unk_08 = &b;
        e.unk_00[16].unk_08 = &b;
        e.unk_00[17].unk_08 = &b;
        e.unk_00[18].unk_08 = &b;
        e.unk_00[19].unk_08 = &b;
        e.unk_00[20].unk_08 = &b;
        e.unk_00[21].unk_08 = &b;
        e.unk_00[22].unk_08 = &b;
        e.unk_00[3].unk_08 = &c;
        func_0888ACC8(&a, e.unk_00, 0x17, 0, (F *)&d);
    }

    t = (T *)func_0896CE18(p, D_089F9E6C, 0, 0);
    ((volatile B *)&f)->unk_88 = D_08A44CF8;
    func_08822BC4(D_089F9E7C);
    func_08822D5C(f.unk_04, D_089F9E7C, 0x7F);
    f.unk_04[0x7F] = 0;
    func_0893D718(f.unk_04, f.unk_04);
    f.unk_84 = func_0888AFAC(f.unk_04);
    if (t != NULL && func_04(&f, p) == 0) {
        T *q;
        arg1 = func_08976030(t->unk_108->unk_40);
        t = (T *)(temp + 0xEAA00);
        q = (T *)func_0896CE18(t, arg1, 0, 0);
        if (q == NULL) {
            q = func_0896CFE0(t, (s32)arg1, arg3->unk_00);
        }
        if (q != NULL) {
            func_088690F8(temp, (s32)q, (s32)p, arg3->unk_00, u, 1);
        }
    }
    ((volatile B *)&f)->unk_88 = D_08A44CF8;
}

}
