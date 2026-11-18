#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } T;

void func_089134D0(const T *arg0, s32 arg1, f32 (*arg2)[4]) {
    f32 x, y, z, w;
    f32 temp;
    f32 s = 0.0f;
    f32 b, c, a, d, e, f, h, g, i, j, k, l;

    y = arg0->unk_04;
    x = arg0->unk_00;
    z = arg0->unk_08;
    w = arg0->unk_0C;
    temp = w * w + (z * z + (x * x + y * y));
    s = 0.0f < temp ? 2.0f / temp : 0.0f;
    b = x * s;
    c = y * s;
    a = z * s;
    d = w * b;
    e = w * c;
    f = w * a;
    h = x * b;
    g = x * c;
    i = y * c;
    j = z * a;
    k = x * a;
    l = y * a;
    if (arg1 == 0) {
        f32 m = g - f;
        arg2[0][0] = 1.0f - (i + j);
        arg2[0][1] = g + f;
        arg2[0][2] = k - e;
        arg2[1][0] = m;
        arg2[1][1] = 1.0f - (h + j);
        arg2[1][2] = l + d;
        arg2[2][0] = k + e;
        arg2[2][1] = l - d;
        arg2[2][2] = 1.0f - (h + i);
    } else {
        f32 m = g - f;
        arg2[0][0] = 1.0f - (i + j);
        arg2[1][0] = g + f;
        arg2[2][0] = k - e;
        arg2[0][1] = m;
        arg2[1][1] = 1.0f - (h + j);
        arg2[2][1] = l + d;
        arg2[0][2] = k + e;
        arg2[1][2] = l - d;
        arg2[2][2] = 1.0f - (h + i);
    }
}
