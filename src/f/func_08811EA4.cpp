#include "common.h"

extern "C" {

extern s32 func_0880F5B4(s32);
void func_08811E7C(s32, s32);
s32 func_08811E9C(void *);

void func_08811EA4(s32 arg0) {
    s32 temp = func_08811E9C((void *)(arg0 + 0xC));
    func_08811E7C(temp, *(s32 *)func_0880F5B4(arg0 + 0xC));
}

}
