#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 *unk_14;
} S;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089401B8(char *, s32, s32, s32, s32);

void func_088EAB18(S *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_089401B8(*(char **)(arg0->unk_14 + 0x36B10) + 0x1040, *a, *b, *c, *d);
    }
    func_08852F00(arg1, 0);
}
