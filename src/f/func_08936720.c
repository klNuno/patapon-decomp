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
    u8 pad_E4[0x34];
    G_0888F5B8 *unk_118;
    u8 pad_11C[0xBD4];
    u8 unk_CF0[1];
} S_0888F5B8;

typedef struct {
    u8 pad_00[0x14];
    S_0888F5B8 *unk_14;
} T_08936720;

typedef struct {
    void (*volatile unk_00)(void);
    s32 unk_04;
    S_0888F5B8 *unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    volatile s32 unk_20;
    u8 pad_24[0x8];
} P_08936720;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08965A10(s32, s32);
void func_0895A9C4(s32, s32, s32, s32);
s32 func_0895ACD8(s32, P_08936720 *);
void func_088FB230(void);

void func_08936720(T_08936720 *arg0, void *arg1) {
    struct { N_0888F5B8 *unk_00; } it;
    P_08936720 temp;
    s32 *a;
    s32 *b;
    f32 *c;
    f32 *d;
    f32 *e;
    f32 *f;
    s32 *g;
    S_0888F5B8 *h;
    G_0888F5B8 *p;

    A_0888F5B8 *q;
    u8 *r;
    s32 i;
    s32 j;
    s32 temp2;
    s32 k;
    s32 v;
    f32 temp0;
    f32 temp1;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    h = arg0->unk_14;
    temp.unk_20 = -1;
    temp.unk_00 = func_088FB230;
    temp.unk_0C = 0;
    *(s32 *)&temp.unk_10 = 0;
    *(s32 *)&temp.unk_14 = 0;
    *(s32 *)&temp.unk_18 = 0;
    *(s32 *)&temp.unk_1C = 0;
    temp.unk_08 = h;
    temp.unk_04 = 2;
    temp.unk_0C = *b;
    temp1 = *d;
    temp0 = *c;
    temp.unk_10 = temp0;
    temp.unk_14 = temp1;
    temp1 = *f;
    temp0 = *e;
    temp.unk_18 = temp0;
    temp.unk_1C = temp1;
    r = h->unk_CF0;
    if (*g >= 0) {
        temp.unk_20 = *g;
    }
    h = arg0->unk_14;
    i = *b;
    p = h->unk_118;
    if ((u32)i >= p->unk_230) {
        q = NULL;
    } else {
        it.unk_00 = p->unk_214;
        for (temp2 = 0; temp2 < i; temp2++) {
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
        q = (A_0888F5B8 *)it.unk_00->unk_08;
    }
    j = q->unk_08;
    k = h->unk_E0->unk_118;
    if (k != 0) {
        v = func_08965A10(k, i);
        func_0895A9C4(j, arg0->unk_14->unk_20->unk_04 + 0x90, v, (s32)r);
        *a = func_0895ACD8(j, &temp);
        func_08852F00(arg1, 0);
    }
}
