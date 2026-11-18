#include "common.h"


typedef struct N_0888F5B8 {
    s32 unk_00;
    struct N_0888F5B8 *unk_04;
    void *unk_08;
} N_0888F5B8;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} A_0888F5B8;

typedef struct {
    u8 pad_00[0x214];
    N_0888F5B8 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;
} G_0888F5B8;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
} E_0888F5B8;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} C_0888F5B8;

typedef struct {
    u8 pad_00[0x20];
    C_0888F5B8 *unk_20;
    u8 pad_24[0xBC];
    E_0888F5B8 *unk_E0;
    u8 pad_E4[0x2C];
    s32 unk_110;
    u8 pad_114[0x4];
    G_0888F5B8 *unk_118;
} S_0888F5B8;

typedef struct {
    void *unk_00;
    s32 unk_04;
    S_0888F5B8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x8];
} P_0888F5B8;

s32 func_08965A10(s32, s32);
void func_0895A9C4(s32, s32, s32, s32);
void func_0895ACD8(s32, P_0888F5B8 *);
void func_088FAC24(void);

void func_0888F5B8(S_0888F5B8 *arg0) {
    struct { N_0888F5B8 *unk_00; } it;
    P_0888F5B8 p;
    N_0888F5B8 *n;
    s32 h;
    s32 i;
    s32 t;
    s32 o;
    s32 j;
    G_0888F5B8 *g;

    if (arg0->unk_E0 == NULL) {
        return;
    }
    h = arg0->unk_E0->unk_118;
    if (h == 0) {
        return;
    }
    for (i = 0; i < 2; i++) {
        t = func_08965A10(h, i);
        g = arg0->unk_118;
        if (i >= g->unk_230) {
            n = NULL;
        } else {
            it.unk_00 = g->unk_214;
            for (j = 0; j < i; j++) {
                if (it.unk_00 != NULL) {
                    it.unk_00 = it.unk_00->unk_04;
                }
            }
            n = (N_0888F5B8 *)it.unk_00->unk_08;
        }
        o = ((A_0888F5B8 *)n)->unk_08;
        p.unk_00 = func_088FAC24;
        p.unk_04 = 1;
        p.unk_08 = arg0;
        p.unk_0C = i;
        p.unk_10 = 0;
        p.unk_14 = 0;
        p.unk_20 = 0;
        p.unk_18 = 1.0f;
        p.unk_1C = 1.0f;
        func_0895A9C4(o, arg0->unk_20->unk_04 + 0x90, t, arg0->unk_110);
        func_0895ACD8(o, &p);
    }
}
