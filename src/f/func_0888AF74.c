#include "common.h"

typedef struct Res2_08861F68 Res2_08861F68;

extern Res2_08861F68 *func_0888B0E4(s32 *, s32);
extern s32 D_089DDF2C[];

s32 func_0888AF74(s32 *arg0, s32 arg1) {
    s32 *temp0 = *(s32 **)arg0;
    s32 temp1 = D_089DDF2C[0];

    return *temp0 == temp1 ? func_0888B0E4(arg0, arg1) != NULL : 0;
}
