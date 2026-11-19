#include "common.h"

extern "C" {
void func_0881F5C0(void *, s32, s32);

void func_08876EA8(u8 *arg0) {
    func_0881F5C0(arg0, 0, 0x400);
    func_0881F5C0(arg0 + 0x800, 0, 0x400);
    func_0881F5C0(arg0 + 0x400, 0, 0x400);
    func_0881F5C0(arg0 + 0xC00, 0, 0x200);
}
}
