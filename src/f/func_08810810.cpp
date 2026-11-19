#include "common.h"

extern "C" {
typedef struct { s8 unk_00; } T;
extern void func_08810830(char *arg0, s32 arg1, s8 arg2);

void func_08810810(char *arg0, s32 arg1) {
    T temp = { 0 };
    func_08810830(arg0, arg1, temp.unk_00);
}
}
