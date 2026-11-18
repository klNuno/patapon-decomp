#include "common.h"

extern "C" {

typedef struct E_088DA1EC {
    struct E_088DA1EC *unk_00;
    struct E_088DA1EC *unk_04;
    u8 pad_08[8];
} E_088DA1EC;

class C_088DA1EC {
public:
    u8 pad_00[8];
    virtual E_088DA1EC *v08();
    virtual u32 v0C();
};

typedef struct S_088DA1EC {
    E_088DA1EC *unk_00;
    E_088DA1EC *unk_04;
    void *unk_08;
    u8 unk_0C[0x84];
    u8 *unk_90;
    void *unk_94;
    void *unk_98;
    void *unk_9C;
    s32 unk_A0;
} S_088DA1EC;

extern u8 D_08A463CC[];
extern u8 D_08A463DC[];

S_088DA1EC *func_088DA1EC(S_088DA1EC *arg0) {
    E_088DA1EC *p;
    E_088DA1EC *prev;
    u32 i;

    arg0->unk_08 = D_08A463CC;
    arg0->unk_08 = D_08A463DC;
    arg0->unk_90 = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((C_088DA1EC *)arg0)->v08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_088DA1EC *)arg0)->v0C() - 1);
    p->unk_04 = (E_088DA1EC *)arg0;
    arg0->unk_04->unk_00 = (E_088DA1EC *)arg0;
    for (i = 1; i < ((C_088DA1EC *)arg0)->v0C(); i++) {
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
