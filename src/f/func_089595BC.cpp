#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_089595BC;

typedef struct {
    E_089595BC *unk_00;
    s32 unk_04;
} V_089595BC;

typedef struct {
    u8 pad_00[0xD84];
    V_089595BC unk_D84;
} I_089595BC;

class B_089595BC {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_089595BC unk_04;
} S_089595BC;

class F_089595BC {
public:
    u8 pad_00[0x18];
    virtual void func_08(s32);
};

typedef struct {
    F_089595BC *unk_00;
    s32 unk_04;
} W_089595BC;

typedef struct {
    u8 pad_00[0x710];
    W_089595BC unk_710;
} H_089595BC;

typedef struct {
    u8 pad_00[0x820];
    u8 unk_820[4];
} K_089595BC;

typedef struct {
    u8 pad_00[0x94];
    S_089595BC unk_94;
    H_089595BC unk_E24;
    u8 pad_153C[4];
    K_089595BC unk_1540;
} A_089595BC;

extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
extern u8 D_08A44CAC[];
void func_0880416C(void *);
void func_08959754(A_089595BC *);
void func_089593CC(void *, s32);
void func_08959558(void *, s32);
void func_08865F78(void *, s32);

A_089595BC *func_089595BC(A_089595BC *arg0, s16 arg1) {
    E_089595BC *p;
    V_089595BC *v;
    F_089595BC *q;
    W_089595BC *w;
    s32 *sz;

    if (arg0 != NULL) {
        func_08959754(arg0);
        if (&arg0->unk_1540 != NULL) {
            func_089593CC(arg0->unk_1540.unk_820, 0);
            func_08959558(&arg0->unk_1540, 0);
        }
        if (&arg0->unk_E24 != NULL) {
            q = arg0->unk_E24.unk_710.unk_00;
            w = &arg0->unk_E24.unk_710;
            if ((u32)q != (u32)(q + arg0->unk_E24.unk_710.unk_04)) {
                sz = &arg0->unk_E24.unk_710.unk_04;
                do {
                    q->func_08(-1);
                    q++;
                } while (q != w->unk_00 + *sz);
            }
            arg0->unk_E24.unk_710.unk_04 = 0;
        }
        if (&arg0->unk_94 != NULL) {
            arg0->unk_94.unk_00 = D_08A44CAC;
            if (&arg0->unk_94 != NULL) {
                arg0->unk_94.unk_00 = D_08A44C60;
                ((B_089595BC *)&arg0->unk_94)->func_0C();
                if (&arg0->unk_94.unk_04 != NULL) {
                    p = arg0->unk_94.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_94.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_94.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_94.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_94.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_94 != NULL) {
                    arg0->unk_94.unk_00 = D_08A44C14;
                }
            }
        }
        func_08865F78(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
