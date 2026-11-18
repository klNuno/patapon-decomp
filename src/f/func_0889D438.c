#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} S_0889DB24;

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
} R;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} T0;

typedef struct {
    u8 pad_00[0x14B4];
    T0 *unk_14B4;
} T1;

typedef struct {
    u8 pad_00[0x3A0];
    T1 *unk_3A0;
} T2;

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
} T3;

typedef struct {
    u8 pad_00[0xC0];
    f32 unk_C0;
    u8 pad_C4[0x330];
    T3 *unk_3F4;
    T2 *unk_3F8;
    u8 unk_3FC[4];
    u8 pad_400[8];
    f32 unk_408;
    s32 unk_40C;
} A;

extern u8 *D_08AD1F14[];
extern s32 func_0885AB7C(s32, s32, s32);
S_0889DB24 *func_08877444(u8 *);
void func_088A0754(A *arg0, f32 arg1, s32 arg2);

void func_0889D438(A *arg0, s32 arg1) {
    s32 t;
    struct { u32 unk_00; } v;
    s32 n;
    u32 a, b, c, d;
    s32 *p;
    T0 *q;
    T1 *r;
    T2 *s;
    f32 x;
    f32 y;
    u8 *g;

    if (arg0->unk_3F4 == NULL) {
        return;
    }
    p = &arg0->unk_3F4->unk_92E0;
    if (p == NULL) {
        return;
    }
    if (*p == 1) {
        x = -1.0f;
    } else {
        x = 1.0f;
    }
    a = arg0->unk_3FC[1];
    b = arg0->unk_3FC[2];
    c = arg0->unk_3FC[3];
    d = arg0->unk_3FC[0];
    v.unk_00 = (c << 24) | ((b << 16) | (d | (a << 8)));
    n = 0;
    g = D_08AD1F14[0];
    g = g != NULL ? g : NULL;
    t = ((R *)func_0885AB7C(func_08877444(g)->unk_0C, 0, arg0->unk_40C))->unk_48;
    if (t != 0) {
        n = t;
    }
    s = arg0->unk_3F8;
    if (s != NULL) {
        r = s->unk_3A0;
        if (r != NULL) {
            q = r->unk_14B4;
            if (q != NULL) {
                t = q->unk_08;
                if (t != 0) {
                    n = t;
                }
            }
        }
    }
    if (arg1 != -1) {
        n = arg1;
    }
    switch (n) {
    case 1:
        x = 1.0f;
        y = arg0->unk_C0 > 0.0f ? x : -1.0f;
        if (y < 0.0f) {
            x = -1.0f;
        }
        break;
    case 3:
        x *= -1.0f;
        break;
    }
    func_088A0754(arg0, x * arg0->unk_408, v.unk_00);
}
