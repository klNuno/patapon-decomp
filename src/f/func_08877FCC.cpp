#include "common.h"

extern "C" {

typedef struct E_08877FCC {
    struct E_08877FCC *unk_00;
    struct E_08877FCC *unk_04;
    u8 pad_08[0xC];
} E_08877FCC;

class V_08877FCC {
public:
    u8 pad_00[0x8];
    virtual E_08877FCC *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    E_08877FCC *unk_00;
    E_08877FCC *unk_04;
    void *unk_08;
    u8 unk_0C[0xA00];
    void *unk_A0C;
    void *unk_A10;
    void *unk_A14;
    void *unk_A18;
    s32 unk_A1C;
    u8 unk_A20;
} S_08877FCC;

extern u8 D_08A44F08[];
extern u8 D_08A44F18[];

S_08877FCC *func_08877FCC(S_08877FCC *arg0, u8 arg1) {
    E_08877FCC *p;
    E_08877FCC *prev;
    u32 i;
    struct {
        u8 unk_00;
    } h;

    h.unk_00 = arg1;
    arg0->unk_08 = D_08A44F08;
    arg0->unk_08 = D_08A44F18;
    arg0->unk_A0C = arg0->unk_0C;
    p = ((V_08877FCC *)arg0)->unk_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((V_08877FCC *)arg0)->unk_0C() - 1);
    p->unk_04 = (E_08877FCC *)arg0;
    arg0->unk_04->unk_00 = (E_08877FCC *)arg0;
    for (i = 1; i < ((V_08877FCC *)arg0)->unk_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_A18 = arg0;
    arg0->unk_A1C = 0;
    arg0->unk_A10 = &arg0->unk_A10;
    arg0->unk_A14 = &arg0->unk_A10;
    arg0->unk_A20 = h.unk_00;
    return arg0;
}

}
