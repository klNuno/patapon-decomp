#include "common.h"

extern "C" {

struct V_089A6DCC {
    u8 pad_00[0x10];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual u32 v6();
};

struct B_089A6DCC {
    u8 pad_00[0x40];
    V_089A6DCC *unk_40;
    u8 pad_44[0x3C];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32, int);
};

struct D_089A6DCC : B_089A6DCC {
    u8 pad_84[0x5C];
    s32 unk_E0;
};

typedef struct {
    u8 pad_00[0x110];
    D_089A6DCC *unk_110;
} P_089A6DCC;

typedef struct {
    u8 pad_00[0x10];
    P_089A6DCC *unk_10;
} S_089A6DCC;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
extern s32 func_0885A680(void);

void func_089A6DCC(S_089A6DCC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    D_089A6DCC *o;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_10 != NULL) {
        o = arg0->unk_10->unk_110;
        if (o != NULL) {
            if (*a < o->unk_40->v6()) {
                o->unk_E0 = func_0885A680();
                o->v3(*a, *b != 0);
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
