#include "common.h"

extern "C" {

struct A_089A1698 {
    virtual void unk_08();
    virtual void unk_0C(void *, s32 *, s32);
};

struct X_089A1698 {
    u8 pad_00[0x6D0];
    u8 unk_6D0[1];
};

typedef struct {
    s32 unk_00;
    A_089A1698 *unk_04;
    X_089A1698 *unk_08;
    s32 *unk_0C;
    void unk_10() {
        if (unk_08 != 0) {
            ++**(s32 **)((u8 *)this + 0xC);
        }
    }
} E_089A1698;

typedef struct {
    E_089A1698 *unk_00;
} V_089A1698;

typedef struct {
    u8 pad_00[0x210];
    V_089A1698 unk_210;
} S_089A1698;

void func_089A2BD8(s32, char **);
void func_088F24B0(void *);

void func_089A1698(S_089A1698 *arg0) {
    E_089A1698 e;
    s32 *q;
    u32 i;
    E_089A1698 *lp;
    V_089A1698 *v;

    v = &arg0->unk_210;
    i = 0;
    lp = &e;
    for (; i < 13; i++) {
        e = v->unk_00[i];
        lp->unk_10();
        func_088F24B0(e.unk_08);
        func_088F24B0(e.unk_08->unk_6D0);
        if (*(X_089A1698 *volatile *)&e.unk_08 != NULL) {
            --**(s32 *volatile *)&e.unk_0C;
            q = *(s32 *volatile *)&e.unk_0C;
            s32 c;
            if (q != NULL) {
                c = *q;
            } else {
                c = 0;
            }
            if (c == 0) {
                e.unk_04->unk_0C(e.unk_08, q, e.unk_00);
                func_089A2BD8((s32)e.unk_08, (char **)e.unk_00);
            }
        }
    }
}

}
