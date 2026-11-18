#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S_08852358;

S_08852358 *func_08852FFC(void *);
u32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

inline s32 getbit_08852358(S_08852358 *bits, u32 v) {
    return (bits->unk_04[v >> 3] >> (v & 7)) & 1;
}

inline void setbit_08852358(S_08852358 *bits, u32 w, u32 v) {
    u8 *p = bits->unk_04;
    s32 bit = v & 7;
    u32 idx = v >> 3;

    if (getbit_08852358(bits, w)) {
        p[idx] |= (u8)(1 << bit);
    } else {
        p[idx] &= (u8)((1 << bit) ^ 0xFF);
    }
}

void func_08852358(void *arg0, void *arg1) {
    S_08852358 *s;
    u32 *a;
    u32 *b;
    u32 *n;
    u32 i;

    s = func_08852FFC(arg1);
    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    n = func_0885356C(arg1, 2, 1, 4);
    for (i = 0; i < *n; i++) {
        setbit_08852358(s, *b + i, *a + i);
    }
    func_08852F00(arg1, 0);
}
