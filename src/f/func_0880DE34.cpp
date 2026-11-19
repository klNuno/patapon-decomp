#include "common.h"

extern "C" {
typedef struct S S;

void func_0880DE54(S *arg0, u32 arg1, s32 arg2);

void func_0880DE34(S *arg0, u32 arg1) {
    struct { s8 unk_00; } temp = { 0 };
    func_0880DE54(arg0, arg1, temp.unk_00);
}
}
