#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_089CC00C;

typedef struct {
    E_089CC00C *unk_00;
    s32 unk_04;
} V_089CC00C;

typedef struct {
    u8 pad_00[0xD84];
    V_089CC00C unk_D84;
} I_089CC00C;

class B_089CC00C {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_089CC00C unk_04;
} S_089CC00C;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x90];
    u8 unk_A0[0x90];
    S_089CC00C unk_130;
    u8 unk_EC0[0x50];
} T_089CC00C;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_089136C0(void *, s32);

T_089CC00C *func_089CC00C(T_089CC00C *arg0, s16 arg1) {
    E_089CC00C *p;
    V_089CC00C *v;

    if (arg0 != NULL) {
        func_089136C0(arg0->unk_EC0, -1);
        if (&arg0->unk_130 != NULL) {
            arg0->unk_130.unk_00 = D_08A44CAC;
            if (&arg0->unk_130 != NULL) {
                arg0->unk_130.unk_00 = D_08A44C60;
                ((B_089CC00C *)&arg0->unk_130)->func_0C();
                if (&arg0->unk_130.unk_04 != NULL) {
                    p = arg0->unk_130.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_130.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_130.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_130.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_130.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_130 != NULL) {
                    arg0->unk_130.unk_00 = D_08A44C14;
                }
            }
        }
        func_08865F78(arg0->unk_A0, -1);
        func_08865F78(arg0->unk_10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
