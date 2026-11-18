#include "common.h"

extern "C" {

typedef struct E_089B461C {
    struct E_089B461C *unk_00;
    struct E_089B461C *unk_04;
    u8 pad_08[4];
} E_089B461C;

class C_089B461C {
public:
    u8 pad_00[8];
    virtual E_089B461C *v08();
    virtual u32 v0C();
};

typedef struct S_089B461C {
    E_089B461C *unk_00;
    E_089B461C *unk_04;
    void *unk_08;
    u8 unk_0C[0x304];
    u8 *unk_310;
    void *unk_314;
    void *unk_318;
    void *unk_31C;
    s32 unk_320;
} S_089B461C;

extern u8 D_08A48AA0[];
extern u8 D_08A48AB0[];

S_089B461C *func_089B461C(S_089B461C *arg0) {
    E_089B461C *p;
    E_089B461C *prev;
    u32 i;

    arg0->unk_08 = D_08A48AA0;
    arg0->unk_08 = D_08A48AB0;
    arg0->unk_310 = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((C_089B461C *)arg0)->v08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_089B461C *)arg0)->v0C() - 1);
    p->unk_04 = (E_089B461C *)arg0;
    arg0->unk_04->unk_00 = (E_089B461C *)arg0;
    for (i = 1; i < ((C_089B461C *)arg0)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_31C = arg0;
    arg0->unk_320 = 0;
    arg0->unk_314 = &arg0->unk_314;
    arg0->unk_318 = &arg0->unk_314;
    return arg0;
}

}
