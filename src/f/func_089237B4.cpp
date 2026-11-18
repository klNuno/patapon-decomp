#include "common.h"

extern "C" {

typedef struct E_089237B4 {
    struct E_089237B4 *unk_00;
    struct E_089237B4 *unk_04;
    u8 pad_08[0x18];
} E_089237B4;

class C_089237B4 {
public:
    u8 pad_00[8];
    virtual E_089237B4 *v08();
    virtual u32 v0C();
};

typedef struct S_089237B4 {
    E_089237B4 *unk_00;
    E_089237B4 *unk_04;
    void *unk_08;
    u8 unk_0C[0x84];
    u8 *unk_90;
    void *unk_94;
    void *unk_98;
    void *unk_9C;
    s32 unk_A0;
} S_089237B4;

extern u8 D_08A46DE8[];
extern u8 D_08A46DD8[];

S_089237B4 *func_089237B4(S_089237B4 *arg0) {
    E_089237B4 *p;
    E_089237B4 *prev;
    u32 i;

    arg0->unk_08 = D_08A46DE8;
    arg0->unk_08 = D_08A46DD8;
    arg0->unk_90 = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((C_089237B4 *)arg0)->v08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_089237B4 *)arg0)->v0C() - 1);
    p->unk_04 = (E_089237B4 *)arg0;
    arg0->unk_04->unk_00 = (E_089237B4 *)arg0;
    for (i = 1; i < ((C_089237B4 *)arg0)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_9C = arg0;
    arg0->unk_A0 = 0;
    arg0->unk_94 = &arg0->unk_94;
    arg0->unk_98 = &arg0->unk_94;
    return arg0;
}

}
