#include "common.h"

void func_088D6E14(void *, s32);
void func_089C6548(void *, s32, s32, s32);

void func_089BFC48(u8 *arg0) {
    func_088D6E14(arg0 + 0x14, *(s32 *)(arg0 + 0x10));
    func_089C6548(arg0 + 0xCC0, 0, 0, 0);
}
