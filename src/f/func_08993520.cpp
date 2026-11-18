#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_08993520;

typedef struct {
    E_08993520 *unk_00;
    s32 unk_04;
} V_08993520;

typedef struct {
    u8 pad_00[0xD84];
    V_08993520 unk_D84;
} I_08993520;

class B_08993520 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_08993520 unk_04;
} S_08993520;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[0x54];
    S_08993520 unk_60;
} T_08993520;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);
void func_08804000(void *, void (*)(void), s32, s32);
void func_089934A8(void);

T_08993520 *func_08993520(T_08993520 *arg0, s16 arg1) {
    E_08993520 *p;
    V_08993520 *v;

    if (arg0 != NULL) {
        if (&arg0->unk_60 != NULL) {
            arg0->unk_60.unk_00 = D_08A44CAC;
            if (&arg0->unk_60 != NULL) {
                arg0->unk_60.unk_00 = D_08A44C60;
                ((B_08993520 *)&arg0->unk_60)->func_0C();
                if (&arg0->unk_60.unk_04 != NULL) {
                    p = arg0->unk_60.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_60.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_60.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_60.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_60.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_60 != NULL) {
                    arg0->unk_60.unk_00 = D_08A44C14;
                }
            }
        }
        func_08804000(arg0->unk_0C, func_089934A8, 0x1C, 3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
