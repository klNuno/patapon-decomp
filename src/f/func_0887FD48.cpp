#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0887FD48;

typedef struct {
    E_0887FD48 *unk_00;
    s32 unk_04;
} V_0887FD48;

typedef struct {
    u8 pad_00[0xD84];
    V_0887FD48 unk_D84;
} I_0887FD48;

class B_0887FD48 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0887FD48 unk_04;
} S_0887FD48;

typedef struct {
    u8 pad_00[0x8];
    S_0887FD48 unk_08;
    u8 pad_D98[0x8];
    u8 unk_DA0[0x4];
} O_0887FD48;

extern u8 D_08A44CAC[];
extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);
void func_088A1CBC(void *, s32);

O_0887FD48 *func_0887FD48(O_0887FD48 *arg0, s16 arg1) {
    E_0887FD48 *p;
    V_0887FD48 *v;

    if (arg0 != NULL) {
        func_088A1CBC(arg0->unk_DA0, -1);
        if (&arg0->unk_08 != NULL) {
            arg0->unk_08.unk_00 = D_08A44CAC;
            if (&arg0->unk_08 != NULL) {
                arg0->unk_08.unk_00 = D_08A44C60;
                ((B_0887FD48 *)&arg0->unk_08)->func_0C();
                if (&arg0->unk_08.unk_04 != NULL) {
                    p = arg0->unk_08.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_08.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_08.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_08.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_08.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_08 != NULL) {
                    arg0->unk_08.unk_00 = D_08A44C14;
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
