#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} S08937FCC;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_089587A0(void *, s32 *, s32 *, s32 *, s32 *);

void func_08937FCC(S08937FCC *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    func_089587A0(arg0->unk_10, func_0885356C(arg1, 3, 1, 4), a, c, b);
    func_08852F00(arg1, 0);
}
