#include "common.h"

extern u8 D_08AD279C[];
extern f32 *D_08AD27B4[];
extern s32 D_08AD27B8[];

void func_088A326C(f32 *arg0, f32 *arg1) {
    f32 *p;

    if (D_08AD279C[0]) {
        p = D_08AD27B4[0];
        p[2] = arg0[0];
        p[3] = arg0[1];
        p[4] = 1.0f;
        p[0] = arg1[0];
        p[1] = arg1[1];
        D_08AD27B4[0] = p + 5;
    } else {
        p = D_08AD27B4[0];
        p[0] = arg0[0];
        p[1] = arg0[1];
        p[2] = arg0[2];
        D_08AD27B4[0] = p + 3;
    }
    D_08AD27B8[0]++;
}
