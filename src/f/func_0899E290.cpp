#include "common.h"

extern "C" {

struct B {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct T {
    char unk_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 unk_48;
    u8 unk_49;
    u8 unk_4A;
    u8 unk_4B;
    s16 unk_4C;
    s16 unk_4E;
    u8 pad_50[0x24];
    u8 unk_74[0x28];
    s32 unk_9C;
    s32 unk_A0;
    u8 pad_A4[0x28];
    s32 unk_CC;
    s32 unk_D0;
    u8 pad_D4[0x28];
    s32 unk_FC;
    s32 unk_100;
};

struct S {
    u8 pad_00[0x670];
    T *unk_670;
    u8 pad_674[0xC];
    B unk_680;
};

struct U {
    u8 pad_00[0x14];
    s32 unk_14;
};

struct G {
    u8 pad_00[0x1498];
    U *unk_1498;
};

void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08877698(G *);
extern char D_089DD524[];
extern G *D_08AD1F14[];

void func_0899E290(S *arg0) {
    T *p;
    G *g;

    func_08878864(func_089B53D8(func_088586E8()), 0x21000A, 2, 1.0f, 0.0f, 0.0f);
    arg0->unk_680.unk_14(7, 1);
    p = arg0->unk_670;
    func_0881F5C0(p->unk_00, 0, 0x20);
    func_08822B3C(p->unk_00, D_089DD524);
    p->unk_20 = -1;
    p->unk_28 = 0;
    p->unk_2C = 0;
    p->unk_30 = 0;
    p->unk_34 = 0;
    p->unk_38 = 1;
    p->unk_3C = 0;
    p->unk_40 = 0;
    p->unk_44 = 0;
    p->unk_4B = 0xFF;
    p->unk_4A = 0xFF;
    p->unk_49 = 0xFF;
    p->unk_48 = 0xFF;
    p->unk_4C = -1;
    p->unk_4E = -1;
    func_0881F5C0(p->unk_74, 0, 0x90);
    p->unk_9C = -1;
    p->unk_A0 = -1;
    p->unk_CC = -1;
    p->unk_D0 = -1;
    p->unk_FC = -1;
    p->unk_100 = -1;
    g = D_08AD1F14[0];
    g = g != NULL ? g : NULL;
    --g->unk_1498->unk_14;
    g = D_08AD1F14[0];
    g = g != NULL ? g : NULL;
    func_08877698(g);
}

}
