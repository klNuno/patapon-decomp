#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
extern void func_08956F18(void *, s32);

void func_089388C0(T *arg0, void *arg1) {
    s32 temp = *func_0885356C(arg1, 0, 1, 4);
    func_08956F18(arg0->unk_10, (s32)(temp != 0 ? (void *)-1 : (void *)0));
    func_08852F00(arg1, 0);
}
}
