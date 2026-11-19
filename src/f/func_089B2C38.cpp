#include "common.h"

extern "C" {
void func_088F24B0(void *);
extern s32 func_089B33CC(s32);

void func_089B2C38(u8 *arg0) {
    func_088F24B0(arg0 + 0x70);
    func_088F24B0(arg0 + 0xE10);
    func_088F24B0(arg0 + 0x740);
    func_089B33CC((s32)arg0);
}
}
