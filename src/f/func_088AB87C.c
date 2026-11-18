#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088D5F30(s32, s32, f32);

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_088AB87C(T *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    func_088D5F30(arg0->unk_14->unk_36B10 + 0x3E8, *a, *b);
    func_08852F00(arg1, 0);
}
