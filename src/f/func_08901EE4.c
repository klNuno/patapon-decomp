#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);
void func_088F333C(void *, V2 *);
void func_088DDF80(u8 *);

void func_08901EE4(S0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;
    V2 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    {
        f32 x = *a;
        f32 y = *b;
        v.unk_00 = x;
        v.unk_04 = y;
    }
    func_088F333C(arg0->unk_10 + 0x50560, &v);
    func_088DDF80(arg0->unk_10);
    func_08852F00(arg1, 0);
}
