#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0890B384;

typedef struct {
    E_0890B384 *unk_00;
    s32 unk_04;
} V_0890B384;

typedef struct {
    u8 pad_00[0xD84];
    V_0890B384 unk_D84;
} I_0890B384;

class B_0890B384 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0890B384 unk_04;
    u8 pad_D90[0x10];
    u8 unk_DA0[0x7F008 - 0xDA0];
    u8 unk_7F008[4];
} S_0890B384;

extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
extern u8 D_08A44CAC[];
void func_0880416C(void *);
void func_0890B53C(S_0890B384 *);
void func_0890B034(void *, s32);
void func_0890D814(void *, s32);

S_0890B384 *func_0890B384(S_0890B384 *arg0, s16 arg1) {
    E_0890B384 *p;
    V_0890B384 *v;

    if (arg0 != NULL) {
        func_0890B53C(arg0);
        func_0890B034(arg0->unk_7F008, -1);
        func_0890D814(arg0->unk_DA0, -1);
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44CAC;
            if (arg0 != NULL) {
                arg0->unk_00 = D_08A44C60;
                ((B_0890B384 *)arg0)->func_0C();
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
