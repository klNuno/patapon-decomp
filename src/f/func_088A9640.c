#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} R;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
R *func_0884E644(s32);
s32 func_088A88C0(void);

void func_088A9640(void *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    R *bits;
    u32 i;
    u32 sh;
    u32 n;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    bits = func_0884E644(func_088A88C0());
    i = *c + *a;
    sh = i & 7;
    n = i >> 3;
    if (*b == 1) {
        bits->unk_04[n] |= (u8)(1 << sh);
    } else {
        bits->unk_04[n] &= (u8)((1 << sh) ^ 0xFF);
    }
    func_08852F00(arg1, 0);
}
