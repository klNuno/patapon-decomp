#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Q;

typedef struct {
    f32 unk_00[4][4];
} M;

void func_0891072C(Q *arg0, s32 arg1, M *arg2) {
    f32 x, y, z, w, n;
    f32 s;
    f32 xs, ys, zs;
    f32 wx, wy, wz, xx, xy, xz, yy, yz, zz;

    y = arg0->unk_04;
    x = arg0->unk_00;
    z = arg0->unk_08;
    w = arg0->unk_0C;
    n = w * w + (z * z + (x * x + y * y));
    s = 0.0f < n ? 2.0f / n : 0.0f;

    xs = x * s;
    ys = y * s;
    zs = z * s;
    wx = w * xs;
    wy = w * ys;
    wz = w * zs;
    xx = x * xs;
    xy = x * ys;
    xz = x * zs;
    yy = y * ys;
    yz = y * zs;
    zz = z * zs;

    if (arg1 == 0) {
        arg2->unk_00[0][0] = 1.0f - (yy + zz);
        arg2->unk_00[0][1] = xy + wz;
        arg2->unk_00[0][2] = xz - wy;
        arg2->unk_00[1][0] = xy - wz;
        arg2->unk_00[1][1] = 1.0f - (xx + zz);
        arg2->unk_00[1][2] = yz + wx;
        arg2->unk_00[2][0] = xz + wy;
        arg2->unk_00[2][1] = yz - wx;
        arg2->unk_00[2][2] = 1.0f - (xx + yy);
    } else {
        arg2->unk_00[0][0] = 1.0f - (yy + zz);
        arg2->unk_00[1][0] = xy + wz;
        arg2->unk_00[2][0] = xz - wy;
        arg2->unk_00[0][1] = xy - wz;
        arg2->unk_00[1][1] = 1.0f - (xx + zz);
        arg2->unk_00[2][1] = yz + wx;
        arg2->unk_00[0][2] = xz + wy;
        arg2->unk_00[1][2] = yz - wx;
        arg2->unk_00[2][2] = 1.0f - (xx + yy);
    }
}
