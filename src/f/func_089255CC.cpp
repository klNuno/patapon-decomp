#include "common.h"

extern "C" {
typedef struct T T;

void func_0892535C(s32 *, void *);
void func_08925364(s32 *, T *);
void func_089253E4(s32 *, T *, s32, s32);

void func_089255CC(u8 *arg0) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    func_08925364(&temp1, (T *)(arg0 + 0x428));
    func_0892535C(&temp2, arg0 + 0x428);
    func_089253E4(&temp0, (T *)(arg0 + 0x428), temp1, temp2);
}
}
