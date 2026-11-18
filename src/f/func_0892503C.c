#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089255CC(void *);
void func_08925918(void *, V *, f32, f32);

void func_0892503C(S *arg0, void *arg1) {
    V temp;
    f32 *a;
    f32 *b;
    f32 *c;
    f32 *d;
    f32 y;
    f32 x;

    a = (f32 *)func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    d = (f32 *)func_0885356C(arg1, 3, 1, 4);
    if (*func_0885356C(arg1, 4, 1, 4) == 1) {
        func_089255CC(arg0->unk_10);
    }
    y = *b;
    x = *a;
    temp.unk_00 = x;
    temp.unk_04 = y;
    func_08925918(arg0->unk_10, &temp, *c, *d);
    func_08852F00(arg1, 0);
}
