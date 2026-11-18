#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    void *unk_14;
} S0;

extern int func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);
void func_0894DE7C(void *, s32, s32, s32, f32);
void func_08957878(s32 arg0);

void func_08937D9C(S0 *arg0, s32 arg1) {
    s32 *a;
    f32 *b;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_0894DE7C(arg0->unk_14, 0, *a, 0, *b);
        func_08957878(arg0->unk_10);
    }
    func_08852F00(arg1, 0);
}
