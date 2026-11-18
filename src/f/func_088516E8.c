#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S_088516E8;

S_088516E8 *func_08852FFC(void *);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);

void func_088516E8(void *arg0, void *arg1) {
    S_088516E8 *s;
    s32 *a;
    s32 *n;
    u8 ok;
    s32 i;
    u32 v;

    s = func_08852FFC(arg1);
    ok = 1;
    a = func_0885356C(arg1, 0, 0, 4);
    n = func_0885356C(arg1, 1, 0, 1);
    for (i = 0; i < *n; i++) {
        v = *func_0885356C(arg1, 2, 0, 4);
        if (!((s->unk_04[v >> 3] >> (v & 7)) & 1)) {
            ok = 0;
        }
    }
    if (ok) {
        func_08852C5C(arg1, *a, 0);
    }
    func_08852F00(arg1, 0);
}
