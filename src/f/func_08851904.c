#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S_08851904;

S_08851904 *func_08852FFC(void *);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08852C5C(void *, s32, s32);
void func_08852F00(void *, s32);

void func_08851904(void *arg0, void *arg1) {
    S_08851904 *s;
    s32 *a;
    s32 *b;
    u8 flag;
    s32 i;
    u32 x;

    s = func_08852FFC(arg1);
    flag = 1;
    a = func_0885356C(arg1, 0, 0, 4);
    b = func_0885356C(arg1, 1, 0, 1);
    for (i = 0; i < *b; i++) {
        x = *func_0885356C(arg1, 2, 0, 4);
        if (((s->unk_04[x >> 3] >> (x & 7)) & 1) == 1) {
            flag = 0;
        }
    }
    if (flag) {
        func_08852C5C(arg1, *a, 0);
    }
    func_08852F00(arg1, 0);
}
