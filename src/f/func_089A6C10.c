#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} V;
typedef struct {
    u8 pad_00[0x110];
    V *unk_110;
} U;
typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} T;

void func_089A6C10(T *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    U *p;
    V *q;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    p = arg0->unk_10;
    if (p != NULL) {
        q = p->unk_110;
        if (q != NULL) {
            *a = q->unk_4C;
            *b = (u8)(q->unk_5C <= q->unk_54);
            *c = q->unk_54;
        }
    }
    func_08852F00(arg1, 0);
}
