#include "common.h"

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0xD80];
    f32 unk_D80;
    f32 unk_D84;
    u8 pad_D88[0x18];
    f32 unk_DA0;
    f32 unk_DA4;
} U;
typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_0893713C(T *arg0, void *arg1) {
    f32 *a;
    f32 *b;
    f32 *c;
    f32 *d;
    U *temp;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    temp = arg0->unk_14;
    temp->unk_D80 = *a;
    temp->unk_D84 = *b;
    temp->unk_DA0 = *c;
    temp->unk_DA4 = *d;
    func_08852F00(arg1, 0);
}
