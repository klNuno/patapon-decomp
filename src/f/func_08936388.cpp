#include "common.h"

extern "C" {

class O_08936388 {
public:
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual u32 unk_20();
};

class P_08936388 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
    u8 pad_84[0x5C];
    s32 unk_E0;
};

typedef struct {
    u8 pad_00[0xCF0];
    u8 unk_CF0[0x40];
    O_08936388 *unk_D30;
} B_08936388;

typedef struct {
    u8 pad_00[0x14];
    B_08936388 *unk_14;
} S_08936388;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0885A680(void);

void func_08936388(S_08936388 *arg0, void *arg1) {
    B_08936388 *g;
    P_08936388 *p;

    u32 &a = *(u32 *) func_0885356C(arg1, 0, 1, 4);
    s32 &b = * func_0885356C(arg1, 1, 1, 4);
    g = arg0->unk_14;
    p = (P_08936388 *)g->unk_CF0;
    if (a < g->unk_D30->unk_20()) {
        p->unk_E0 = func_0885A680();
        p->unk_14(a, b != 0);
    }
    func_08852F00(arg1, 0);
}

}
