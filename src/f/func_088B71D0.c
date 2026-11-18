#include "common.h"

void func_08866B54(void *, s32, s32);
s32 func_08866B80(void *, s32);

void func_088B71D0(u8 *arg0, void *arg1) {
    func_08866B54(arg0 + 0x160, 0, func_08866B80(arg1, 0));
    func_08866B54(arg0 + 0x160, 1, func_08866B80(arg1, 1));
    func_08866B54(arg0 + 0x160, 2, func_08866B80(arg1, 2));
    func_08866B54(arg0 + 0x160, 3, func_08866B80(arg1, 3));
}
