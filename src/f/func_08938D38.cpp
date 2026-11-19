#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x22060];
    u8 unk_22060[1];
} T;

typedef struct {
    u8 pad_00[0x10];
    T *unk_10;
} U;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0894BDF4(void *);

void func_08938D38(U *arg0, void *arg1) {
    s32 *temp = func_0885356C(arg1, 0, 1, 4);
    *temp = func_0894BDF4(arg0->unk_10->unk_22060);
    func_08852F00(arg1, 0);
}
}
