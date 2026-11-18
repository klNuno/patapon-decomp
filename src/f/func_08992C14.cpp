#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
} T_08992C14;

struct E_08992C14 {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[4];
    T_08992C14 *unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    s32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    s32 unk_34;
    u8 pad_38[0x3C];

    void clr() {
        unk_14 = 0;
        unk_18 = 0;
        *(s32 *)&unk_1C = 0;
        *(s32 *)&unk_20 = 0;
        unk_24 = 0;
        unk_28 = 0;
        *(s32 *)&unk_2C = 0;
        *(s32 *)&unk_30 = 0;
    }
    void set(s32 t) {
        switch (t) {
        case 1:
            unk_14 = 1;
            unk_1C = 1.0f;
            unk_34 = 0;
            unk_20 = 0.0f;
            unk_18 = 0;
            unk_24 = -1;
            unk_28 = -1;
            unk_2C = 1000.0f;
            unk_30 = 1000.0f;
            break;
        }
    }
};

typedef struct {
    u8 unk_00;
    s32 unk_04;
    E_08992C14 unk_08[4];
    s32 unk_1D8;
    void *unk_1DC;
} S_08992C14;

void func_0899288C(S_08992C14 *, s32);

static inline const f32 &func_08992C14_max(const f32 &a, const f32 &b) {
    return (b > a) ? b : a;
}

s32 func_08992C14(S_08992C14 *arg0, s32 arg1, f32 arg2) {
    E_08992C14 *e;
    s32 ret;

    e = &arg0->unk_08[arg1];
    if (arg2 <= 0.0f) {
        ret = 0;
    } else {
        if (!(e->unk_00 > 0.0f)) {
            e->unk_00 = 0.0f;
            e->unk_04 = 0.0f;
            e->clr();
            if (e->unk_0C != NULL && e->unk_0C->unk_4C == 1) {
                e->set(e->unk_0C->unk_4C);
            }
        }
        e->unk_00 = func_08992C14_max(arg2, e->unk_00);
        e->unk_04 = e->unk_00;
        ret = 1;
    }
    if (ret != 0) {
        switch (arg1) {
        case 0:
            func_0899288C(arg0, 1);
            break;
        }
    }
    return ret;
}

}
