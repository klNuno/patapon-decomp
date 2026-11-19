#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} T;

s32 func_088586E8(void);
f32 func_0887A67C(f32, s32, s32);
void func_088C55BC(void *, f32);
void *func_089B5470(s32, s32);

void func_08931F2C(T *arg0, s32 arg1) {
    void *temp = func_089B5470(func_088586E8(), arg0->unk_50);
    f32 temp2 = func_0887A67C(1.0f, arg1, 0x12C0);

    func_088C55BC(temp, 0.5f * temp2);
}
