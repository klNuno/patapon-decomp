#include "common.h"

void func_08866B54(s32 arg0, s32 arg1, char *arg2);
s32 func_08866B80(s32 arg0, s32 arg1);

void func_0899A83C(s32 arg0, s32 arg1) {
    func_08866B54(arg0 + 0xFA0, 0, (char *)func_08866B80(arg1, 0));
    func_08866B54(arg0 + 0xFA0, 1, (char *)func_08866B80(arg1, 1));
    func_08866B54(arg0 + 0xFA0, 2, (char *)func_08866B80(arg1, 2));
    func_08866B54(arg0 + 0xFA0, 3, (char *)func_08866B80(arg1, 3));
}
