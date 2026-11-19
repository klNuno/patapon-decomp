#include "common.h"

extern "C" {
typedef struct { s8 unk_00; } T;
extern s32 func_08812878(void *arg0, s32 arg1, s32 *arg2, s8 arg3);

s32 func_08812854(void *arg0, s32 arg1) {
    s32 temp;
    T temp2 = { 0 };
    return func_08812878(arg0, arg1, &temp, temp2.unk_00);
}
}
