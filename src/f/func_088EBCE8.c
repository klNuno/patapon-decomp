#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} S0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08873D28(void *, u32, s32, f32);
void func_08873DA8(void *, u32, s32, f32);

void func_088EBCE8(S0 *arg0, void *arg1) {
    f32 *a;
    s32 *b;
    s32 *c;

    a = (f32 *)func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (*func_0885356C(arg1, 3, 1, 4) == 0) {
        func_08873D28(arg0->unk_14, *b, *c == 1, *a);
    } else {
        func_08873DA8(arg0->unk_14, *b, *c == 1, *a);
    }
    func_08852F00(arg1, 0);
}
