#include "common.h"

extern "C" {

typedef struct T0892304C_E {
    struct T0892304C_E *unk_00;
    struct T0892304C_E *unk_04;
    u8 pad_08[0x28];
} T0892304C_E;

class T0892304C_V {
public:
    u8 pad_00[0x8];
    virtual T0892304C_E *v08();
    virtual u32 v0C();
};

typedef struct T0892304C_I {
    T0892304C_E *unk_00;
    T0892304C_E *unk_04;
    void *unk_08;
    u8 unk_0C[0x610];
    u8 *unk_61C;
    void *unk_620;
    void *unk_624;
    void *unk_628;
    s32 unk_62C;
} T0892304C_I;

typedef struct T0892304C_O {
    s32 unk_00;
    T0892304C_I unk_04;
} T0892304C_O;

extern u8 D_08A46DB8[];
extern u8 D_08A46DC8[];

T0892304C_O *func_0892304C(T0892304C_O *arg0, s32 arg1) {
    T0892304C_I *s1;
    T0892304C_E *p;
    T0892304C_E *prev;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04.unk_08 = D_08A46DC8;
    s1 = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A46DB8;
    arg0->unk_04.unk_61C = (u8 *)(((u32)s1->unk_0C + 0xF) & ~0xF);
    p = ((T0892304C_V *)&arg0->unk_04)->v08();
    s1->unk_00 = p;
    s1->unk_04 = p + (((T0892304C_V *)s1)->v0C() - 1);
    p->unk_04 = (T0892304C_E *)s1;
    s1->unk_04->unk_00 = (T0892304C_E *)s1;
    for (i = 1; i < ((T0892304C_V *)s1)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    s1->unk_628 = s1;
    s1->unk_62C = 0;
    s1->unk_620 = &s1->unk_620;
    s1->unk_624 = &s1->unk_620;
    return arg0;
}

}
