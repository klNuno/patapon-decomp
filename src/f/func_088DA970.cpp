#include "common.h"

extern "C" {

typedef struct E_088DA970 {
    struct E_088DA970 *unk_00;
    struct E_088DA970 *unk_04;
    u8 pad_08[4];
} E_088DA970;

class C_088DA970 {
public:
    u8 pad_00[8];
    virtual E_088DA970 *v08();
    virtual u32 v0C();
};

typedef struct S_088DA970 {
    E_088DA970 *unk_00;
    E_088DA970 *unk_04;
    void *unk_08;
    u8 unk_0C[0x10];
    u8 *unk_1C;
    void *unk_20;
    void *unk_24;
    void *unk_28;
    s32 unk_2C;
} S_088DA970;

extern u8 D_08A463A0[];
extern u8 D_08A463B0[];

S_088DA970 *func_088DA970(S_088DA970 *arg0) {
    E_088DA970 *p;
    E_088DA970 *prev;
    u32 i;

    arg0->unk_08 = D_08A463A0;
    arg0->unk_08 = D_08A463B0;
    arg0->unk_1C = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((C_088DA970 *)arg0)->v08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_088DA970 *)arg0)->v0C() - 1);
    p->unk_04 = (E_088DA970 *)arg0;
    arg0->unk_04->unk_00 = (E_088DA970 *)arg0;
    for (i = 1; i < ((C_088DA970 *)arg0)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_28 = arg0;
    arg0->unk_2C = 0;
    arg0->unk_20 = &arg0->unk_20;
    arg0->unk_24 = &arg0->unk_20;
    return arg0;
}

}
