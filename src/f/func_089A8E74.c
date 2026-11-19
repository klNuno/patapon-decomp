#include "common.h"

void func_089A9F6C(u8 *);
void func_089A9FB8(u8 *);
s32 func_089AA020(u8 *);

s32 func_089A8E74(u8 *arg0) {
    func_089A9F6C(arg0 + 0x1510);
    if (func_089AA020(arg0 + 0x1510) != 0) {
        func_089A9FB8(arg0 + 0x1510);
        return 0x10001;
    }
    return 0x10000;
}
