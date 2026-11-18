#include "common.h"

typedef struct {
    s32 unk_00;
    u8 *unk_04;
} Struct_0885133C;

Struct_0885133C *func_08852FFC(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_0885133C(void *arg0, void *arg1) {
    Struct_0885133C *s;
    s32 *n;
    s32 i;
    u32 v;

    s = func_08852FFC(arg1);
    n = func_0885356C(arg1, 0, 0, 1);
    for (i = 0; i < *n; i++) {
        v = *func_0885356C(arg1, 1, 0, 4);
        s->unk_04[v >> 3] |= (u8)(1 << (v & 7));
    }
    func_08852F00(arg1, 0);
}
