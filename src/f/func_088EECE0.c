#include "common.h"

typedef struct V_088EECE0 {
    f32 unk_00;
    f32 unk_04;
} V_088EECE0;

typedef struct A_088EECE0 {
    u8 pad_00[0x14];
    s32 unk_14;
} A_088EECE0;

void func_08852F00(s32, s32);
f32 *func_0885356C(s32, s32, s32, s32);
void func_0892DFA0(s32, V_088EECE0 *);

void func_088EECE0(A_088EECE0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;
    V_088EECE0 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != 0) {
        f32 y = *b;
        f32 x = *a;
        v.unk_00 = x;
        v.unk_04 = y;
        func_0892DFA0(arg0->unk_14, &v);
    }
    func_08852F00(arg1, 0);
}
