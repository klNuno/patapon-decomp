#include "common.h"

s32 func_08866B80(void *, s32);
void func_08866B54(void *, s32, s32);

void func_0899E0A0(u8 *arg0, void *arg1) {
    func_08866B54(arg0 + 0x710, 0, func_08866B80(arg1, 0));
    func_08866B54(arg0 + 0x710, 1, func_08866B80(arg1, 1));
    func_08866B54(arg0 + 0x710, 2, func_08866B80(arg1, 2));
    func_08866B54(arg0 + 0x710, 3, func_08866B80(arg1, 3));
}
