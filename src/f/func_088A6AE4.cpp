#include "common.h"

extern "C" {

typedef struct E_088A6AE4 {
    struct E_088A6AE4 *unk_00;
    struct E_088A6AE4 *unk_04;
    u8 pad_08[0x40];
} E_088A6AE4;

struct B_088A6AE4 {
    E_088A6AE4 *unk_00;
    E_088A6AE4 *unk_04;
};

class V_088A6AE4 : public B_088A6AE4 {
public:
    virtual E_088A6AE4 *func_08();
    virtual u32 func_0C();
};

typedef struct {
    E_088A6AE4 *unk_00;
    E_088A6AE4 *unk_04;
    void *unk_08;
    u8 unk_0C[0xD84];
    u8 *unk_D90;
} S_088A6AE4;

extern u8 D_08A45990[];
extern u8 D_08A45980[];

S_088A6AE4 *func_088A6AE4(S_088A6AE4 *arg0) {
    E_088A6AE4 *p;
    u32 i;

    arg0->unk_08 = D_08A45990;
    arg0->unk_08 = D_08A45980;
    arg0->unk_D90 = (u8 *)(((u32)arg0->unk_0C + 3) & ~3);
    p = ((V_088A6AE4 *)arg0)->func_08();
    arg0->unk_00 = p;
    arg0->unk_04 = p + (((V_088A6AE4 *)arg0)->func_0C() - 1);
    p->unk_04 = (E_088A6AE4 *)arg0;
    arg0->unk_04->unk_00 = (E_088A6AE4 *)arg0;
    for (i = 1; i < ((V_088A6AE4 *)arg0)->func_0C(); i++) {
        E_088A6AE4 *q = p;
        p++;
        q->unk_00 = p;
        p->unk_04 = q;
    }
    return arg0;
}

}
