#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[0x18];
} E;

class K {
public:
    u8 pad_00[8];
    virtual E *v0();
    virtual u32 v1();
};

typedef struct O {
    E *unk_00;
    E *unk_04;
    void *unk_08;
    u8 unk_0C[0x410];
    void *unk_41C;
    void *unk_420;
    void *unk_424;
    void *unk_428;
    s32 unk_42C;
    u8 unk_430;
} O;

extern s32 D_08A44FCC[];
extern s32 D_08A44FDC[];

O *func_0886EB1C(O *arg0, u8 arg1) {
    E *p;
    E *q;
    u32 i;
    struct { u8 unk_00; } b;

    b.unk_00 = arg1;
    arg0->unk_08 = D_08A44FCC;
    arg0->unk_08 = D_08A44FDC;
    arg0->unk_41C = (void *)(((u32)arg0->unk_0C + 15) & ~15);
    p = ((K *)arg0)->v0();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((K *)arg0)->v1() - 1);
    p->unk_04 = arg0;
    arg0->unk_04->unk_00 = (E *)arg0;
    for (i = 1; i < ((K *)arg0)->v1(); i++) {
        q = p;
        p++;
        q->unk_00 = p;
        p->unk_04 = q;
    }
    arg0->unk_428 = arg0;
    arg0->unk_42C = 0;
    arg0->unk_420 = &arg0->unk_420;
    arg0->unk_424 = &arg0->unk_420;
    arg0->unk_430 = b.unk_00;
    return arg0;
}

}
