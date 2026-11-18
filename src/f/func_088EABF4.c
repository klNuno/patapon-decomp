#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    u8 *unk_36B10;
} G_088EABF4;

typedef struct {
    u8 pad_00[0x14];
    G_088EABF4 *unk_14;
} S_088EABF4;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089401DC(void *, s32, s32, s32);

void func_088EABF4(S_088EABF4 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_089401DC(arg0->unk_14->unk_36B10 + 0x1040, *a, *b, *c);
    }
    func_08852F00(arg1, 0);
}
