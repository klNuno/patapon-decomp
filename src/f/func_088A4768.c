#include "common.h"

typedef struct S {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} S;

typedef struct T {
    u8 pad_00[0xA4];
} T;

typedef struct A {
    u8 pad_00[0x524];
    T *unk_524;
    s32 unk_528;
} A;

extern void func_0889B5D4(T *, const S *);

void func_088A4768(A *arg0, S *arg1) {
    S v;
    T *p;
    T **b;
    s32 *n;

    T *e;

    v = *arg1;
    e = arg0->unk_524 + arg0->unk_528;
    p = arg0->unk_524;
    b = &arg0->unk_524;
    if (p != e) {
        n = &arg0->unk_528;
        do {
            func_0889B5D4(p, &v);
            p++;
            e = *b + *n;
        } while (p != e);
    }
}
