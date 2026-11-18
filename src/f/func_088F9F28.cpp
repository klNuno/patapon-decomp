#include "common.h"

extern "C" {

struct A {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct H {
    s32 unk_00;
    A *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};

struct VB {
    u8 pad_00[0x10];
};

struct V : VB {
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
    virtual s32 v48(s32);
};

typedef struct {
    u8 pad_00[0x40];
    V *unk_40;
    s32 unk_44;
} G;

typedef struct {
    u8 pad_00[0xE4];
    s32 unk_E4;
    u8 pad_E8[0x2D0 - 0xE8];
    u8 unk_2D0[0x360 - 0x2D0];
    G *unk_360;
} S;

typedef struct {
    s32 unk_00;
    s32 unk_04[3];
} P;

typedef struct {
    u8 pad_00[0xC];
} L;

void func_08945E64(L *);
void func_08945EC4(L *, s32);
u8 *func_08947BA8(L *, s32);
void func_088E21D0(H *, s32, u8 *);
void func_0886A45C(s32, s32);
s32 func_088F92A0(void *, u8 *);
void func_08930340(void *, u32, s32, s32);

void func_088F9F28(S *arg0, void *arg1, P *arg2) {
    L l;
    H h;
    u32 i;
    u8 *e;
    s32 p;
    s32 *q;
    s32 r;

    func_08945E64(&l);
    for (i = 0; i < 3; i++) {
        if (arg2->unk_04[i] >= 0) {
            e = func_08947BA8(&l, arg2->unk_04[i]);
            func_088E21D0(&h, arg0->unk_E4, e + 0x48);
            p = h.unk_08;
            if (*(volatile s32 *)&h.unk_08 != 0) {
                *(s32 *)*(volatile s32 *)&h.unk_0C -= 1;
                q = h.unk_0C;
                if ((q != NULL ? *q : 0) == 0) {
                    h.unk_04->v0C(h.unk_08, q, h.unk_00);
                    func_0886A45C(h.unk_08, h.unk_00);
                }
            }
            if (p != 0) {
                r = arg0->unk_360->unk_40->v48(func_088F92A0(arg1, e + 0x48));
                if (r >= 0) {
                    func_08930340(arg0->unk_2D0, i, p, r);
                } else {
                    func_08930340(arg0->unk_2D0, i, p, 0);
                }
            }
        }
    }
    arg0->unk_360->unk_44 = arg2->unk_00;
    func_08945EC4(&l, -1);
}

}
