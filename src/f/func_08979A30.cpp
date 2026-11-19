#include "common.h"

extern "C" {

class B_08979A30 {
};

typedef struct N_08979A30 {
    struct N_08979A30 *unk_00;
    struct N_08979A30 *unk_04;
    u8 pad_08[0x8];
} N_08979A30;

class L_08979A30 {
public:
    N_08979A30 *unk_00;
    N_08979A30 *unk_04;
    void *unk_08;
    s32 unk_0C;
    u8 unk_10;
    void init(void *o, const B_08979A30 &a) {
        unk_08 = o;
        unk_0C = 0;
        unk_00 = (N_08979A30 *)this;
        unk_04 = (N_08979A30 *)this;
        set(a);
    }
    void set(const B_08979A30 &a) {
        const B_08979A30 *p = &a;
        unk_10 = *(const u8 *&)p;
    }
};

typedef struct {
    N_08979A30 *unk_00;
    N_08979A30 *unk_04;
    void *unk_08;
    u8 unk_0C[0x800];
    void *unk_80C;
    u8 unk_810[0x14];
} M_08979A30;

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
    s32 unk_A34;
    M_08979A30 unk_A38;
} S_08979A30;

class V_08979A30 {
public:
    u8 pad_00[0x8];
    virtual N_08979A30 *f0();
    virtual u32 f1();
};

extern u8 D_08A47FC8[];
extern u8 D_08A47FE4[];
extern u8 D_08A47FF4[];
extern u8 D_08A48024[];

void func_0886B4CC(S_08979A30 *);

S_08979A30 *func_08979A30(S_08979A30 *arg0, s32 arg1, s32 arg2) {
    M_08979A30 *m;
    N_08979A30 *p;
    N_08979A30 *q;
    u32 i;
    B_08979A30 b;

    func_0886B4CC(arg0);
    arg0->unk_00 = D_08A48024;
    arg0->unk_A28 = arg1;
    arg0->unk_A2C = arg2;
    arg0->unk_A30 = 0;
    arg0->unk_00 = D_08A47FC8;
    arg0->unk_A34 = arg1;
    arg0->unk_A38.unk_08 = D_08A47FF4;
    arg0->unk_A38.unk_08 = D_08A47FE4;
    m = &arg0->unk_A38;
    arg0->unk_A38.unk_80C = m->unk_0C;
    p = ((V_08979A30 *)m)->f0();
    m->unk_00 = p;
    m->unk_04 = p + (((V_08979A30 *)m)->f1() - 1);
    p->unk_04 = (N_08979A30 *)m;
    m->unk_04->unk_00 = (N_08979A30 *)m;
    for (i = 1; i < ((V_08979A30 *)m)->f1(); i++) {
        q = p;
        p++;
        q->unk_00 = p;
        p->unk_04 = q;
    }
    ((L_08979A30 *)m->unk_810)->init(m, b);
    return arg0;
}

}
