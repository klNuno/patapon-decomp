#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_08874A10;

typedef struct {
    E_08874A10 *unk_00;
    s32 unk_04;
} V_08874A10;

typedef struct {
    u8 pad_00[0x64];
    V_08874A10 unk_64;
} I_08874A10;

class B_08874A10 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_08874A10 unk_04;
} S_08874A10;

extern u8 D_08A450E8[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

S_08874A10 *func_08874A10(S_08874A10 *arg0, s16 arg1) {
    E_08874A10 *p;
    V_08874A10 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A450E8;
        ((B_08874A10 *)arg0)->func_0C();
        if (&arg0->unk_04 != NULL) {
            p = arg0->unk_04.unk_64.unk_00;
            v = &arg0->unk_04.unk_64;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_64.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_04.unk_64.unk_04);
            }
            arg0->unk_04.unk_64.unk_04 = 0;
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A44C14;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
