#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08942660(s32 arg0, s32 arg1, f32 fparg0);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} T;

void func_08941B44(T *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    f32 *b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_10 != 0) {
        func_08942660(arg0->unk_10 + 0x1B0, *a, *b);
    }
    func_08852F00(arg1, 0);
}
