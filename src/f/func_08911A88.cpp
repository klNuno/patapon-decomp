#include "common.h"

extern "C" {
typedef struct S_0891BFFC S_0891BFFC;
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08945FEC(S_0891BFFC *, s32, s32);

void func_08911A88(u8 *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    s32 *temp2 = func_0885356C(arg1, 1, 1, 4);
    func_08945FEC((S_0891BFFC *)(arg0 + 0x10), *temp, *temp2);
    func_08852F00(arg1, 0);
}
}
