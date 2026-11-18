#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V_088A1D0C;

typedef struct {
    V_088A1D0C unk_00;
    s32 unk_10;
    s32 unk_14;
} Q_088A1D0C;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} F_088A1D0C;

typedef struct {
    s32 unk_00[7];
} B_088A1D0C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0A[0x16];
    u8 unk_20[0xC];
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[0x4C];
    V_088A1D0C unk_80;
} S_088A1D0C;

void func_088A17E8(void *);
void func_088A207C(F_088A1D0C *, S_088A1D0C *);
void func_088A2108(void *, s32 *, s32, s32, s32, s32, s32, s32, s32, s32);
B_088A1D0C *func_088A3068(B_088A1D0C *);
void func_088A308C(B_088A1D0C *, s32);
void func_088A30CC(B_088A1D0C *, s32);
s32 func_088A311C(B_088A1D0C *);
s32 func_088A3124(B_088A1D0C *);
s32 func_088A312C(B_088A1D0C *);
s32 func_088A3134(B_088A1D0C *);
s32 func_088A313C(B_088A1D0C *);
s32 func_088A3144(B_088A1D0C *);
s32 func_088A314C(B_088A1D0C *);
void func_088A3324(f32, f32);

s32 func_088A1D0C(S_088A1D0C *arg0, s32 *arg1) {
    B_088A1D0C b;
    F_088A1D0C f;
    Q_088A1D0C v;
    s32 a;
    s32 c;
    s32 d;
    s32 e;
    s32 g;
    s32 h;

    v.unk_00 = arg0->unk_80;
    arg0->unk_08 = 0;
    arg0->unk_09 = 0;
    func_088A3068(&b);
    func_088A30CC(&b, *arg1);
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    a = func_088A311C(&b);
    c = func_088A3124(&b);
    d = func_088A312C(&b);
    e = func_088A3134(&b);
    g = func_088A313C(&b);
    h = func_088A3144(&b);
    func_088A2108(arg0->unk_20, arg1, a, c, d, e, g, h, func_088A314C(&b), arg0->unk_00);
    func_088A17E8(arg0->unk_20);
    arg0->unk_80 = v.unk_00;
    arg0->unk_04 = 0;
    func_088A207C(&f, arg0);
    func_088A3324(f.unk_00, f.unk_04);
    func_088A308C(&b, -1);
    return 1;
}
