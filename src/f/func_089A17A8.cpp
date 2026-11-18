#include "common.h"

extern "C" {

struct A_089A17A8 {
    virtual void v08();
    virtual void v0C(void *, s32 *, s32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
} F_089A17A8;

struct K_089A17A8 {
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C(f32, s32, F_089A17A8 *);
};

struct X_089A17A8 : K_089A17A8 {
    u8 pad_04[0x6CC];
    K_089A17A8 unk_6D0;
};

typedef struct {
    s32 unk_00;
    A_089A17A8 *unk_04;
    X_089A17A8 *unk_08;
    s32 *unk_0C;
    void addref() {
        if (unk_08 != 0) {
            ++**(s32 **)((u8 *)this + 0xC);
        }
    }
} E_089A17A8;

typedef struct {
    E_089A17A8 *unk_00;
} V_089A17A8;

typedef struct {
    u8 pad_00[0x210];
    V_089A17A8 unk_210;
} S_089A17A8;

void func_089A2BD8(void *, s32);

void func_089A17A8(S_089A17A8 *arg0, s32 arg1) {
    E_089A17A8 e;
    F_089A17A8 a;
    F_089A17A8 b;
    s32 *q;
    u32 i;
    E_089A17A8 *lp;
    V_089A17A8 *v;

    v = &arg0->unk_210;
    i = 0;
    lp = &e;
    for (; i < 13; i++) {
        e = v->unk_00[i];
        lp->addref();
        a.unk_00 = 1.0f;
        a.unk_04 = 1.0f;
        e.unk_08->v1C(1.0f, arg1, &a);
        b.unk_00 = 1.0f;
        b.unk_04 = 1.0f;
        e.unk_08->unk_6D0.v1C(1.0f, arg1, &b);
        if (*(X_089A17A8 *volatile *)&e.unk_08 != NULL) {
            --**(s32 *volatile *)&e.unk_0C;
            q = *(s32 *volatile *)&e.unk_0C;
            s32 c;
            if (q != NULL) {
                c = *q;
            } else {
                c = 0;
            }
            if (c == 0) {
                e.unk_04->v0C(e.unk_08, q, e.unk_00);
                func_089A2BD8(e.unk_08, e.unk_00);
            }
        }
    }
}

}
