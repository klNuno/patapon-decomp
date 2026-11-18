#include "common.h"

extern "C" {

typedef struct N_08948E78 {
    struct N_08948E78 *unk_00;
    struct N_08948E78 *unk_04;
    u8 pad_08[0x168];
} N_08948E78;

typedef struct {
    N_08948E78 *unk_00;
    N_08948E78 *unk_04;
    void *unk_08;
    u8 unk_0C[0x17010];
    u8 *unk_1701C;
    void *unk_17020;
    void *unk_17024;
    void *unk_17028;
    s32 unk_1702C;
} M_08948E78;

class C_08948E78 {
public:
    u8 pad_00[0x8];
    virtual N_08948E78 *v08();
    virtual u32 v0C();
};

typedef struct {
    u8 pad_00[0x100];
    s32 unk_100;
    u8 unk_104;
    u8 pad_105[0x7];
    s32 unk_10C;
    s8 unk_110[0x40C];
    M_08948E78 unk_51C;
    u8 unk_1754C[0x310];
    u8 *unk_1785C;
    s32 unk_17860;
} S_08948E78;

extern s8 D_08A0403E[];
extern u8 D_08A47788[];
extern u8 D_08A47778[];

void func_0881F5C0(void *, s32, s32);

S_08948E78 *func_08948E78(S_08948E78 *arg0) {
    M_08948E78 *m;
    N_08948E78 *q;
    N_08948E78 *t;
    u32 i;

    func_0881F5C0(arg0, 0, 0x100);
    arg0->unk_100 = 0xFFFFFF;
    arg0->unk_104 = 0;
    arg0->unk_10C = 0;
    arg0->unk_110[arg0->unk_10C] = D_08A0403E[0];
    m = &arg0->unk_51C;
    arg0->unk_51C.unk_08 = D_08A47788;
    arg0->unk_51C.unk_08 = D_08A47778;
    m->unk_1701C = (u8 *)(((u32)m->unk_0C + 0xF) & ~0xF);
    q = ((C_08948E78 *)m)->v08();
    m->unk_00 = q;
    m->unk_04 = q + (((C_08948E78 *)m)->v0C() - 1);
    q->unk_04 = (N_08948E78 *)m;
    m->unk_04->unk_00 = (N_08948E78 *)m;
    for (i = 1; i < ((C_08948E78 *)m)->v0C(); i++) {
        t = q;
        q++;
        t->unk_00 = q;
        q->unk_04 = t;
    }
    m->unk_17028 = m;
    m->unk_1702C = 0;
    m->unk_17020 = &m->unk_17020;
    m->unk_17024 = &m->unk_17020;
    arg0->unk_1785C = ((S_08948E78 *)(((u32)arg0->unk_1754C & 0xF) + (u32)arg0))->unk_1754C;
    arg0->unk_17860 = 0;
    return arg0;
}

}
