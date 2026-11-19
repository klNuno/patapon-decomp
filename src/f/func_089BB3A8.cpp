#include "common.h"

extern "C" {

s32 func_08856400(s32);
void func_089BB5A0(void *, void *, void *);
extern f32 D_089F24F0[], D_089F24F4[];

typedef struct {
    f32 unk_00, unk_04;
} T;

typedef struct {
    f32 unk_00, unk_04, unk_08, unk_0C;
} U;

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[0x48];
    u8 unk_90[0x44];
    s32 unk_D4;
    u8 pad_D8[0x1F8];
    f32 unk_2D0, unk_2D4;
} A;

static inline void unk_00(u8 *p) {
    s32 n = 16;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n != 0);
    }
}

void func_089BB3A8(A *arg0, T *arg1, U *arg2, s32 arg3) {
    T t, a, b, c, d, e, f;
    struct { U unk_00; u8 pad_10[8]; } g0;
    U h;
    f32 n, x, y;
    s32 zero = 0;

    t.unk_00 = arg1->unk_00;
    t.unk_04 = arg1->unk_04;
    unk_00((u8 *)&g0.unk_00);
    g0.unk_00.unk_00 = arg2->unk_00;
    g0.unk_00.unk_04 = arg2->unk_04;
    g0.unk_00.unk_08 = arg2->unk_08;
    g0.unk_00.unk_0C = arg2->unk_0C;
    arg0->unk_D4 = func_08856400((s32)&g0.unk_00);
    unk_00((u8 *)&h);
    h.unk_00 = arg2->unk_00;
    h.unk_04 = arg2->unk_04;
    h.unk_08 = arg2->unk_08;
    h.unk_0C = arg2->unk_0C;
    arg0->unk_44 = func_08856400((s32)&h);
    a.unk_00 = 1.0f;
    a.unk_04 = 1.0f;
    func_089BB5A0(arg0, &t, &a);
    n = *(volatile f32 *)D_089F24F0;
    x = t.unk_00 + *(volatile f32 *)D_089F24F0;
    t.unk_00 = x;
    if (arg3 != 0) {
        f32 z = 1.0f;
        c.unk_00 = arg0->unk_2D4 - n;
        c.unk_04 = D_089F24F4[0];
        b.unk_04 = t.unk_04 + z;
        b.unk_00 = x + (f32)zero;
        func_089BB5A0(arg0->unk_90, &b, &c);
    } else {
        y = arg0->unk_2D0 - 2.0f * n;
        f32 v = t.unk_04;
        f32 u = D_089F24F4[0];
        e.unk_04 = u;
        f32 z = 1.0f;
        d.unk_04 = v + z;
        e.unk_00 = y;
        d.unk_00 = x + (f32)zero;
        func_089BB5A0(arg0->unk_90, &d, &e);
        t.unk_00 += y + D_089F24F0[0];
        f.unk_00 = -1.0f;
        f.unk_04 = 1.0f;
        func_089BB5A0(arg0, &t, &f);
    }
}
}
