#include "common.h"
extern "C" {
extern s32 func_0897CD40(void *, s32);
void func_0883C9F0(void *arg0, s32 arg1);
struct S {};
static inline s32 func_0887882C_0(void *arg0, s32 arg1, const S &) {
    return func_0897CD40(arg0, arg1);
}
void func_0887882C(u8 *arg0, void *arg1, s32 arg2) {
    func_0883C9F0(arg1, func_0887882C_0(arg0 + 0x644, arg2, S()));
}
}
