#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S;

S *func_08852FFC(void *);
u32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
void func_08852C5C(void *, u32, s32);

void func_088517F4(void *arg0, void *arg1) {
    S *s;
    u32 *a;
    s32 *n;
    u8 found;
    s32 i;
    u32 temp;

    s = func_08852FFC(arg1);
    found = 0;
    a = func_0885356C(arg1, 0, 0, 4);
    n = (s32 *)func_0885356C(arg1, 1, 0, 1);
    for (i = 0; i < *n; i++) {
        temp = *func_0885356C(arg1, 2, 0, 4);
        if (((s->unk_04[temp >> 3] >> (temp & 7)) & 1) == 1) {
            found = 1;
        }
    }
    if (found) {
        func_08852C5C(arg1, *a, 0);
    }
    func_08852F00(arg1, 0);
}
