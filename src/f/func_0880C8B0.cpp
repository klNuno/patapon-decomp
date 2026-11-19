#include "common.h"

extern "C" {
u32 func_0880C7B8(void *);
void func_0880DD1C(void *, s32, u32);
extern u8 D_08A49658[];

void func_0880C8B0(void *arg0, s32 arg1) {
    func_0880DD1C(arg0, arg1, func_0880C7B8(D_08A49658));
}
}
