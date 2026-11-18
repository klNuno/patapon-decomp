#include "common.h"

extern "C" {

struct A_088E5638 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct RC_088E5638 {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct H_088E5638 {
    s32 unk_00;
    A_088E5638 *unk_04;
    s32 unk_08;
    RC_088E5638 unk_0C;
};

struct VB_088E5638 {
    u8 pad_00[0x10];
};

struct V_088E5638 : VB_088E5638 {
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual s32 v48(u8 *);
};

typedef struct {
    V_088E5638 *unk_00;
    u8 pad_04[0x8C];
} E_088E5638;

typedef struct {
    u8 pad_00[0xD8];
    u8 *unk_D8;
    u8 pad_DC[0x4];
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
    u8 pad_EC[0x130 - 0xEC];
    E_088E5638 unk_130[2];
    u8 pad_250[0x2AC - 0x250];
    s32 unk_2AC;
    u8 pad_2B0[0x2D0 - 0x2B0];
    u8 unk_2D0[4];
} S_088E5638;

void func_0886A45C(s32, s32);
s32 func_088BCF94(s32);
s32 func_088C6484(void *);
void func_088E21D0(H_088E5638 *, s32, u8 *);
u8 *func_088E5E44(s32, s32);
void func_08930340(void *, s32, s32, s32);
void func_08930354(void *);
s32 func_0893AF70(s32, u8 *);
void func_089912C8(H_088E5638 *, s32, u8 *);

void func_088E5638(S_088E5638 *arg0, s32 arg1, s32 arg2) {
    H_088E5638 h;
    H_088E5638 g;
    u8 *e;
    s32 p;
    s32 r;

    if (arg2 < 0) {
        func_08930354(arg0->unk_2D0);
        return;
    }
    e = func_088E5E44(arg0->unk_E0, arg2);
    r = (*(V_088E5638 **)((u8 *)arg0 + 0x130 + arg0->unk_2AC * 0x90))->v48(e + 0x24);
    if (r >= 0) {
        func_088E21D0(&h, arg0->unk_E4, e + 0x44);
        p = h.unk_08;
        if (*(volatile s32 *)&h.unk_08 != 0) {
            RC_088E5638 *c = &h.unk_0C;
            if (c->release() == 0) {
                h.unk_04->v0C(h.unk_08, *(s32 **)c, h.unk_00);
                func_0886A45C(h.unk_08, h.unk_00);
            }
        }
        if (p == 0) {
            p = func_0893AF70(arg0->unk_E8, e + 0x44);
        }
        if (p == 0 && arg0->unk_D8 != NULL) {
            func_089912C8(&g, func_088BCF94(func_088C6484(&arg0->unk_D8[0x506F0])), e + 0x44);
            p = g.unk_08;
            if (*(volatile s32 *)&g.unk_08 != 0) {
                RC_088E5638 *c = &g.unk_0C;
                if (c->release() == 0) {
                    g.unk_04->v0C(g.unk_08, *(s32 **)c, g.unk_00);
                    func_0886A45C(g.unk_08, g.unk_00);
                }
            }
        }
        func_08930340(arg0->unk_2D0, arg1, p, r);
    }
}

}
