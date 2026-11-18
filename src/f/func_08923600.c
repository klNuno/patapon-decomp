#include "common.h"


typedef struct {
    u8 unk_00[0x18];
} B_08923600;

typedef struct {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    f32 unk_0C;
    B_08923600 unk_10;
} P_08923600;

typedef struct E_08923600 {
    struct E_08923600 *unk_00;
    struct E_08923600 *unk_04;
    P_08923600 unk_08;
} E_08923600;

typedef union {
    E_08923600 *unk_00;
    f32 f;
} I_08923600;

typedef struct {
    u8 pad_00[0x624];
    E_08923600 *unk_624;
    E_08923600 *unk_628;
    E_08923600 *unk_62C;
    u32 unk_630;
} S_08923600;

extern s32 D_08A026E4[];
extern B_08923600 D_08A026F4[];

u32 func_089234A4(void);

static inline I_08923600 end_08923600(S_08923600 *s) {
    I_08923600 r;
    r.unk_00 = (E_08923600 *)&s->unk_624;
    return r;
}

void func_08923600(S_08923600 *arg0, f32 arg1, s32 arg2, f32 arg3) {
    P_08923600 p;
    I_08923600 it;
    I_08923600 pos;
    struct { E_08923600 *unk_00; } nn;
    E_08923600 *prev;
    P_08923600 *d;

    p.unk_04 = arg1;
    p.unk_08 = arg2;
    p.unk_0C = arg3;
    if (arg0->unk_630 < func_089234A4()) {
        it.unk_00 = (E_08923600 *)&arg0->unk_624;
        pos = it;
        nn.unk_00 = arg0->unk_62C->unk_00;
        if (nn.unk_00 != arg0->unk_62C) {
            if (nn.unk_00->unk_00 != NULL) {
                nn.unk_00->unk_00->unk_04 = nn.unk_00->unk_04;
            }
            if (nn.unk_00->unk_04 != NULL) {
                nn.unk_00->unk_04->unk_00 = nn.unk_00->unk_00;
            }
            nn.unk_00->unk_00 = NULL;
            nn.unk_00->unk_04 = NULL;
        } else {
            nn.unk_00 = NULL;
        }
        prev = pos.unk_00->unk_04;
        arg0->unk_630++;
        prev->unk_00 = nn.unk_00;
        pos.unk_00->unk_04 = nn.unk_00;
        nn.unk_00->unk_00 = pos.unk_00;
        nn.unk_00->unk_04 = prev;
        d = &nn.unk_00->unk_08;
        if (d != NULL) {
            p.unk_10 = D_08A026F4[0];
            p.unk_00 = D_08A026E4[0];
            *d = p;
        }
    }
}

