#include "common.h"

extern "C" {

struct A_089C1C78 {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

struct C_089C1C78 {
    s32 *unk_00;

    s32 unk_04() {
        s32 temp;
        s32 *p = *(s32 *volatile *)&unk_00;
        if (p != NULL) {
            temp = *p;
        } else {
            temp = 0;
        }
        return temp;
    }

    s32 unk_08() {
        --*unk_00;
        return unk_04();
    }
};

struct P_089C1C78 {
    void *unk_00;
    C_089C1C78 unk_04;
};

struct O_089C1C78 {
    s32 unk_00;
    A_089C1C78 *unk_04;
    P_089C1C78 unk_08;
};

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
} M_089C1C78;

struct B_089C1C78 {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct V_089C1C78 {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

struct R_089C1C78 {
    u8 pad_00[0x90];
    V_089C1C78 unk_90;
};

struct S_089C1C78 {
    u8 pad_00[0x170];
    u8 unk_170[0x90];
    B_089C1C78 unk_200;
    u8 pad_284[0x9C];
    B_089C1C78 unk_320;
    u8 pad_3A4[0x7C];
    u8 unk_420[0xC];
    u8 unk_42C[4];
};

void func_08855354(M_089C1C78 *);
void func_08864E80(void *, M_089C1C78 *);
void func_08865FEC(void *, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, char *);
void func_0897B950(void *, s32);
void func_089853B4(void *, s32);
void func_08985654(void);
s32 func_08985704(O_089C1C78 *, S_089C1C78 *);
void func_089D3BB8(void *, char *, s32);
extern f32 D_089F2E08[];
extern char *D_08A090F4[];
extern char *D_08A09104[];
extern char *D_08A09114[];
extern char *D_08A0912C[];
extern char *D_08A0913C[];
extern char *D_08A0914C[];
extern char *D_08A0915C[];
extern char D_08A09374[];
extern void *D_08AD1E28[];

void func_089C1C78(S_089C1C78 *arg0) {
    O_089C1C78 temp;
    O_089C1C78 temp2;
    O_089C1C78 temp3;
    M_089C1C78 temp4;
    void *g;
    void *x;
    C_089C1C78 *c;
    P_089C1C78 *s;

    func_08985654();
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FEC(arg0->unk_170, func_08868CAC(g, 7, D_08A0913C[0], 1), 1);
    func_08865FEC(&arg0->unk_200, func_08868CAC(g, 7, D_08A0914C[0], 1), 1);
    arg0->unk_200.unk_14(0, 1);
    func_08865FEC(&arg0->unk_320, func_08868CAC(g, 7, D_08A0915C[0], 1), 1);
    arg0->unk_320.unk_14(2, 1);
    func_08985704(&temp, arg0);
    x = temp.unk_08.unk_00;
    func_08865FEC(x, func_08868CAC(g, 7, D_08A09104[0], 1), 1);
    func_08985704(&temp2, arg0);
    x = temp2.unk_08.unk_00;
    func_08865FEC(x, func_08868CAC(g, 7, D_08A09114[0], 1), 1);
    ((R_089C1C78 *)temp2.unk_08.unk_00)->unk_90.unk_14(1);
    func_08985704(&temp3, arg0);
    x = temp3.unk_08.unk_00;
    func_08865FEC(x, func_08868CAC(g, 7, D_08A0912C[0], 1), 1);
    func_08855354(&temp4);
    temp4.unk_30 = D_089F2E08[0];
    temp4.unk_34 = D_089F2E08[1];
    func_08864E80(temp3.unk_08.unk_00, &temp4);
    func_089D3BB8(arg0->unk_420, D_08A09374, 0xF);
    func_0897B950(arg0->unk_42C, *func_08868E8C(g, 7, D_08A090F4[0]));

    s = &temp3.unk_08;
    if (temp3.unk_08.unk_00 != NULL) {
        c = &temp3.unk_08.unk_04;
        if (c->unk_08() == 0) {
            temp3.unk_04->unk_0C(s->unk_00, c->unk_00, temp3.unk_00);
            func_089853B4(s->unk_00, temp3.unk_00);
        }
    }
    s = &temp2.unk_08;
    if (temp2.unk_08.unk_00 != NULL) {
        c = &temp2.unk_08.unk_04;
        if (c->unk_08() == 0) {
            temp2.unk_04->unk_0C(s->unk_00, c->unk_00, temp2.unk_00);
            func_089853B4(s->unk_00, temp2.unk_00);
        }
    }
    s = &temp.unk_08;
    if (temp.unk_08.unk_00 != NULL) {
        c = &temp.unk_08.unk_04;
        if (c->unk_08() == 0) {
            temp.unk_04->unk_0C(s->unk_00, c->unk_00, temp.unk_00);
            func_089853B4(s->unk_00, temp.unk_00);
        }
    }
}

}
