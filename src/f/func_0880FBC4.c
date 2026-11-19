#include "common.h"

extern s32 func_0880DA44(s32);

typedef struct {
    u32 unk_00 : 1;
    u32 unk_01 : 31;
} T;

void func_0880FBC4(s32 arg0, u32 arg1) {
    T *temp = (T *)func_0880DA44(arg0);
    temp->unk_01 = arg1;
}
