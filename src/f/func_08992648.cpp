#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
} T_08992648;

struct E_08992648 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    T_08992648 *unk_0C;
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
        unk_1C = 0;
        unk_20 = 0;
        unk_24 = 0;
        unk_28 = 0;
        unk_2C = 0;
        unk_30 = 0;
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
    u8 pad_00[4];
    s32 unk_04;
} R_08992648;

typedef struct {
    u8 unk_00;
    s32 unk_04;
    E_08992648 unk_08[4];
    s32 unk_1D8;
    void *unk_1DC;
} S_08992648;

extern u8 D_08A46718[];
extern u8 *D_08AD1F14[];
R_08992648 *func_08877444(u8 *);
void func_0899288C(S_08992648 *, s32);

S_08992648 *func_08992648(S_08992648 *arg0) {
    E_08992648 *p;

    arg0->unk_1DC = D_08A46718;
    arg0->unk_00 = 0;
    arg0->unk_04 = 5;
    p = arg0->unk_08;
    do {
        p->clr();
        p->unk_0C = NULL;
        p->unk_10 = 0;
        p->unk_00 = 0;
        p->unk_04 = 0;
        p->clr();
        if (p->unk_0C != NULL && p->unk_0C->unk_4C == 1) {
            p->set(p->unk_0C->unk_4C);
        }
        p++;
    } while (p < arg0->unk_08 + 4);
    arg0->unk_1D8 = 0;
    arg0->unk_1D8 = func_08877444(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL)->unk_04;
    func_0899288C(arg0, 6);
    return arg0;
}

}
