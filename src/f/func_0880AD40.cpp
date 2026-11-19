#include "common.h"

extern "C" {
typedef struct { s8 unk_00; } T;
extern s32 func_0880C8F8(void *arg0, s8 arg1);

s32 func_0880AD40(s32 arg0) {
    T temp = { 0 };
    return func_0880C8F8((void *)arg0, temp.unk_00);
}
}
