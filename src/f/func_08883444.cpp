#include "common.h"

extern "C" {
s32 func_088586E8(void);
s32 func_089B53D8(s32);
extern s32 func_089D58C0(s32);

void func_08883444(void) {
    func_089D58C0(func_089B53D8(func_088586E8()) + 0x2E78);
}
}
