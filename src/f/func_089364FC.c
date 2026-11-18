#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x8];
} M_089364FC;

typedef struct {
    u8 pad_00[0xCF0];
    u8 unk_CF0[1];
} S1;

typedef struct {
    u8 pad_00[0x14];
    S1 *unk_14;
} S0;

extern int func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);
void func_088664DC(M_089364FC *, void *, s32);

void func_089364FC(S0 *arg0, s32 arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    M_089364FC m;
    u8 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    p = arg0->unk_14->unk_CF0;
    if (*a >= 0) {
        func_088664DC(&m, p, *a);
        *b = m.unk_30;
        *c = m.unk_34;
    }
    func_08852F00(arg1, 0);
}
