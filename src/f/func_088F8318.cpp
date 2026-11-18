#include "common.h"

extern "C" {

class V_088F8318 {
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

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    V_088F8318 *unk_08;
    s32 *unk_0C;
} R_088F8318;

typedef struct N_088F8318 {
    struct N_088F8318 *unk_00;
    struct N_088F8318 *unk_04;
    struct N_088F8318 *unk_08;
    S088CE0C0 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    s32 unk_24;
    V_088F8318 *unk_28;
    s32 *unk_2C;
} N_088F8318;

typedef struct {
    u8 pad_00[0x14];
    S088CE0C0 unk_14;
    u8 pad_38[0x4];
    S088CE0C0 unk_3C;
} T_088F8318;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);

inline s32 func_088F8318_link(S088CE0C0 *l, N_088F8318 *n) {
    s32 r;

    if ((N_088F8318 *)l->unk_00 != (N_088F8318 *)l) {
        n->unk_00 = (N_088F8318 *)l->unk_00;
        ((N_088F8318 *)l->unk_00)->unk_04 = n;
        l->unk_00 = (s32)n;
        r = 1;
    } else {
        l->unk_00 = (s32)n;
        l->unk_04 = (s32)n;
        n->unk_00 = (N_088F8318 *)l;
        r = 1;
    }
    n->unk_04 = (N_088F8318 *)l;
    return r;
}

void func_088F8318(R_088F8318 *arg0, T_088F8318 *arg1) {
    s32 sp1C;
    s32 sp18;
    N_088F8318 *n;

    n = ((N_088F8318 *)arg1->unk_3C.unk_04)->unk_08;
    func_088804B4(&sp18, &arg1->unk_3C);
    func_088802D0(&sp1C, &arg1->unk_3C, sp18);
    if ((N_088F8318 *)&arg1->unk_14 != n) {
        if (func_088F8318_link(&arg1->unk_14, n)) {
            n->unk_0C = &arg1->unk_14;
            arg1->unk_14.unk_20++;
        }
    }
    n->unk_28->unk_2C();
    arg0->unk_00 = n->unk_20;
    arg0->unk_04 = n->unk_24;
    arg0->unk_08 = n->unk_28;
    arg0->unk_0C = n->unk_2C;
    if (arg0->unk_08 != 0) {
        (*arg0->unk_0C)++;
    }
}

}
