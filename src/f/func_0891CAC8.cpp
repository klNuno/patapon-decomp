#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[8];
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
    u8 unk_0C[0x210];
    void *unk_21C;
    void *unk_220;
    void *unk_224;
    void *unk_228;
    s32 unk_22C;
} O;

extern s32 D_08A46B90[];
extern s32 D_08A46BA0[];

O *func_0891CAC8(O *arg0) {
    E *p;
    E *q;
    u32 i;

    arg0->unk_08 = D_08A46B90;
    arg0->unk_08 = D_08A46BA0;
    arg0->unk_21C = (void *)(((u32)arg0->unk_0C + 15) & ~15);
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
    arg0->unk_228 = arg0;
    arg0->unk_22C = 0;
    arg0->unk_220 = &arg0->unk_220;
    arg0->unk_224 = &arg0->unk_220;
    return arg0;
}

}
