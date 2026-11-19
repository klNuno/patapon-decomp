#include "common.h"

extern f32 D_08A04160[];
extern f32 D_08A04168[];
extern f32 D_08A04170[];
extern f32 D_08A04174[];

f32 func_0894BB94(void *arg0, s32 arg1) {
    volatile f32 temp[5];

    temp[0] = D_08A04160[1];
    temp[1] = D_08A04168[0];
    temp[2] = D_08A04168[1];
    temp[3] = D_08A04170[0];
    temp[4] = D_08A04174[0];
    return temp[arg1];
}
