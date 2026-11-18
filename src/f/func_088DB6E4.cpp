#include "common.h"

extern "C" {

struct V_088DB6E4 {
    virtual void unk_08();
    virtual void unk_0C();
};

struct W_088DB6E4 {
    u8 pad_00[0x91C];
    virtual void unk_08();
    virtual void unk_0C();
};

struct U_088DB6E4 {
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
    virtual void unk_3C();
    virtual void unk_40();
};

struct E_088DB6E4 {
    u8 pad_00[0x424];
};

struct T_088DB6E4 {
    u8 pad_00[0x10];
};

struct H_088DB6E4 {
    u8 pad_00[0x1BEF4];
    u8 unk_1BEF4[0xA000];
    u8 unk_25EF4[0xA000];
};

struct G_088DB6E4 {
    u8 pad_00[0x1498];
    H_088DB6E4 *unk_1498;
};

struct F_088DB6E4 {
    u8 pad_00[0x42820];
    G_088DB6E4 *unk_42820;
};

struct S_088DB6E4 {
    u8 pad_00[0x18];
    u8 unk_18[8];
    void *unk_20;
    u8 pad_24[0x4];
    char **unk_28;
    u8 pad_2C[0x2E394];
    u8 unk_2E3C0[4];
    u8 pad_2E3C4[0x2219C];
    u8 unk_50560[4];
    u8 pad_50564[0x18C];
    u8 unk_506F0[4];
    u8 pad_506F4[0x4AE4C];
    u8 unk_9B540[4];
    u8 pad_9B544[0x20AC];
    u8 unk_9D5F0[4];
    u8 pad_9D5F4[0x4174];
    u8 unk_A1768[4];
    u8 pad_A176C[0x10A80];
    s32 unk_B21EC;
    u8 unk_B21F0[4];
    u8 pad_B21F4[0x6E34C];
    u8 unk_120540[4];
    u8 pad_120544[0xD8C];
    u8 unk_1212D0[4];
    u8 pad_1212D4[0x84D8];
    E_088DB6E4 *unk_1297AC;
    s32 unk_1297B0;
    u8 pad_1297B4[0x8];
    W_088DB6E4 *unk_1297BC;
    u8 pad_1297C0[0x1099C];
    E_088DB6E4 *unk_13A15C;
    s32 unk_13A160;
    u8 pad_13A164[0x8];
    W_088DB6E4 *unk_13A16C;
    u8 pad_13A170[0x8520];
    u8 unk_142690[4];
    u8 pad_142694[0x84E70];
    u8 unk_1C7504[4];
    u8 pad_1C7508[0x18];
    u8 unk_1C7520[0x10];
    u8 pad_1C7530[0x10A40];
    u8 unk_1D7F70[4];
};

struct Obj_08989868;
struct S_088F2DA4;
struct T_088D9864;
struct Obj_088D87B0;
struct T088C627C_H;
struct N;

s32 func_088148F0(s32, s32);
void func_0881F5C0(void *, s32, s32);
s32 func_088586E8(void);
void func_08866028(void *);
void func_0887739C(void *);
void func_088792C0(s32, f32);
void func_088C60C4(void *);
T088C627C_H *func_088C627C(T088C627C_H *arg0, s16 arg1);
Obj_088D87B0 *func_088D87B0(Obj_088D87B0 *arg0, s16 arg1);
void func_088D8908(void *);
void func_088D9AB8(T_088D9864 *, s32);
void func_088DBA7C(char *arg0, char *arg1);
char *func_088DBAC0(char *arg0);
void func_088DBAD8(char *arg0, char *arg1);
char *func_088DBB1C(char *arg0);
void func_088DF4DC(s32 arg0, char **arg1);
void func_088F2F40(S_088F2DA4 *);
void func_08910E10(s32);
void func_08926090(void *);
void func_0892E524(N *arg0);
void func_08955C30(void *);
void func_08989974(Obj_08989868 *);
void func_08997830(void *);
s32 func_089B53D8(s32);
void func_089C6854(void *);
extern void *D_08AD1E28[];
extern void *D_08AD8DD8[];

static inline void *unk_00(void *arg0) {
    return arg0 != NULL ? arg0 : NULL;
}

void func_088DB6E4(S_088DB6E4 *arg0) {
    T_088DB6E4 temp;
    T_088DB6E4 temp2;
    s32 p;
    E_088DB6E4 *q;
    E_088DB6E4 *r;
    E_088DB6E4 *s;
    W_088DB6E4 *v;
    G_088DB6E4 *g;
    H_088DB6E4 *h;

    func_08997830(arg0->unk_B21F0);
    ((V_088DB6E4 *)arg0->unk_120540)->unk_0C();
    func_08989974((Obj_08989868 *)arg0->unk_1212D0);
    func_088792C0(func_089B53D8(func_088586E8()), -1.0f);
    p = arg0->unk_B21EC;
    if (p != 0) {
        func_08910E10(p);
        func_088DF4DC(arg0->unk_B21EC, arg0->unk_28);
        arg0->unk_B21EC = 0;
    }
    q = arg0->unk_1297AC;
    r = *(E_088DB6E4 *volatile *)(u32)&arg0->unk_1297AC;
    if (q != r + arg0->unk_1297B0) {
        s = r + *(volatile s32 *)(u32)&arg0->unk_1297B0;
        do {
            ++q;
        } while (q != s);
    }
    arg0->unk_1297B0 = 0;
    v = arg0->unk_1297BC;
    if (v != NULL) {
        v->unk_0C();
    }
    q = arg0->unk_13A15C;
    r = *(E_088DB6E4 *volatile *)(u32)&arg0->unk_13A15C;
    if (q != r + arg0->unk_13A160) {
        s = r + *(volatile s32 *)(u32)&arg0->unk_13A160;
        do {
            ++q;
        } while (q != s);
    }
    arg0->unk_13A160 = 0;
    v = arg0->unk_13A16C;
    if (v != NULL) {
        v->unk_0C();
    }
    func_088D8908(arg0->unk_1C7504);
    func_088D9AB8((T_088D9864 *)arg0->unk_142690, 0);
    func_08926090(arg0->unk_9B540);
    func_08926090(arg0->unk_9D5F0);
    func_088F2F40((S_088F2DA4 *)arg0->unk_50560);
    func_089C6854(arg0->unk_A1768);
    func_088DBB1C((char *)&temp);
    func_088DBAD8((char *)&temp, (char *)arg0->unk_1C7520);
    func_088D87B0((Obj_088D87B0 *)&temp, -1);
    func_088C60C4(arg0->unk_506F0);
    func_0892E524((N *)unk_00(D_08AD8DD8[0]));
    U_088DB6E4 *u = (U_088DB6E4 *)arg0->unk_20;
    if (u != NULL) {
        u->unk_40();
    }
    func_088DBAC0((char *)&temp2);
    func_088DBA7C((char *)&temp2, (char *)arg0->unk_18);
    func_088C627C((T088C627C_H *)&temp2, -1);
    func_08866028(arg0->unk_1D7F70);
    g = ((F_088DB6E4 *)unk_00(D_08AD1E28[0]))->unk_42820;
    h = g->unk_1498;
    func_0881F5C0(h->unk_1BEF4, 0, 0xA000);
    func_0881F5C0(h->unk_25EF4, 0, 0xA000);
    func_088148F0(4, 0);
    func_08955C30(arg0->unk_2E3C0);
    func_0887739C(g);
}

}
