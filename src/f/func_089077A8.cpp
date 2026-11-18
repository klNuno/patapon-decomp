#include "common.h"

extern "C" {

class X_089077A8 {
public:
    u8 pad_00[0x91C];
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    u8 pad_00[0x424];
} E_089077A8;

typedef struct {
    E_089077A8 *unk_00;
    u32 unk_04;
} V_089077A8;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    X_089077A8 *unk_08;
    s32 unk_0C;
} Z_089077A8;

typedef struct {
    u8 unk_00[0x8484];
    V_089077A8 unk_8484;
    Z_089077A8 unk_848C;
    u8 unk_849C[0x84];
    u8 unk_8520[0x8484];
    V_089077A8 unk_109A4;
    void *unk_109AC;
} P_089077A8;

typedef struct {
    u8 pad_00[0x84DC8];
    P_089077A8 **unk_84DC8;
    s32 unk_84DCC;
} T_089077A8;

extern u8 D_08A4506C[];
extern char D_089E1508[];

void func_088B3120(u8 *, s32, char *);

P_089077A8 *func_089077A8(T_089077A8 *arg0, s32 arg1) {
    P_089077A8 *p;
    V_089077A8 *v;
    E_089077A8 *e;
    Z_089077A8 *z;
    u32 *sz;

    p = *(P_089077A8 **)((u8 *)arg0->unk_84DC8 + arg0->unk_84DCC * 4 - 4);
    if (arg1 != 0 && p != NULL) {
        p->unk_109AC = D_08A4506C;
        p->unk_8484.unk_00 = (E_089077A8 *)(((u32)p & 3) + (u32)p);
        p->unk_8484.unk_04 = 0;
        z = &p->unk_848C;
        z->unk_00 = 0;
        z->unk_04 = 0;
        z->unk_08 = 0;
        z->unk_0C = 0;
        p->unk_109A4.unk_00 = (E_089077A8 *)((P_089077A8 *)(((u32)&p->unk_8520 & 3) + (u32)p))->unk_8520;
        p->unk_109A4.unk_04 = 0;
        func_088B3120(p->unk_849C, 0x80, D_089E1508);
        e = *(E_089077A8 *volatile *)&p->unk_8484.unk_00;
        v = &p->unk_8484;
        if (e != *(E_089077A8 **)v + p->unk_8484.unk_04) {
            sz = &p->unk_8484.unk_04;
            do {
                e++;
            } while (e != v->unk_00 + *sz);
        }
        p->unk_8484.unk_04 = 0;
        if (p->unk_848C.unk_08 != NULL) {
            p->unk_848C.unk_08->v0C();
        }
    }
    arg0->unk_84DCC--;
    return p;
}

}
