#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
} E_0893D99C;

typedef struct {
    E_0893D99C *unk_00;
    s32 unk_04;
} V_0893D99C;

typedef struct N_0893D99C {
    struct N_0893D99C *unk_00;
    struct N_0893D99C *unk_04;
    s32 unk_08;
} N_0893D99C;

typedef struct {
    N_0893D99C *unk_00;
    N_0893D99C *unk_04;
    void *unk_08;
    u8 unk_0C[0x1804];
    u8 *unk_1810;
    void *unk_1814;
    void *unk_1818;
    void *unk_181C;
    s32 unk_1820;
} M_0893D99C;

class C_0893D99C {
public:
    u8 pad_00[0x8];
    virtual N_0893D99C *v08();
    virtual u32 v0C();
};

typedef struct {
    u8 pad_00[0xA004];
    V_0893D99C unk_A004;
    M_0893D99C unk_A00C;
} O_0893D99C;

extern u8 D_08A47354[];
extern u8 D_08A47344[];

void func_0893DE34(O_0893D99C *);

O_0893D99C *func_0893D99C(O_0893D99C *arg0) {
    E_0893D99C *p;
    V_0893D99C *v;
    s32 *n;
    M_0893D99C *m;
    N_0893D99C *q;
    N_0893D99C *t;
    u32 i;

    arg0->unk_A004.unk_00 = (E_0893D99C *)((u32)arg0 + ((u32)arg0 & 3));
    arg0->unk_A004.unk_04 = 0x200;
    p = arg0->unk_A004.unk_00;
    v = &arg0->unk_A004;
    if ((u32)p != (u32)(*(E_0893D99C **)&v->unk_00 + arg0->unk_A004.unk_04)) {
        n = &arg0->unk_A004.unk_04;
        do {
            p++;
        } while (p != v->unk_00 + *n);
    }
    m = &arg0->unk_A00C;
    m->unk_08 = D_08A47354;
    m->unk_08 = D_08A47344;
    m->unk_1810 = (u8 *)(((u32)m->unk_0C + 3) & ~3);
    q = ((C_0893D99C *)m)->v08();
    m->unk_00 = q;
    m->unk_04 = q + (((C_0893D99C *)m)->v0C() - 1);
    q->unk_04 = (N_0893D99C *)m;
    m->unk_04->unk_00 = (N_0893D99C *)m;
    for (i = 1; i < ((C_0893D99C *)m)->v0C(); i++) {
        t = q;
        q++;
        t->unk_00 = q;
        q->unk_04 = t;
    }
    m->unk_181C = m;
    m->unk_1820 = 0;
    m->unk_1814 = &m->unk_1814;
    m->unk_1818 = &m->unk_1814;
    func_0893DE34(arg0);
    return arg0;
}

}
