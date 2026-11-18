#include "common.h"

extern "C" {

typedef struct E_08959040 {
    struct E_08959040 *unk_00;
    void *unk_04;
    u8 pad_08[0x18];
} E_08959040;

class V_08959040 {
public:
    E_08959040 *unk_00;
    E_08959040 *unk_04;
    virtual E_08959040 *v0();
    virtual u32 v1();
};

typedef struct {
    E_08959040 *unk_00;
    E_08959040 *unk_04;
    void *unk_08;
    u8 unk_0C[0x810];
    u32 unk_81C;
    void *unk_820;
    void *unk_824;
    void *unk_828;
    s32 unk_82C;
} M_08959040;

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S_08959040;

typedef struct {
    u8 pad_00[0x90];
    s32 unk_90;
    S_08959040 unk_94;
    u8 unk_E24[0x710];
    u8 *unk_1534;
    s32 unk_1538;
    s32 unk_153C;
    M_08959040 unk_1540;
    s32 unk_1D70;
    u8 pad_1D74[0xC];
    u8 unk_1D80[4];
} T_08959040;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern u8 D_08A47948[];
extern u8 D_08A47938[];

void func_08865EE0(void *);
void func_08855354(void *);

T_08959040 *func_08959040(T_08959040 *arg0) {
    M_08959040 *m;
    S_08959040 *s;
    E_08959040 *p;
    E_08959040 *e;
    struct { u32 unk_00; } i;

    func_08865EE0(arg0);
    arg0->unk_90 = 0;
    arg0->unk_94.unk_00 = D_08A44C14;
    s = &arg0->unk_94;
    arg0->unk_94.unk_00 = D_08A44C60;
    arg0->unk_94.unk_D88 = (u8 *)(((u32)s->unk_04 & 3) + (u32)s + 0x04);
    arg0->unk_94.unk_D8C = 0;
    arg0->unk_94.unk_00 = D_08A44CAC;
    arg0->unk_1534 = (u8 *)(((u32)arg0->unk_E24 & 0xF) + (u32)arg0 + 0xE24);
    arg0->unk_1538 = 0;
    m = &arg0->unk_1540;
    arg0->unk_153C = 0;
    arg0->unk_1540.unk_08 = D_08A47948;
    arg0->unk_1540.unk_08 = D_08A47938;
    arg0->unk_1540.unk_81C = ((u32)m->unk_0C + 0xF) & ~0xF;
    p = ((V_08959040 *)&arg0->unk_1540)->v0();
    m->unk_00 = p;
    m->unk_04 = p + (((V_08959040 *)m)->v1() - 1);
    p->unk_04 = m;
    m->unk_04->unk_00 = (E_08959040 *)m;
    for (i.unk_00 = 1; i.unk_00 < ((V_08959040 *)m)->v1(); i.unk_00++) {
        e = p;
        p++;
        e->unk_00 = p;
        p->unk_04 = e;
    }
    m->unk_828 = m;
    m->unk_82C = 0;
    m->unk_820 = &m->unk_820;
    m->unk_824 = &m->unk_820;
    arg0->unk_1D70 = -1;
    func_08855354(arg0->unk_1D80);
    return arg0;
}

}
