#include "common.h"

extern "C" {

class O {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
    u8 pad_48[4];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[0x38];
    O unk_90;
} V;

typedef struct {
    u8 pad_00[0x168];
    u8 unk_168[0xB24];
    u8 unk_C8C;
    u8 pad_C8D[0xB];
    f32 unk_C98;
    u8 unk_C9C;
    u8 unk_C9D;
} T;

typedef struct Unk_089CA058_Local {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
} F;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Unk1;

char *func_08985828(s32, s32);
void func_08985884(f32, s32, s32, Unk1 *);
s32 func_08856400(s32);
extern s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_089CD5F8(void *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
extern int func_08864E80(char *, char *);
extern Unk1 D_089F33B0[];
extern s32 D_08A097B0[];
extern f32 D_08A097B4[];

void func_089C8130(T *arg0) {
    f32 x;
    struct { Unk_089CA058_Local unk_00; u8 pad_40[0xC]; } m;
    F c, d;
    f32 y;
    u8 *q;
    char *p;
    s32 n;
    V *v;

    if (((V *)func_08985828((s32)arg0, 0))->unk_4C == 10
        || ((V *)func_08985828((s32)arg0, 0))->unk_4C == 11
        || ((V *)func_08985828((s32)arg0, 0))->unk_4C == 12) {
        if (6.0f < (f32)(s32)((V *)func_08985828((s32)arg0, 2))->unk_54) {
            ((V *)func_08985828((s32)arg0, 1))->unk_90.unk_14(10);
            ((V *)func_08985828((s32)arg0, 2))->unk_90.unk_14(11);
            ((V *)func_08985828((s32)arg0, 0))->unk_90.unk_14(12);
        }
        if (arg0->unk_C9C != 0 && 10.0f <= (f32)(s32)((V *)func_08985828((s32)arg0, 0))->unk_54) {
            arg0->unk_C9C = 0;
            func_08985884(4.0f, (s32)arg0, 0x76, D_089F33B0);
        }
    }
    if (((V *)func_08985828((s32)arg0, 0))->unk_4C == 9) {
        x = arg0->unk_C98 - 0.05f;
        y = *(x < D_08A097B4[0] ? D_08A097B4 : &x);
        arg0->unk_C98 = y;
        v = (V *)func_08985828((s32)arg0, 8);
        q = (u8 *)(u32)&c;
        n = 0x10;
        if (q != NULL) {
            do {
                *q++ = 0;
            } while (--n != 0);
        }
        c.unk_00 = 0x3F800000;
        c.unk_04 = 0x3F800000;
        c.unk_08 = 0x3F800000;
        c.unk_0C = y;
        v->unk_44 = func_08856400((s32)&c);
        y = arg0->unk_C98;
        v = (V *)func_08985828((s32)arg0, 7);
        q = (u8 *)(u32)&d;
        n = 0x10;
        if (q != NULL) {
            do {
                *q++ = 0;
            } while (--n != 0);
        }
        d.unk_00 = 0x3F800000;
        d.unk_04 = 0x3F800000;
        d.unk_08 = 0x3F800000;
        d.unk_0C = y;
        v->unk_44 = func_08856400((s32)&d);
    }
    if (arg0->unk_C9D == 0 && ((V *)func_08985828((s32)arg0, 0))->unk_4C == 13
        && (s32)(f32)(s32)((V *)func_08985828((s32)arg0, 0))->unk_54 >= 5) {
        arg0->unk_C9D = 1;
        func_08878864(func_089B53D8(func_088586E8()), 0x450116, 2, 1.0f, 0.0f, 0.0f);
    }
    if (((V *)func_08985828((s32)arg0, 0))->unk_4C == 15 && arg0->unk_C8C == 0) {
        func_089CD5F8(arg0->unk_168);
        arg0->unk_C8C = 1;
    }
    if (((V *)func_08985828((s32)arg0, 3))->unk_4C != 2) {
        p = func_08985828((s32)arg0, 0);
        func_08866464(&m.unk_00, p, D_08A097B0[0]);
        func_08864E80(func_08985828((s32)arg0, 3), (char *)&m);
    }
}

}
