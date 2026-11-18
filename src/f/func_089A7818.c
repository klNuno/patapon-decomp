#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0xB0];
    V4 unk_B0;
} S2;

typedef struct {
    u8 pad_00[0x110];
    S2 *unk_110;
} S1;

typedef struct {
    u8 pad_00[0x10];
    S1 *unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);
void func_08854CD8(V4 *, V4 *, V4 *);

void func_089A7818(S0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;
    S2 *p;
    V4 v;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_10 != NULL) {
        p = arg0->unk_10->unk_110;
        if (p != NULL) {
            f32 x = *a;
            f32 y = *b;
            v.unk_00 = x;
            v.unk_04 = y;
            v.unk_0C = 1.0f;
            v.unk_08 = 0.0f;
            func_08854CD8(&p->unk_B0, &p->unk_B0, &v);
            p->unk_B0.unk_0C = 0.0f;
        }
    }
    func_08852F00(arg1, 0);
}
