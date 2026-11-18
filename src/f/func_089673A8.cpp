#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[4];
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
    u8 unk_0C[0x64];
    void *unk_70;
    void *unk_74;
    void *unk_78;
    void *unk_7C;
    s32 unk_80;
} O;

void func_088A03B4(O *);
extern s32 D_08A44B14[];
extern s32 D_08A45484[];

O *func_089673A8(O *arg0) {
    E *p;
    E *q;
    u32 i;

    arg0->unk_08 = D_08A44B14;
    arg0->unk_08 = D_08A45484;
    arg0->unk_70 = (void *)(((u32)arg0->unk_0C + 3) & ~3);
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
    arg0->unk_7C = arg0;
    arg0->unk_80 = 0;
    arg0->unk_74 = &arg0->unk_74;
    arg0->unk_78 = &arg0->unk_74;
    func_088A03B4(arg0);
    return arg0;
}

}
