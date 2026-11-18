#include "common.h"

extern "C" {

typedef struct N_08925240 {
    struct N_08925240 *unk_00;
    struct N_08925240 *unk_04;
    u8 pad_08[0x18];
} N_08925240;

class C_08925240 {
public:
    u8 pad_00[8];
    virtual N_08925240 *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    N_08925240 *unk_00;
    N_08925240 *unk_04;
    void *unk_08;
    u8 unk_0C[0x410];
    u32 unk_41C;
    void *unk_420;
    void *unk_424;
    void *unk_428;
    s32 unk_42C;
} M_08925240;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    M_08925240 unk_08;
} Obj_08925240;

extern u8 D_08A46EB8[];
extern u8 D_08A46EA8[];

class E_08925240 {};

inline void init_08925240(M_08925240 *arg0, const E_08925240 &) {
    N_08925240 *p;
    N_08925240 *prev;
    u32 i;

    arg0->unk_08 = D_08A46EB8;
    arg0->unk_08 = D_08A46EA8;
    arg0->unk_41C = ((u32)arg0->unk_0C + 0xF) & ~0xF;
    p = ((C_08925240 *)arg0)->unk_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((C_08925240 *)arg0)->unk_0C() - 1);
    p->unk_04 = (N_08925240 *)arg0;
    arg0->unk_04->unk_00 = (N_08925240 *)arg0;
    for (i = 1; i < ((C_08925240 *)arg0)->unk_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_428 = arg0;
    arg0->unk_42C = 0;
    arg0->unk_420 = &arg0->unk_420;
    arg0->unk_424 = &arg0->unk_420;
}

Obj_08925240 *func_08925240(Obj_08925240 *arg0) {
    M_08925240 *m;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    m = &arg0->unk_08;
    init_08925240(m, E_08925240());
    return arg0;
}

}
