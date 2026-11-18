#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E_088BC44C;

typedef struct {
    E_088BC44C *unk_00;
    s32 unk_04;
} V_088BC44C;

typedef struct {
    u8 pad_00[0x3004];
    V_088BC44C unk_3004;
} I_088BC44C;

class B_088BC44C {
public:
    virtual void func_08();
    virtual void func_0C();
};

typedef struct {
    void *unk_00;
    I_088BC44C unk_04;
} S_088BC44C;

extern u8 D_08A45EA4[];
extern u8 D_08A44C14[];
void func_0880416C(void *);

S_088BC44C *func_088BC44C(S_088BC44C *arg0, s16 arg1) {
    E_088BC44C *p;
    V_088BC44C *v;

    if (arg0 != NULL) {
        arg0->unk_00 = D_08A45EA4;
        ((B_088BC44C *)arg0)->func_0C();
        if (&arg0->unk_04 != NULL) {
            p = arg0->unk_04.unk_3004.unk_00;
            v = &arg0->unk_04.unk_3004;
            if ((u32)p != (u32)(p + arg0->unk_04.unk_3004.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_04.unk_3004.unk_04);
            }
            arg0->unk_04.unk_3004.unk_04 = 0;
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
