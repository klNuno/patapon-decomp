#include "common.h"

extern "C" {
typedef struct { s8 unk_00; } T;
extern void func_088121F0(void *arg0, s32 arg1, s32 arg2, s8 arg3);

void func_088121D0(void *arg0, s32 arg1, s32 arg2) {
    T temp = { 0 };
    func_088121F0(arg0, arg1, arg2, temp.unk_00);
}
}
