#include "common.h"

extern "C" {

typedef struct E_0898EC68 {
    struct E_0898EC68 *unk_00;
    void *unk_04;
    u8 pad_08[4];
} E_0898EC68;

class V_0898EC68 {
public:
    E_0898EC68 *unk_00;
    E_0898EC68 *unk_04;
    virtual E_0898EC68 *v0();
    virtual u32 v1();
};

typedef struct {
    E_0898EC68 *unk_00;
    E_0898EC68 *unk_04;
    void *unk_08;
    u8 unk_0C[0x304];
    u32 unk_310;
    void *unk_314;
    void *unk_318;
    void *unk_31C;
    s32 unk_320;
} M_0898EC68;

typedef struct {
    u8 unk_00[0x3C18];
    u8 unk_3C18[0x118];
    void *unk_3D30;
} N_0898EC68;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    s32 unk_2C;
    s32 unk_30;
    M_0898EC68 unk_34;
    u8 pad_358[8];
    N_0898EC68 unk_360;
    u8 pad_4094[0xC];
    s32 unk_40A0;
    s32 unk_40A4;
} T_0898EC68;

typedef struct {
    u8 pad_00[0xF0];
} K_0898EC68;

extern u8 D_08A484D0[];
extern u8 D_08A48504[];
extern u8 D_08A484F4[];
extern u8 D_08A484E8[];

void func_088CE4F4(T_0898EC68 *, s32);
void func_0898E300(K_0898EC68 *);
void func_0898F4B0(N_0898EC68 *, s32, K_0898EC68 *);
void func_0898E364(K_0898EC68 *, s32);
void func_0898F498(void *);
void func_0898F10C(N_0898EC68 *, s32);

T_0898EC68 *func_0898EC68(T_0898EC68 *arg0, s32 arg1, s32 arg2) {
    M_0898EC68 *m;
    E_0898EC68 *p;
    E_0898EC68 *e;
    u32 i;
    N_0898EC68 *n;
    K_0898EC68 k;

    func_088CE4F4(arg0, 0);
    arg0->unk_28 = D_08A484D0;
    arg0->unk_2C = arg1;
    arg0->unk_30 = arg2;
    arg0->unk_34.unk_08 = D_08A48504;
    m = &arg0->unk_34;
    arg0->unk_34.unk_08 = D_08A484F4;
    arg0->unk_34.unk_310 = ((u32)m->unk_0C + 3) & ~3;
    p = ((V_0898EC68 *)&arg0->unk_34)->v0();
    m->unk_00 = p;
    m->unk_04 = p + (((V_0898EC68 *)m)->v1() - 1);
    p->unk_04 = m;
    m->unk_04->unk_00 = (E_0898EC68 *)m;
    for (i = 1; i < ((V_0898EC68 *)m)->v1(); i++) {
        e = p;
        p++;
        e->unk_00 = p;
        p->unk_04 = e;
    }
    m->unk_31C = m;
    m->unk_320 = 0;
    m->unk_314 = &m->unk_314;
    m->unk_318 = &m->unk_314;
    arg0->unk_360.unk_3D30 = D_08A484E8;
    n = &arg0->unk_360;
    func_0898E300(&k);
    func_0898F4B0(n, 0x40, &k);
    func_0898E364(&k, -1);
    func_0898F498(n->unk_3C18);
    func_0898F10C(n, 0);
    arg0->unk_40A0 = 0;
    arg0->unk_40A4 = 0;
    return arg0;
}

}
