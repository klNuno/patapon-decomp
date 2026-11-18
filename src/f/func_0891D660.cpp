#include "common.h"

extern "C" {

typedef struct N_0891D660 {
    struct N_0891D660 *unk_00;
    void *unk_04;
    u8 pad_08[0x8];
} N_0891D660;

class C_0891D660 {
public:
    u8 pad_00[0x8];
    virtual N_0891D660 *v08();
    virtual u32 v0C();
};

typedef struct {
    N_0891D660 *unk_00;
    N_0891D660 *unk_04;
    void *unk_08;
    u8 unk_0C[0x210];
    void *unk_21C;
    void *unk_220;
    void *unk_224;
    void *unk_228;
    s32 unk_22C;
} S_0891D660;

extern u8 D_08A46BB0[];
extern u8 D_08A46BC0[];

S_0891D660 *func_0891D660(S_0891D660 *arg0) {
    N_0891D660 *n;
    N_0891D660 *prev;
    u32 i;

    arg0->unk_08 = D_08A46BB0;
    arg0->unk_08 = D_08A46BC0;
    arg0->unk_21C = (void *)(((u32)arg0->unk_0C + 0xF) & ~0xF);
    n = ((C_0891D660 *)arg0)->v08();
    arg0->unk_00 = n;
    arg0->unk_04 = n + (((C_0891D660 *)arg0)->v0C() - 1);
    n->unk_04 = arg0;
    arg0->unk_04->unk_00 = (N_0891D660 *)arg0;
    for (i = 1; i < ((C_0891D660 *)arg0)->v0C(); i++) {
        prev = n;
        n++;
        prev->unk_00 = n;
        n->unk_04 = prev;
    }
    arg0->unk_228 = arg0;
    arg0->unk_22C = 0;
    arg0->unk_220 = &arg0->unk_220;
    arg0->unk_224 = &arg0->unk_220;
    return arg0;
}

}
