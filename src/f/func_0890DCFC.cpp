#include "common.h"

extern "C" {

struct K_0890DCFC {
    s32 unk_00;
    s32 unk_04;

    int valid() {
        int r = 0;
        if (unk_00 >= 0 && unk_04 >= 0) {
            r = 1;
        }
        return r;
    }
};

struct E_0890DCFC {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];

    bool eq(K_0890DCFC *o) {
        return unk_00 == o->unk_00 && unk_04 == o->unk_04;
    }
};

typedef struct {
    u8 pad_00[0x74A4];
    E_0890DCFC *unk_74A4;
    s32 unk_74A8;
} T_0890DCFC;

E_0890DCFC *func_0890DCFC(T_0890DCFC *arg0, K_0890DCFC *arg1) {
    E_0890DCFC *p;
    E_0890DCFC **dp;
    s32 *sp;

    if (!arg1->valid()) {
        return NULL;
    }
    p = arg0->unk_74A4;
    if ((u32)p != (u32)(p + arg0->unk_74A8)) {
        sp = &arg0->unk_74A8;
        dp = &arg0->unk_74A4;
        do {
            if (p->eq(arg1)) {
                return p;
            }
            p++;
        } while (p != *dp + *sp);
    }
    return NULL;
}

}
