#include "common.h"

extern "C" {

typedef struct E_088DADE4 {
    struct E_088DADE4 *unk_00;
    struct E_088DADE4 *unk_04;
    u8 pad_08[0x4];
} E_088DADE4;

class V_088DADE4 {
public:
    u8 pad_00[0x8];
    virtual E_088DADE4 *unk_08();
    virtual u32 unk_0C();
};

typedef struct {
    E_088DADE4 *unk_00;
    E_088DADE4 *unk_04;
    void *unk_08;
    u8 unk_0C[0x610];
    void *unk_61C;
    void *unk_620;
    void *unk_624;
    void *unk_628;
    s32 unk_62C;
} S_088DADE4;

extern u8 D_08A463A0[];
extern u8 D_08A46370[];

S_088DADE4 *func_088DADE4(S_088DADE4 *arg0) {
    E_088DADE4 *p;
    E_088DADE4 *prev;
    u32 i;

    arg0->unk_08 = D_08A463A0;
    arg0->unk_08 = D_08A46370;
    arg0->unk_61C = (void *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((V_088DADE4 *)arg0)->unk_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((V_088DADE4 *)arg0)->unk_0C() - 1);
    p->unk_04 = (E_088DADE4 *)arg0;
    arg0->unk_04->unk_00 = (E_088DADE4 *)arg0;
    for (i = 1; i < ((V_088DADE4 *)arg0)->unk_0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    arg0->unk_628 = arg0;
    arg0->unk_62C = 0;
    arg0->unk_620 = &arg0->unk_620;
    arg0->unk_624 = &arg0->unk_620;
    return arg0;
}

}
