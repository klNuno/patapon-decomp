#include "common.h"
extern "C" {
struct A {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};
struct H {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};
struct V {
    u8 pad_00[0x10];
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
    virtual void unk_44();
    virtual s32 unk_48(u8 *);
};
struct E {
    u8 pad_00[0x40];
    V *unk_40;
    u8 pad_44[0x4C];
};
struct F {
    u8 pad_00[0x60];
    s16 unk_60;
    s16 unk_62;
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
    F *unk_2A0[11];
    s32 unk_2CC;
    u8 unk_2D0[4];
};
void func_08923C88(void *);
void func_089302A4(void *);
void func_08930334(char *, s32, s32);
extern s32 func_088E5034(s32);
G *func_088E5DA8(s32, s8 *);
void func_088E21D0(H *, s32, u8 *);
void func_0886A45C(s32, s32);
s32 func_0893AF70(s32, u8 *);
void func_08930340(void *, u32, s32, s32);
R *func_08923B30(void *);
void func_08931CEC(void *, s32, s32, s32, void *, s32, s32);

void func_088F99C8(S *arg0)
{
    H h;
    s32 tmp[2];
    s32 i;
    s32 n;
    F *f;
    s32 x;
    s8 *temp;
    G *g;
    s32 r;
    R *q;
    s8 *p;

    func_08923C88(arg0->unk_34);
    func_089302A4(arg0->unk_2D0);
    func_08930334((char *)arg0->unk_2D0, (s32)&arg0->unk_F0[func_088E5034((s32)arg0)], -1);
    if (arg0->unk_2CC == 0) {
        f = arg0->unk_2A0[func_088E5034((s32)arg0)];
        n = f->unk_62;
        i = 0;
        if (n > 0) {
            p = (s8 *)f;
            do {
                temp = p + 0x64;
                if (*temp != 0) {
                    g = func_088E5DA8(arg0->unk_E0, temp);
                    r = arg0->unk_F0[func_088E5034((s32)arg0)].unk_40->unk_48(g->unk_24);
                    if (r >= 0) {
                        if (f->unk_60 == 0) {
                            s32 *c;
                            func_088E21D0(&h, arg0->unk_E4, g->unk_44);
                            x = h.unk_08;
                            if (*(volatile s32 *)&h.unk_08 != 0) {
                                *(s32 *)*(volatile s32 *)&h.unk_0C -= 1;
                                c = h.unk_0C;
                                if ((c != NULL ? *c : 0) == 0) {
                                    h.unk_04->unk_0C(h.unk_08, c, h.unk_00);
                                    func_0886A45C(h.unk_08, h.unk_00);
                                }
                            }
                        } else {
                            x = func_0893AF70(arg0->unk_E8, g->unk_44);
                        }
                        func_08930340(arg0->unk_2D0, i, x, r);
                    }
                    if (g->unk_84 >= 0) {
                        r = arg0->unk_F0[func_088E5034((s32)arg0)].unk_40->unk_48(g->unk_64);
                        if (r >= 0) {
                            q = func_08923B30(arg0->unk_34);
                            q->unk_00 = r;
                            func_08931CEC(tmp, (s32)(arg0->unk_D8 + 0x1040), g->unk_84, (s32)q->unk_04, NULL, 0, 0);
                            q->unk_10 = tmp[0];
                            q->unk_14 = tmp[1];
                        }
                    }
                }
                ++i;
                p += 0x20;
            } while (i < n);
        }
    }
}
}
