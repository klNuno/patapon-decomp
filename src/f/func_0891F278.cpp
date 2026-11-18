#include "common.h"

extern "C" {

typedef struct E_0891F278 {
    struct E_0891F278 *unk_00;
    struct E_0891F278 *unk_04;
    u8 pad_08[0x10];
} E_0891F278;

class C_0891F278 {
public:
    u8 pad_00[8];
    virtual E_0891F278 *v08();
    virtual u32 v0C();
};

typedef struct P_0891F278 {
    E_0891F278 *unk_00;
    E_0891F278 *unk_04;
    void *unk_08;
    u8 unk_0C[0x304];
    u8 *unk_310;
    void *unk_314;
    void *unk_318;
    void *unk_31C;
    s32 unk_320;
} P_0891F278;

typedef struct {
    s32 unk_00;
    u8 unk_04[0x44];
    u8 *unk_48;
    s32 unk_4C;
    P_0891F278 unk_50;
    u8 unk_374;
    u8 pad_375[3];
    s32 unk_378;
    u8 unk_37C[8];
    u8 unk_384;
} S_0891F278;

extern u8 D_08A46C74[];
extern u8 D_08A46C64[];

void func_089457D8(void *);

S_0891F278 *func_0891F278(S_0891F278 *arg0, s32 arg1) {
    P_0891F278 *q;
    E_0891F278 *p;
    E_0891F278 *prev;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_48 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 4);
    arg0->unk_4C = 0;
    q = &arg0->unk_50;
    q->unk_08 = D_08A46C74;
    q->unk_08 = D_08A46C64;
    q->unk_310 = (u8 *)(((u32)q->unk_0C + 3) & ~3);
    p = ((C_0891F278 *)q)->v08();
    q->unk_00 = p;
    q->unk_04 = p + (((C_0891F278 *)q)->v0C() - 1);
    p->unk_04 = (E_0891F278 *)q;
    q->unk_04->unk_00 = (E_0891F278 *)q;
    for (i = 1; i < ((C_0891F278 *)q)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    q->unk_31C = q;
    q->unk_320 = 0;
    q->unk_314 = &q->unk_314;
    q->unk_318 = &q->unk_314;
    arg0->unk_374 = 0;
    arg0->unk_378 = 0;
    func_089457D8(arg0->unk_37C);
    arg0->unk_384 = 0;
    return arg0;
}

}
