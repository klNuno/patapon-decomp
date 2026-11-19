#include "common.h"

extern "C" {

u32 func_0880C7B8(void *);
void func_0880DD1C(s32, s32, u32);
extern u8 D_08A4965C[];

void func_0880C9C0(s32 arg0, s32 arg1) {
    func_0880DD1C(arg0, arg1, func_0880C7B8(D_08A4965C));
}

}
