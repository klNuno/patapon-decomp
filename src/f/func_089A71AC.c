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
    u8 pad_24[8];
} P_0888F5B8;

s32 func_08965A10(s32, s32);
void func_0895A9C4(s32, s32, s32, s32);
s32 func_0895ACD8(s32, P_0888F5B8 *);
void func_088FB230(void);

typedef struct {
    u8 pad_00[0x10];
    S_0888F5B8 *unk_10;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089A71AC(S *arg0, void *arg1) {
    s32 *a, *b, *g;
    f32 *c, *d, *e, *f;
    s32 h, i, j, t, o;
    S_0888F5B8 *s;
    G_0888F5B8 *v;
    N_0888F5B8 *n;
    struct { N_0888F5B8 *unk_00; } it;
    P_0888F5B8 p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    e = (f32 *)func_0885356C(arg1, 4, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    s = arg0->unk_10;
    if (s == NULL) goto end;
    h = s->unk_110;
    if (h == 0) goto end;
    p.unk_08 = s;
    p.unk_20 = -1;
    p.unk_00 = func_088FB230;
    p.unk_0C = 0;
    p.unk_10 = 0;
    p.unk_14 = 0;
    p.unk_18 = 0;
    p.unk_1C = 0;
    p.unk_04 = 2;
    p.unk_0C = *b;
    {
        f32 x = *d;
        f32 y = *c;
        *(f32 *)&p.unk_10 = y;
        *(f32 *)&p.unk_14 = x;
        x = *f;
        y = *e;
        p.unk_18 = y;
        p.unk_1C = x;
    }
    t = *g;
    if (t >= 0) p.unk_20 = t;
    s = arg0->unk_10;
    i = *b;
    v = s->unk_118;
    if (i >= v->unk_230) {
        n = NULL;
    } else {
        it.unk_00 = v->unk_214;
        for (j = 0; j < i; j++) {
            if (it.unk_00 != NULL) it.unk_00 = it.unk_00->unk_04;
        }
        n = (N_0888F5B8 *)it.unk_00->unk_08;
    }
    o = ((A_0888F5B8 *)n)->unk_08;
    t = s->unk_E0->unk_118;
    if (t == 0) return;
    t = func_08965A10(t, i);
    func_0895A9C4(o, arg0->unk_10->unk_20->unk_04 + 0x90, t, h);
    *a = func_0895ACD8(o, &p);
end:
    func_08852F00(arg1, 0);
}
