#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[4];
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
} M;

typedef struct {
    u8 pad_00[0x18];
} E_088C11CC;

void func_08814520(u32, u32);
void func_08815480(s32);
E_088C11CC *func_08859B14(s32);
extern s32 func_088581B0(s32);
void func_08815514(s32);
void func_08814FE4(s32, s32, s32, void *, V *);
extern s32 D_089DFEE4[];
extern s32 D_08AD6974[];
extern V D_08AD697C[];

static inline void temp(V *arg0, const M *arg1, f32 x, f32 y, f32 z, f32 w) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;
    f32 f;
    f32 g;
    f32 h;
    f32 i;
    f32 j;
    f32 k;
    f32 l;
    f32 m;
    f32 n;
    f32 o;

    a = arg1->unk_00 * x;
    b = arg1->unk_10 * y;
    e = arg1->unk_04 * x;
    f = arg1->unk_14 * y;
    c = arg1->unk_08 * x;
    d = arg1->unk_18 * y;
    h = arg1->unk_28 * z;
    g = arg1->unk_24 * z;
    k = arg1->unk_34 * w;
    j = arg1->unk_20 * z;
    i = arg1->unk_38 * w;
    l = arg1->unk_30 * w;
    m = l + (j + (a + b));
    o = i + (h + (c + d));
    n = k + (g + (e + f));
    arg0->unk_00 = m;
    arg0->unk_04 = n;
    arg0->unk_08 = o;
}

void func_088B7778(void) {
    M m;
    V *p;

    func_08814520(0x10, 0x10);
    func_08815480(D_089DFEE4[D_08AD6974[0]]);
    p = (V *)func_08859B14(0xC0);
    if (p != NULL) {
        s32 i;
        const V *s;
        V *d;

        func_088581B0((s32)&m);
        i = 0;
        s = D_08AD697C;
        d = p;
        do {
            temp(d, &m, s->unk_00, s->unk_04, 0.0f, 1.0f);
            i++;
            s++;
            d++;
        } while (i < 16);
        func_08815514(-0x7F01);
        func_08814FE4(0x800180, 4, 4, NULL, p);
    }
}
