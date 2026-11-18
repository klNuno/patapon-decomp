#include "common.h"

extern "C" {

typedef struct E_0890ACD4 {
    struct E_0890ACD4 *unk_00;
    struct E_0890ACD4 *unk_04;
    u8 pad_08[0xED8];
} E_0890ACD4;

class B_0890ACD4 {
public:
    E_0890ACD4 *unk_00;
    E_0890ACD4 *unk_04;
    virtual E_0890ACD4 *v0();
    virtual u32 v1();
};

class P_0890ACD4 : public B_0890ACD4 {
public:
    u8 unk_0C[0xEE004];
    u8 *unk_EE010;
    void *unk_EE014;
    void *unk_EE018;
    P_0890ACD4 *unk_EE01C;
    s32 unk_EE020;
};

typedef struct {
    s32 unk_00;
    E_0890ACD4 *unk_04;
    E_0890ACD4 *unk_08;
    void *unk_0C;
} T_0890ACD4;

extern u8 D_08A4691C[];
extern u8 D_08A4690C[];

T_0890ACD4 *func_0890ACD4(T_0890ACD4 *arg0) {
    P_0890ACD4 *p;
    E_0890ACD4 *e;
    E_0890ACD4 *prev;
    u32 i;

    arg0->unk_00 = 1;
    arg0->unk_0C = D_08A4691C;
    p = (P_0890ACD4 *)&arg0->unk_04;
    arg0->unk_0C = D_08A4690C;
    p->unk_EE010 = (u8 *)(((u32)p->unk_0C + 3) & ~3);
    e = p->v0();
    p->unk_00 = e;
    p->unk_04 = e + (p->v1() - 1);
    e->unk_04 = (E_0890ACD4 *)p;
    p->unk_04->unk_00 = (E_0890ACD4 *)p;
    for (i = 1; i < p->v1(); i++) {
        prev = e;
        e++;
        prev->unk_00 = e;
        e->unk_04 = prev;
    }
    p->unk_EE01C = p;
    p->unk_EE020 = 0;
    p->unk_EE014 = &p->unk_EE014;
    p->unk_EE018 = &p->unk_EE014;
    return arg0;
}

}
