#include "common.h"

extern "C" {

typedef struct N_089194F4 {
    struct N_089194F4 *unk_00;
    struct N_089194F4 *unk_04;
    u8 pad_08[0x8];
} N_089194F4;

typedef struct {
    N_089194F4 *unk_00;
    N_089194F4 *unk_04;
    void *unk_08;
    u8 unk_0C[0x210];
    u32 unk_21C;
    void *unk_220;
    void *unk_224;
    void *unk_228;
    s32 unk_22C;
} S_089194F4;

struct V_089194F4 {
    u8 pad_00[0x8];
    virtual N_089194F4 *v0();
    virtual u32 v1();
};

extern u8 D_08A46B28[];
extern u8 D_08A46B38[];

S_089194F4 *func_089194F4(S_089194F4 *arg0) {
    N_089194F4 *n;
    N_089194F4 *p;
    u32 i;

    arg0->unk_08 = D_08A46B28;
    arg0->unk_08 = D_08A46B38;
    arg0->unk_21C = ((u32)arg0->unk_0C + 0xF) & ~0xF;
    n = ((V_089194F4 *)arg0)->v0();
    arg0->unk_00 = n;
    arg0->unk_04 = n + (((V_089194F4 *)arg0)->v1() - 1);
    n->unk_04 = (N_089194F4 *)arg0;
    arg0->unk_04->unk_00 = (N_089194F4 *)arg0;
    for (i = 1; i < ((V_089194F4 *)arg0)->v1(); i++) {
        p = n;
        n++;
        p->unk_00 = n;
        n->unk_04 = p;
    }
    arg0->unk_228 = arg0;
    arg0->unk_22C = 0;
    arg0->unk_220 = &arg0->unk_220;
    arg0->unk_224 = &arg0->unk_220;
    return arg0;
}

}
