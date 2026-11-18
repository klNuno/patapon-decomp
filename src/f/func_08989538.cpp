#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
    u8 pad_01[3];
} C_08989538;

typedef struct {
    u8 pad_00[0x19CE4];
    C_08989538 unk_19CE4[1];
} P_08989538;

typedef struct {
    u8 pad_00[0x1498];
    P_08989538 *unk_1498;
} Q_08989538;

typedef struct {
    u8 pad_00[0x42820];
    Q_08989538 *unk_42820;
} G_08989538;

extern G_08989538 *D_08AD1E28[];

inline G_08989538 *getg() {
    G_08989538 *g = D_08AD1E28[0];
    return g != NULL ? g : NULL;
}

struct E_08989538 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
    bool valid() { return unk_00 >= 0 && unk_0C != 0; }
};

class B_08989538 {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
};

class Obj_08989538 : public B_08989538 {
public:
    u8 pad_0C[0x24];
    E_08989538 unk_30[2];
    s32 unk_50;
};

s32 func_08988064(Obj_08989538 *, s32);

void func_08989538(Obj_08989538 *arg0, s32 arg1) {
    P_08989538 *c;

    arg0->unk_30[arg0->unk_50].unk_04 = func_08988064(arg0, arg1);
    arg0->unk_30[arg0->unk_50].unk_0C = 0;
    arg0->unk_30[arg0->unk_50].unk_0D = 0;
    if (arg1 >= 0) {
        c = getg()->unk_42820->unk_1498;
        arg0->unk_30[arg0->unk_50].unk_00 = arg1;
        if (c->unk_19CE4[arg1].unk_00 > 0) {
            arg0->unk_30[arg0->unk_50].unk_0C = 1;
            arg0->unk_30[arg0->unk_50].unk_0D = 0;
            if (arg0->unk_30[arg0->unk_50].unk_00 >= 0 && arg0->unk_30[arg0->unk_50].unk_0C != 0) {
                getg()->unk_42820->unk_1498->unk_19CE4[arg0->unk_30[arg0->unk_50].unk_00].unk_00--;
            }
        }
    }
    arg0->v10();
    arg0->unk_30[arg0->unk_50].unk_00 = arg1;
}

}
