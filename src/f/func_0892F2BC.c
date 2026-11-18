#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0892AB90(s32, s32);
void func_08933488(void *, f32 *);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;
typedef struct {
    u8 pad_00[0x170];
    u8 unk_170[1];
} U;

void func_0892F2BC(T *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    U *obj;
    f32 temp[2];
    f32 x;
    f32 y;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    obj = (U *)func_0892AB90(arg0->unk_10, *a);
    y = *c;
    x = *b;
    temp[0] = x;
    temp[1] = y;
    func_08933488(obj->unk_170, temp);
    func_08852F00(arg1, 0);
}
