#include "common.h"

typedef struct {
    f32 unk_00[3];
} V;
typedef struct {
    s32 unk_00;
    V unk_04;
} T;
typedef struct {
    u8 pad_00[0x506F0];
    u8 unk_506F0[0xB21DC - 0x506F0];
    T unk_B21DC;
} B;
typedef struct S S;
typedef struct {
    u8 pad_00[0x10];
    B *unk_10;
} P;
typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
    s32 unk_44;
    s32 unk_48;
    u8 pad_4C[0x84];
    s32 unk_D0;
    V unk_D4;
} R;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
void *func_088C6474(void *);
R *func_0898FBD0(S *, s32, s32, s32, s32, s32);
u32 func_089B5464(s32);

void func_089048F0(P *arg0, void *arg1)
{
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 e;
    f32 *f;
    R *r;
    T *t;
    f32 g;
    f32 h;
    f32 j;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    f = (f32 *)func_0885356C(arg1, 5, 1, 4);
    e = 0x1000B;
    if (*(volatile s32 *)b == 0 && arg0->unk_10->unk_B21DC.unk_00 != -1) {
        e = 0x1000D;
    }
    r = func_0898FBD0((S *)func_088C6474(arg0->unk_10->unk_506F0), *a, *b, *c, *d, e);
    t = &arg0->unk_10->unk_B21DC;
    r->unk_D0 = t->unk_00;
    r->unk_D4 = t->unk_04;
    j = (f32)(func_089B5464(func_088586E8()) % 100U);
    g = 0.01f * j;
    j = 2.0f;
    j *= g;
    h = *f;
    h -= 2.0f;
    r->unk_40 = h + j;
    r->unk_44 = 0;
    r->unk_48 = 0;
    func_08852F00(arg1, 0);
}
