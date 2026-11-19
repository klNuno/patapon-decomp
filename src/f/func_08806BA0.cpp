#include "common.h"

extern "C" {

void func_08806B7C(s32, s32);
s32 func_08806BE0(s32);
s32 func_08806BE8(s32);

void func_08806BA0(s32 arg0) {
    s32 temp = func_08806BE8(arg0 + 0xC);
    func_08806B7C(temp, *(s32 *)func_08806BE0(arg0 + 0xC));
}

}
