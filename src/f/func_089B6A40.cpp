#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u8 pad_04[0x420];
} E_089B6A40;

struct Vec_089B6A40 {
    E_089B6A40 *unk_00;
    s32 unk_04;
};

class B_089B6A40 {
public:
    u8 pad_00[0x91C];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

class C_089B6A40 : public B_089B6A40 {
public:
    s32 unk_920;
    u8 pad_924[0x45];
    u8 unk_969;
};

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 unk_18[1];
} H_089B6A40;

typedef struct {
    u8 pad_00[0x14A0];
    H_089B6A40 *unk_14A0;
} G_089B6A40;

typedef struct {
    u8 pad_00[0x8528];
    Vec_089B6A40 unk_8528;
    u8 pad_8530[0x8];
    C_089B6A40 *unk_8538;
} Obj_089B6A40;

extern u8 D_08A08A8C[];
extern G_089B6A40 *D_08AD1F14[];

void func_0886D484(u8 *, s32);
void func_08822B3C(u8 *, s32);
void func_088F1C7C(C_089B6A40 *);
void func_088F1980(C_089B6A40 *);

s32 func_089B6A40(Obj_089B6A40 *arg0) {
    C_089B6A40 **cp;
    C_089B6A40 *c;
    E_089B6A40 *e;
    s32 id;
    G_089B6A40 *g;
    H_089B6A40 *h;
    E_089B6A40 *p;
    Vec_089B6A40 *vp;
    s32 *sp;

    cp = &arg0->unk_8538;
    (*cp)->v3();
    c = arg0->unk_8538;
    if (c->unk_969 != 0) {
    if (c->unk_969 != 0 && c->unk_920 >= 0) {
        e = &arg0->unk_8528.unk_00[c->unk_920];
    } else {
        e = NULL;
    }
    id = e->unk_00;
    func_0886D484(D_08A08A8C, id);
    g = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    h = g->unk_14A0;
    h->unk_14 = -1;
    func_08822B3C(h->unk_18, id);
    p = arg0->unk_8528.unk_00;
    vp = &arg0->unk_8528;
    if ((u32)p != (u32)(*(E_089B6A40 **)vp + arg0->unk_8528.unk_04)) {
        sp = &arg0->unk_8528.unk_04;
        do {
            p++;
        } while (p != vp->unk_00 + *sp);
    }
    arg0->unk_8528.unk_04 = 0;
    if (arg0->unk_8538 != NULL) {
        func_088F1C7C(*cp);
    }
    func_088F1980(*cp);
    return 0;
    }
    return 0x10000;
}

}
