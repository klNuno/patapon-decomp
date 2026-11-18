#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0890D140;

typedef struct {
    E_0890D140 *unk_00;
    s32 unk_04;
} V_0890D140;

typedef struct {
    u8 pad_00[0x8];
} F_0890D140;

typedef struct {
    F_0890D140 *unk_00;
    s32 unk_04;
} W_0890D140;

typedef struct {
    u8 pad_00[0xD84];
    V_0890D140 unk_D84;
} I_0890D140;

typedef struct {
    u8 pad_00[0xF4];
    W_0890D140 unk_F4;
} M_0890D140;

class B_0890D140 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0890D140 unk_04;
    M_0890D140 unk_D90;
} S_0890D140;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

S_0890D140 *func_0890D140(S_0890D140 *arg0, s16 arg1) {
    E_0890D140 *p;
    V_0890D140 *v;
    F_0890D140 *q;
    W_0890D140 *w;

    if (arg0 != NULL) {
        if (&arg0->unk_D90 != NULL) {
            q = arg0->unk_D90.unk_F4.unk_00;
            w = &arg0->unk_D90.unk_F4;
            if ((u32)q != (u32)(q + arg0->unk_D90.unk_F4.unk_04)) {
                do {
                    q++;
                } while (q != w->unk_00 + arg0->unk_D90.unk_F4.unk_04);
            }
            arg0->unk_D90.unk_F4.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44CAC;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A44C60;
                ((B_0890D140 *)arg0)->func_0C();
                if (&arg0->unk_04 != NULL) {
                    p = arg0->unk_04.unk_D84.unk_00;
                    v = &arg0->unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_04.unk_D84.unk_04 = 0;
                }
                if (arg0 != NULL) {
                    arg0->unk_00 = D_08A44C14;
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
