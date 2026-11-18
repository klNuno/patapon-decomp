#include "common.h"

typedef struct V_088EECE0 {
    f32 unk_00;
    f32 unk_04;
} V_088EECE0;

typedef struct {
    u8 pad_00[0x700];
    V_088EECE0 unk_700;
    u8 pad_708[0x28];
    s32 unk_730, unk_734;
    u8 pad_738[0x19C];
    f32 unk_8D4;
    u8 pad_8D8[4];
    f32 unk_8DC;
    u32 unk_8E0;
} B;

typedef struct {
    u8 pad_00[0x18];
    B *unk_18;
} A;

extern u8 *D_08AD1F14[];
void func_08852F00(s32, s32);
f32 *func_0885356C(s32, s32, s32, s32);
void func_088D43C8(void *, f32, f32);
void func_088D450C(s32, s32);
void func_0892DFA0(s32, V_088EECE0 *);
s32 func_089A8B5C(u8 *, s32, s32);
f32 fabsf(f32);

static inline u8 *unk_00(void) {
    u8 *g = D_08AD1F14[0];
    return g != NULL ? g : NULL;
}

static inline void unk_04(A *a, f32 f) {
    B *b = a->unk_18;
    if (fabsf(f) < 0.001f) {
        b->unk_8D4 = 0.0f;
    } else {
        b->unk_8D4 = f;
    }
}

static inline void unk_08(A *a, f32 f) {
    B *b = a->unk_18;
    if (fabsf(f) < 0.001f) {
        b->unk_8DC = 0.0f;
    } else {
        b->unk_8DC = f;
    }
}

void func_088EF21C(A *arg0, s32 arg1) {
    V_088EECE0 t;
    f32 *a, *b, *c, *d;
    s32 *e, *f;
    u8 *g;
    f32 y, x;
    B *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = (s32 *)func_0885356C(arg1, 4, 1, 4);
    f = (s32 *)func_0885356C(arg1, 5, 1, 4);
    g = unk_00() + 0x2460;
    unk_04(arg0, 0.0f);
    unk_08(arg0, 0.25f);
    (*(B *volatile *)&arg0->unk_18)->unk_730 = 0;
    (*(B *volatile *)&arg0->unk_18)->unk_734 = 0;
    (*(B *volatile *)&arg0->unk_18)->unk_734 = 1;
    func_088D450C((s32)arg0->unk_18, func_089A8B5C(g, *e, *f));
    func_088D43C8(arg0->unk_18, *c, *c);
    arg0->unk_18->unk_8E0 = (u32)(4800.0f * *d);
    y = *b;
    x = *a;
    t.unk_00 = x;
    t.unk_04 = y;
    func_0892DFA0((s32)arg0->unk_18, &t);
    y = *b;
    q = arg0->unk_18;
    x = *a;
    q->unk_700.unk_00 = x;
    q->unk_700.unk_04 = y;
    func_08852F00(arg1, 0);
}
