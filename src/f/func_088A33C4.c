#include "common.h"

extern f32 D_08AD27C0[];
extern f32 D_08AD27C4[];
extern f32 D_08AD27C8[];

void func_088A33C4(const volatile f32 *arg0) {
    f32 temp = arg0[0];
    f32 temp1 = arg0[1];
    f32 temp2 = arg0[2];
    f32 temp3 = arg0[3];

    D_08AD27C0[0] = temp;
    D_08AD27C4[0] = temp1;
    D_08AD27C8[0] = temp2;
    D_08AD27C8[1] = temp3;
}
