#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} S;

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
} T;

void func_08926534(const S *arg0, s32 arg1, T *arg2) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 temp;
    f32 scale;
    f32 x;
    f32 y;
    f32 z;
    f32 ad;
    f32 bd;
    f32 cd;
    f32 ab;
    f32 aa;
    f32 bb;
    f32 cc;
    f32 ac;
    f32 bc;

    b = arg0->unk_04;
    a = arg0->unk_00;
    c = arg0->unk_08;
    d = arg0->unk_0C;
    temp = d * d + (c * c + (a * a + b * b));
    scale = (0.0f < temp) ? 2.0f / temp : 0.0f;
    y = a * scale;
    x = b * scale;
    z = c * scale;
    ad = d * y;
    bd = d * x;
    cd = d * z;
    aa = a * y;
    ab = a * x;
    ac = a * z;
    bb = b * x;
    bc = b * z;
    cc = c * z;
    if (arg1 == 0) {
        arg2->unk_00 = 1.0f - (bb + cc);
        arg2->unk_04 = ab + cd;
        arg2->unk_08 = ac - bd;
        arg2->unk_10 = ab - cd;
        arg2->unk_14 = 1.0f - (aa + cc);
        arg2->unk_18 = bc + ad;
        arg2->unk_20 = ac + bd;
        arg2->unk_24 = bc - ad;
        arg2->unk_28 = 1.0f - (aa + bb);
    } else {
        arg2->unk_00 = 1.0f - (bb + cc);
        arg2->unk_10 = ab + cd;
        arg2->unk_20 = ac - bd;
        arg2->unk_04 = ab - cd;
        arg2->unk_14 = 1.0f - (aa + cc);
        arg2->unk_24 = bc + ad;
        arg2->unk_08 = ac + bd;
        arg2->unk_18 = bc - ad;
        arg2->unk_28 = 1.0f - (aa + bb);
    }
}
