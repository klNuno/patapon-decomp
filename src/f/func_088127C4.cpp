#include "common.h"

extern "C" {
typedef struct { s8 unk_00; } T;
extern void func_08812F70(void *arg0, s32 arg1, s8 arg2);

void func_088127C4(void *arg0, s32 arg1, s32 arg2, T arg3) {
    T temp = arg3;
    func_08812F70(arg0, arg2, temp.unk_00);
}
}
