#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_08925D14;

typedef struct {
    E_08925D14 *unk_00;
    s32 unk_04;
} V_08925D14;

typedef struct {
    u8 pad_00[0xD84];
    V_08925D14 unk_D84;
} I_08925D14;

class B_08925D14 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_08925D14 unk_04;
} S_08925D14;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_08925D14;

typedef struct {
    u8 pad_00[0x26C];
    M_08925D14 unk_26C;
    M_08925D14 unk_294;
    u8 pad_2BC[4];
    S_08925D14 unk_2C0;
} A_08925D14;

extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
extern u8 D_08A44CAC[];
extern u8 D_08A45350[];
void func_0880416C(void *);
void func_0888065C(M_08925D14 *);
void func_088804C0(M_08925D14 *, s32);
void func_08925E50(A_08925D14 *);

A_08925D14 *func_08925D14(A_08925D14 *arg0, s16 arg1) {
    E_08925D14 *p;
    V_08925D14 *v;

    if (arg0 != NULL) {
        if (&arg0->unk_2C0 != NULL) {
            arg0->unk_2C0.unk_00 = D_08A44CAC;
            if (&arg0->unk_2C0 != NULL) {
                arg0->unk_2C0.unk_00 = D_08A44C60;
                ((B_08925D14 *)&arg0->unk_2C0)->func_0C();
                if (&arg0->unk_2C0.unk_04 != NULL) {
                    p = arg0->unk_2C0.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_2C0.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_2C0.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_2C0.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_2C0.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_2C0 != NULL) {
                    arg0->unk_2C0.unk_00 = D_08A44C14;
                }
            }
        }
        if (&arg0->unk_294 != NULL) {
            arg0->unk_294.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_294);
            func_088804C0(&arg0->unk_294, -1);
        }
        if (&arg0->unk_26C != NULL) {
            arg0->unk_26C.unk_24 = D_08A45350;
            func_0888065C(&arg0->unk_26C);
            func_088804C0(&arg0->unk_26C, -1);
        }
        if (arg0 != NULL) {
            func_08925E50(arg0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
