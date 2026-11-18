#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_0886A284;

typedef struct {
    E_0886A284 *unk_00;
    s32 unk_04;
} V_0886A284;

typedef struct {
    u8 pad_00[0xD84];
    V_0886A284 unk_D84;
} I_0886A284;

class B_0886A284 {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_0886A284 unk_04;
} S_0886A284;

extern u8 D_08A44C60[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

S_0886A284 *func_0886A284(S_0886A284 *arg0, s16 arg1) {
    E_0886A284 *p;
    V_0886A284 *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A44C60;
        ((B_0886A284 *)arg0)->func_0C();
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
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
