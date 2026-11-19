#include "common.h"

typedef struct V_088EECE0 {
    f32 unk_00, unk_04;
} V_088EECE0;

typedef struct {
    u8 pad_00[0x700];
    V_088EECE0 unk_700;
    u8 pad_708[0x28];
    s32 unk_730, unk_734;
    u8 pad_738[0x18C];
    s32 unk_8C4;
    u8 pad_8C8[0xC];
    f32 unk_8D4, unk_8D8, unk_8DC;
    u32 unk_8E0;
} B;

typedef struct {
    u8 pad_00[0x18];
    B *unk_18;
    u8 pad_1C[0x208];
    s32 unk_224;
} A;

void func_08852F00(s32, s32);
f32 *func_0885356C(s32, s32, s32, s32);
u8 *func_08852BA8(void *);
void func_088D43C8(void *, f32, f32);
void func_088D450C(s32, s32);
void func_0892DFA0(s32, V_088EECE0 *);
void func_0892DFB4(char *arg0, s32 arg1);
s32 func_089A8D10(s32, s32);
f32 fabsf(f32);

static inline void func_00(A *arg0, f32 arg1) {
    B *p = arg0->unk_18;
    if (fabsf(arg1) < 0.001f) {
        p->unk_8D4 = 0.0f;
    } else {
        p->unk_8D4 = arg1;
    }
}

static inline void func_04(A *arg0, f32 arg1) {
    B *p = arg0->unk_18;
    if (fabsf(arg1) < 0.001f) {
        p->unk_8D8 = 0.0f;
    } else {
        p->unk_8D8 = arg1;
    }
}

static inline void func_08(A *arg0, f32 arg1) {
    B *p = arg0->unk_18;
    if (fabsf(arg1) < 0.001f) {
        p->unk_8DC = 0.0f;
    } else {
        p->unk_8DC = arg1;
    }
}

void func_088EEE70(A *arg0, s32 arg1) {
    V_088EECE0 t0, t1;
    f32 *a, *b, *c, *d, *e;
    s32 *f;
    s32 n, r;
    f32 y, x;
    B *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = (s32 *)func_0885356C(arg1, 5, 1, 4);
    n = *(s32 *)func_0885356C(arg1, 6, 0, 4);
    r = func_089A8D10(arg0->unk_224, *(s32 *)(func_08852BA8((void *)arg1) + n));
    switch (*f) {
        case 0:
            func_00(arg0, 0.0f);
            func_08(arg0, 0.25f);
            (*(B *volatile *)&arg0->unk_18)->unk_730 = 0;
            (*(B *volatile *)&arg0->unk_18)->unk_734 = 0;
            func_088D43C8(arg0->unk_18, *c, *c);
            func_088D450C((s32)arg0->unk_18, r);
            func_0892DFB4((char *)arg0->unk_18, 1);
            arg0->unk_18->unk_8E0 = (u32)(4800.0f * *e);
            y = *b;
            x = *a;
            t0.unk_00 = x;
            t0.unk_04 = y;
            func_0892DFA0((s32)arg0->unk_18, &t0);
            y = *b;
            q = arg0->unk_18;
            x = *a;
            q->unk_700.unk_00 = x;
            q->unk_700.unk_04 = y;
            break;
        case 1:
            func_00(arg0, *d);
            func_04(arg0, *(volatile f32 *)d);
            func_08(arg0, *(volatile f32 *)d);
            (*(B *volatile *)&arg0->unk_18)->unk_8C4 = 0;
            (*(B *volatile *)&arg0->unk_18)->unk_730 = 1;
            (*(B *volatile *)&arg0->unk_18)->unk_734 = 1;
            func_088D43C8(arg0->unk_18, *c, *c);
            func_088D450C((s32)arg0->unk_18, r);
            arg0->unk_18->unk_8E0 = (u32)(4800.0f * *e);
            y = *b;
            x = *a;
            t1.unk_00 = x;
            t1.unk_04 = y;
            func_0892DFA0((s32)arg0->unk_18, &t1);
            y = *b;
            q = arg0->unk_18;
            x = *a;
            q->unk_700.unk_00 = x;
            q->unk_700.unk_04 = y;
            break;
    }
    func_08852F00(arg1, 0);
}
