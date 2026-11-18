#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x90];
    V4 unk_90;
    V4 unk_A0;
    V4 unk_B0;
    u8 pad_C0[0xA8];
    f32 unk_168;
    u8 pad_16C[0x264];
    f32 unk_3D0;
    f32 unk_3D4;
} T;

void func_08854CD8(V4 *, V4 *, V4 *);
void func_08854D10(V4 *, V4 *, V4 *);
void func_08854F60(f32, V4 *, V4 *);
void func_088A09D4(T *arg0, f32 arg1);
extern f32 D_089FAA68[];
extern const f32 D_089FAA6C[];
extern f32 D_089FAA70[];

void func_088A0540(T *arg0, u32 arg1)
{
    V4 a;
    V4 b;
    V4 c;
    V4 d;
    f32 e;
    f32 x;
    f32 y;
    f32 *p;

    arg0->unk_A0.unk_00 = arg0->unk_90.unk_00;
    arg0->unk_A0.unk_04 = arg0->unk_90.unk_04;
    arg0->unk_A0.unk_08 = arg0->unk_90.unk_08;
    arg0->unk_A0.unk_0C = arg0->unk_90.unk_0C;
    a.unk_00 = 0.0f;
    e = (f32)arg1;
    e /= 4800.0f;
    a.unk_08 = 0.0f;
    a.unk_0C = 0.0f;
    a.unk_04 = -D_089FAA68[0] * e;
    func_08854CD8(&arg0->unk_B0, &arg0->unk_B0, &a);
    e = D_089FAA6C[0];
    arg0->unk_B0.unk_0C = 0.0f;
    func_088A09D4(arg0, e);
    if (arg0->unk_90.unk_04 < 1.0f) {
        func_08854F60(arg0->unk_3D0, &arg0->unk_B0, &arg0->unk_B0);
        arg0->unk_B0.unk_0C = 0.0f;
    } else {
        func_08854F60(arg0->unk_3D4, &arg0->unk_B0, &arg0->unk_B0);
        arg0->unk_B0.unk_0C = 0.0f;
    }
    x = arg0->unk_B0.unk_00;
    d.unk_00 = x;
    d.unk_04 = arg0->unk_B0.unk_04;
    d.unk_08 = arg0->unk_B0.unk_08;
    d.unk_0C = arg0->unk_B0.unk_0C;
    d.unk_00 = x * arg0->unk_168;
    func_08854CD8(&arg0->unk_90, &arg0->unk_90, &d);
    b.unk_00 = arg0->unk_90.unk_00;
    b.unk_04 = arg0->unk_90.unk_04;
    b.unk_08 = arg0->unk_90.unk_08;
    b.unk_0C = arg0->unk_90.unk_0C;
    p = D_089FAA70[0] > b.unk_04 ? D_089FAA70 : &b.unk_04;
    b.unk_04 = *p;
    arg0->unk_90.unk_00 = b.unk_00;
    arg0->unk_90.unk_04 = b.unk_04;
    arg0->unk_90.unk_08 = b.unk_08;
    arg0->unk_90.unk_0C = b.unk_0C;
    y = arg0->unk_168;
    if (y > 0.01f) {
        func_08854D10(&c, &arg0->unk_90, &arg0->unk_A0);
        arg0->unk_B0.unk_00 = c.unk_00;
        arg0->unk_B0.unk_04 = c.unk_04;
        arg0->unk_B0.unk_08 = c.unk_08;
        arg0->unk_B0.unk_0C = c.unk_0C;
        arg0->unk_B0.unk_00 = (arg0->unk_90.unk_00 - arg0->unk_A0.unk_00) / arg0->unk_168;
    } else {
        arg0->unk_B0.unk_00 *= y;
    }
}
