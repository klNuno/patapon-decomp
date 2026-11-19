#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} T;

s32 func_088586E8(void);
void *func_089B5470(s32, s32);
void func_088C557C(void *, s32);

void func_0893202C(T *arg0, s32 arg1) {
    s32 temp = func_088586E8();

    func_088C557C(func_089B5470(temp, arg0->unk_50), arg1);
}
}
