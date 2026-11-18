#include "common.h"

extern "C" {

typedef struct E_088CEEE8 {
    struct E_088CEEE8 *unk_00;
    struct E_088CEEE8 *unk_04;
    u8 pad_08[0x10];
} E_088CEEE8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x4];
} R_088CEEE8;

class B_088CEEE8 {
public:
    E_088CEEE8 *unk_00;
    E_088CEEE8 *unk_04;
    virtual E_088CEEE8 *v0();
    virtual u32 v1();
};

class P_088CEEE8 : public B_088CEEE8 {
public:
    u8 unk_0C[0x304];
    u8 *unk_310;
    void *unk_314;
    void *unk_318;
    P_088CEEE8 *unk_31C;
    s32 unk_320;
    u8 pad_324[0x4];
    R_088CEEE8 unk_328[3];
};

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
} T_088CEEE8;

extern u8 D_08A46134[];
extern u8 D_08A46124[];
void func_0881F120(void *, void *, s32);

T_088CEEE8 *func_088CEEE8(T_088CEEE8 *arg0) {
    P_088CEEE8 *p;
    E_088CEEE8 *e;
    E_088CEEE8 *prev;
    u32 i;
    u32 j;

    arg0->unk_08 = D_08A46134;
    p = (P_088CEEE8 *)arg0;
    arg0->unk_08 = D_08A46124;
    p->unk_310 = (u8 *)(((u32)p->unk_0C + 3) & ~3);
    e = p->v0();
    p->unk_00 = e;
    p->unk_04 = e + (p->v1() - 1);
    e->unk_04 = (E_088CEEE8 *)p;
    p->unk_04->unk_00 = (E_088CEEE8 *)p;
    for (i = 1; i < p->v1(); i++) {
        prev = e;
        e++;
        prev->unk_00 = e;
        e->unk_04 = prev;
    }
    p->unk_31C = p;
    p->unk_320 = 0;
    p->unk_314 = &p->unk_314;
    p->unk_318 = &p->unk_314;
    for (j = 0; j < 2; j++) {
        p->unk_328[j].unk_00 = 0;
        p->unk_328[j].unk_04 = 4;
        p->unk_328[j].unk_08 = 0;
        p->unk_328[j].unk_0C = 4;
        p->unk_328[j].unk_18 = 0;
        p->unk_328[j].unk_1C = 0;
        p->unk_328[j].unk_10 = 0;
        p->unk_328[j].unk_20 = 0;
    }
    p->unk_328[0].unk_20 = 15;
    func_0881F120(&p->unk_328[2], &p->unk_328[0], 0x28);
    return arg0;
}

}
