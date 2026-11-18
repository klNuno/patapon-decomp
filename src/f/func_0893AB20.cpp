#include "common.h"

extern "C" {

typedef struct E_0893AB20 {
    struct E_0893AB20 *unk_00;
    struct E_0893AB20 *unk_04;
    u8 pad_08[0x38];
} E_0893AB20;

class V_0893AB20 {
public:
    u8 pad_00[0x8];
    virtual E_0893AB20 *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    E_0893AB20 *unk_00;
    E_0893AB20 *unk_04;
    void *unk_08;
    u8 unk_0C[0x2010];
    void *unk_201C;
    void *unk_2020;
    void *unk_2024;
    void *unk_2028;
    s32 unk_202C;
    u8 unk_2030;
} S_0893AB20;

extern u8 D_08A47258[];
extern u8 D_08A47268[];

S_0893AB20 *func_0893AB20(S_0893AB20 *arg0, u8 arg1) {
    E_0893AB20 *p;
    E_0893AB20 *prev;
    u32 i;
    struct {
        u8 unk_00;
    } h;

    h.unk_00 = arg1;
    arg0->unk_08 = D_08A47258;
    arg0->unk_08 = D_08A47268;
    arg0->unk_201C = (void *)(((u32)arg0->unk_0C + 0xF) & ~0xF);
    p = ((V_0893AB20 *)arg0)->unk_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((V_0893AB20 *)arg0)->unk_0C() - 1);
    p->unk_04 = (E_0893AB20 *)arg0;
    arg0->unk_04->unk_00 = (E_0893AB20 *)arg0;
    for (i = 1; i < ((V_0893AB20 *)arg0)->unk_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_2028 = arg0;
    arg0->unk_202C = 0;
    arg0->unk_2020 = &arg0->unk_2020;
    arg0->unk_2024 = &arg0->unk_2020;
    arg0->unk_2030 = h.unk_00;
    return arg0;
}

}
