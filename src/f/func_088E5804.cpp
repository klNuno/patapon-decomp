#include "common.h"

extern "C" {

struct V0 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};
struct RC {
    s32 *unk_00;
    s32 get() { return unk_00 != NULL ? *unk_00 : 0; }
    s32 release() { --*unk_00; return get(); }
};
struct H {
    s32 unk_00;
    V0 *unk_04;
    s32 unk_08;
    RC unk_0C;
};
struct V {
    u8 pad_00[0x10];
    virtual void v08(); virtual void v0C(); virtual void v10();
    virtual void v14(); virtual void v18(); virtual void v1C();
    virtual void v20(); virtual void v24(); virtual void v28();
    virtual void v2C(); virtual void v30(); virtual void v34();
    virtual void v38(); virtual void v3C(); virtual void v40();
    virtual void v44(); virtual s32 v48(u8 *);
};
struct E {
    u8 pad_00[0x40];
    V *unk_40;
    u8 pad_44[0x4C];
};
struct B {
    u8 pad_00[0x60];
    s16 unk_60;
    s16 unk_62;
    s8 unk_64[0x20];
};
struct G {
    u8 pad_00[0x24];
    u8 unk_24[0x20];
    u8 unk_44[0x20];
    u8 unk_64[0x20];
    s32 unk_84;
};
struct R {
    s32 unk_00;
    u8 unk_04[0xC];
    s32 unk_10;
    s32 unk_14;
};
struct S {
    u8 pad_00[0x34];
    u8 unk_34[0xA4];
    u8 *unk_D8;
    u8 pad_DC[4];
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
    u8 pad_EC[4];
    E unk_F0[3];
    B *unk_2A0[3];
    s32 unk_2AC;
    s32 unk_2B0;
    u8 pad_2B4[0x18];
    s32 unk_2CC;
    char unk_2D0[4];
};

void func_08923C88(void *);
void func_089302A4(void *);
void func_08930334(char *, s32, s32);
G *func_088E5DA8(s32, s8 *);
void func_088E21D0(H *, s32, u8 *);
void func_0886A45C(s32, s32);
s32 func_0893AF70(s32, u8 *);
void func_08930340(void *, s32, s32, s32);
R *func_08923B30(void *);
void func_08931CEC(s32 *, u8 *, s32, void *, s32, s32, s32);

void func_088E5804(S *arg0) {
    H h;
    s32 v[2];
    G *g;
    u32 i;
    s32 p;
    s32 r;
    B *b;
    B *z;

    func_08923C88(arg0->unk_34);
    func_089302A4(arg0->unk_2D0);
    func_08930334(arg0->unk_2D0, (s32)&arg0->unk_F0[arg0->unk_2AC], -1);
    if (arg0->unk_2CC != 0) {
        return;
    }
    z = arg0->unk_2A0[arg0->unk_2AC];
    if (z->unk_62 < arg0->unk_2B0) {
        return;
    }
    i = 0;
    b = z;
    do {
        s8 *s = b->unk_64;
        if (*s != 0) {
            g = func_088E5DA8(arg0->unk_E0, s);
            r = arg0->unk_F0[arg0->unk_2AC].unk_40->v48(g->unk_24);
            if (r >= 0) {
                if (z->unk_60 == 0) {
                    func_088E21D0(&h, arg0->unk_E4, g->unk_44);
                    p = h.unk_08;
                    if (*(volatile s32 *)&h.unk_08 != 0) {
                        --**(s32 *volatile *)&h.unk_0C;
                        s32 *c = h.unk_0C.unk_00;
                        if ((c != NULL ? *c : 0) == 0) {
                            h.unk_04->v0C(h.unk_08, c, h.unk_00);
                            func_0886A45C(h.unk_08, h.unk_00);
                        }
                    }
                } else {
                    p = func_0893AF70(arg0->unk_E8, g->unk_44);
                }
                func_08930340(arg0->unk_2D0, i, p, r);
            }
            if (g->unk_84 >= 0) {
                r = arg0->unk_F0[arg0->unk_2AC].unk_40->v48(g->unk_64);
                if (r >= 0) {
                    R *t = func_08923B30(arg0->unk_34);
                    t->unk_00 = r;
                    func_08931CEC(v, arg0->unk_D8 + 0x1040, g->unk_84, t->unk_04, 0, 0, 0);
                    t->unk_10 = v[0];
                    t->unk_14 = v[1];
                }
            }
        }
        i++;
        b = (B *)((u8 *)b + 0x20);
    } while (i < 6);
}

}
