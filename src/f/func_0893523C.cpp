#include "common.h"

extern "C" {

typedef struct N_0893523C {
    struct N_0893523C *unk_00;
    void *unk_04;
    u8 pad_08[0x48];
} N_0893523C;

class C_0893523C {
public:
    u8 pad_00[0x8];
    virtual N_0893523C *v08();
    virtual u32 v0C();
};

typedef struct {
    N_0893523C *unk_00;
    N_0893523C *unk_04;
    void *unk_08;
    u8 unk_0C[0x504];
    void *unk_510;
    void *unk_514;
    void *unk_518;
    void *unk_51C;
    s32 unk_520;
    void *unk_524;
} S_0893523C;

extern u8 D_08A470CC[];
extern u8 D_08A470E0[];
extern u8 D_08A470F0[];

S_0893523C *func_0893523C(S_0893523C *arg0) {
    N_0893523C *n;
    N_0893523C *prev;
    u32 i;

    arg0->unk_524 = D_08A470CC;
    arg0->unk_08 = D_08A470F0;
    arg0->unk_08 = D_08A470E0;
    arg0->unk_510 = (void *)(((u32)arg0->unk_0C + 3) & ~3);
    n = ((C_0893523C *)arg0)->v08();
    arg0->unk_00 = n;
    arg0->unk_04 = n + (((C_0893523C *)arg0)->v0C() - 1);
    n->unk_04 = arg0;
    arg0->unk_04->unk_00 = (N_0893523C *)arg0;
    for (i = 1; i < ((C_0893523C *)arg0)->v0C(); i++) {
        prev = n;
        n++;
        prev->unk_00 = n;
        n->unk_04 = prev;
    }
    arg0->unk_51C = arg0;
    arg0->unk_520 = 0;
    arg0->unk_514 = &arg0->unk_514;
    arg0->unk_518 = &arg0->unk_514;
    return arg0;
}

}
