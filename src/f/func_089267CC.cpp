#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_089267CC;

typedef struct {
    E_089267CC *unk_00;
    s32 unk_04;
} V_089267CC;

typedef struct {
    u8 pad_00[0xD84];
    V_089267CC unk_D84;
} I_089267CC;

class B_089267CC {
public:
    virtual void v08();
    virtual void v0C();
};

typedef struct {
    void *unk_00;
    I_089267CC unk_04;
} S_089267CC;

typedef struct {
    u8 pad_00[0xC];
    S_089267CC unk_0C;
} T_089267CC;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
void func_0880416C(void *);

T_089267CC *func_089267CC(T_089267CC *arg0, s16 arg1) {
    E_089267CC *p;
    V_089267CC *v;

    if (arg0 != NULL) {
        if (&arg0->unk_0C != NULL) {
            arg0->unk_0C.unk_00 = D_08A44CAC;
            if (&arg0->unk_0C != NULL) {
                arg0->unk_0C.unk_00 = D_08A44C60;
                ((B_089267CC *)&arg0->unk_0C)->v0C();
                if (&arg0->unk_0C.unk_04 != NULL) {
                    p = arg0->unk_0C.unk_04.unk_D84.unk_00;
                    v = &arg0->unk_0C.unk_04.unk_D84;
                    if ((u32)p != (u32)(p + arg0->unk_0C.unk_04.unk_D84.unk_04)) {
                        do {
                            p++;
                        } while (p != v->unk_00 + arg0->unk_0C.unk_04.unk_D84.unk_04);
                    }
                    arg0->unk_0C.unk_04.unk_D84.unk_04 = 0;
                }
                if (&arg0->unk_0C != NULL) {
                    arg0->unk_0C.unk_00 = D_08A44C14;
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
