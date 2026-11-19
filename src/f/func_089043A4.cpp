#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x506D0];
    u8 unk_506D0[1];
} S;

typedef struct {
    u8 pad_00[0x10];
    S *unk_10;
} T;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);
extern void func_08990B0C(void *, f32);

void func_089043A4(T *arg0, void *arg1) {
    f32 *temp = func_0885356C(arg1, 0, 1, 4);
    func_08990B0C(arg0->unk_10->unk_506D0, *temp);
    func_08852F00(arg1, 0);
}
}
