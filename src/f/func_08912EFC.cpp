#include "common.h"

extern "C" {

class X_08912EFC {
public:
    u8 pad_00[0x80];
    virtual void v0();
    virtual void v1(s32);
};

void func_089127F4(void *, s32);

struct E_08912EFC {
    u8 pad_00[0x30];
    X_08912EFC *unk_30;
    u8 pad_34[0xA8 - 0x34];

    void f(s32 a) {
        func_089127F4(this, a);
        if (unk_30 != NULL) {
            unk_30->v1(a);
        }
    }
};

typedef struct {
    E_08912EFC *unk_00;
    s32 unk_04;
} V_08912EFC;

typedef struct {
    u8 pad_00[0xFCC];
    V_08912EFC unk_FCC;
    u8 pad_FD4[4];
    E_08912EFC unk_FD8;
} T_08912EFC;

void func_08912EFC(T_08912EFC *arg0, s32 arg1) {
    E_08912EFC *p;
    V_08912EFC *v;
    s32 *n;

    p = arg0->unk_FCC.unk_00;
    v = &arg0->unk_FCC;
    if ((u32)p != (u32)(p + arg0->unk_FCC.unk_04)) {
        n = &arg0->unk_FCC.unk_04;
        do {
            p->f(arg1);
            p++;
        } while (p != v->unk_00 + *n);
    }
    arg0->unk_FD8.f(arg1);
}

}
