#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Obj_0890263C;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void *func_088C6484(void *);
void *func_088BCF70(void *);
void func_088CF3B4(void *, s32, s32, f32);

void func_0890263C(Obj_0890263C *arg0, void *arg1) {
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    func_088CF3B4(func_088BCF70(func_088C6484(arg0->unk_10 + 0x506F0)), *a, 0, *b);
    func_08852F00(arg1, 0);
}
