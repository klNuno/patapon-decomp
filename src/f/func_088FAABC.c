#include "common.h"

extern f32 D_089FE110[];
extern f32 D_089FE118[];

s32 func_088FAABC(s32 arg0) {
    f32 temp[4];
    s32 *p = (s32 *)&temp[arg0];

    temp[0] = D_089FE110[0];
    temp[1] = D_089FE110[1];
    temp[2] = D_089FE118[0];
    temp[3] = D_089FE118[1];
    return *p;
}
