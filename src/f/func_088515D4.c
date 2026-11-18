#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S088515D4;

S088515D4 *func_08852FFC(void *);
u32 *func_0885356C(void *, s32, s32, s32);
void func_0885369C(void *, s32);
void func_08852F00(void *, s32);

void func_088515D4(void *arg0, void *arg1) {
    S088515D4 *s;
    u32 *a;
    u32 *b;

    s = func_08852FFC(arg1);
    a = func_0885356C(arg1, 0, 0, 4);
    b = func_0885356C(arg1, 1, 0, 4);
    func_0885369C(arg1, 0);
    func_0885369C(arg1, 1);
    if (!((s->unk_04[*b >> 3] >> (*b & 7)) & 1)) {
        s->unk_04[*a >> 3] &= (u8)((1 << (*a & 7)) ^ 0xFF);
    } else {
        s->unk_04[*a >> 3] |= (u8)(1 << (*a & 7));
    }
    func_08852F00(arg1, 0);
}
