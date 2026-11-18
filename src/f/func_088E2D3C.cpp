#include "common.h"

extern "C" {

typedef struct S088CE0C0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;

class V_088E2D3C {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
};

struct SP_088E2D3C {
    s32 unk_00;
    s32 unk_04;
    V_088E2D3C *unk_08;
    s32 *unk_0C;
    SP_088E2D3C(const SP_088E2D3C &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != NULL) {
            ++*unk_0C;
        }
    }
};

typedef struct N_088E2D3C {
    struct N_088E2D3C *unk_00;
    struct N_088E2D3C *unk_04;
    struct N_088E2D3C *unk_08;
    S088CE0C0 *unk_0C;
    u8 pad_10[0x10];
    SP_088E2D3C unk_20;
} N_088E2D3C;

typedef struct {
    u8 pad_00[0x14];
    S088CE0C0 unk_14;
    u8 pad_38[0x4];
    S088CE0C0 unk_3C;
} T_088E2D3C;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);

inline s32 func_088E2D3C_link(S088CE0C0 *l, N_088E2D3C *n) {
    s32 r;

    if ((N_088E2D3C *)l->unk_00 != (N_088E2D3C *)l) {
        n->unk_00 = (N_088E2D3C *)l->unk_00;
        ((N_088E2D3C *)l->unk_00)->unk_04 = n;
        l->unk_00 = (s32)n;
        r = 1;
    } else {
        l->unk_00 = (s32)n;
        l->unk_04 = (s32)n;
        n->unk_00 = (N_088E2D3C *)l;
        r = 1;
    }
    n->unk_04 = (N_088E2D3C *)l;
    return r;
}

SP_088E2D3C func_088E2D3C(T_088E2D3C *arg1) {
    s32 sp1C;
    s32 sp18;
    N_088E2D3C *n;

    n = ((N_088E2D3C *)arg1->unk_3C.unk_04)->unk_08;
    func_088804B4(&sp18, &arg1->unk_3C);
    func_088802D0(&sp1C, &arg1->unk_3C, sp18);
    if ((N_088E2D3C *)&arg1->unk_14 != n) {
        if (func_088E2D3C_link(&arg1->unk_14, n)) {
            n->unk_0C = &arg1->unk_14;
            arg1->unk_14.unk_20++;
        }
    }
    n->unk_20.unk_08->unk_2C();
    return n->unk_20;
}

}
