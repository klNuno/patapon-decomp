#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_08904408;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
f32 func_08990B1C(void *, s32, f32);

void func_08904408(Obj_08904408 *arg0, void *arg1) {
    f32 *a;
    f32 *b;

    a = (f32 *)func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    *b = func_08990B1C(arg0->unk_10 + 0x506D0, 0, *a);
    func_08852F00(arg1, 0);
}
