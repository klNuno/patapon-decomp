#include "common.h"

extern "C" {

struct H {
    s32 unk_00;
    s32 unk_04;
    char *unk_08;
    s32 *unk_0C;

    void copy(const H &a) {
        unk_00 = a.unk_00;
        unk_04 = a.unk_04;
        unk_08 = a.unk_08;
        unk_0C = a.unk_0C;
        if (*(char *volatile *)&unk_08 != NULL) {
            ++*unk_0C;
        }
    }
};

struct N {
    u8 pad_00[4];
    N *unk_04;
    H unk_08;
};

union I {
    N *unk_00;
    f32 unk_04;

    s32 eq(N *arg0) const { return unk_00 == arg0; }
    bool ne(N *arg0) const { return !(bool)eq(arg0); }
};

typedef struct {
    u8 pad_00[0x3014];
    N *unk_3014;
    N *unk_3018;
} T;

typedef struct {
    u8 pad_00[4];
    char *unk_04;
} S;

s32 func_088E0F08(char *);
s32 func_088E2484(char *);

void func_088F3354(H *arg0, S *arg1) {
    I it;
    volatile struct { I unk_00; u8 pad_04[0x10]; } a;
    T *t;
    N *b;
    H *h;

    t = (T *)func_088E0F08(arg1->unk_04);
    a.unk_00.unk_00 = t->unk_3018;
    b = t->unk_3014;
    it.unk_04 = a.unk_00.unk_04;
    while (it.ne(b)) {
        h = &it.unk_00->unk_08;
        if ((1 ^ (func_088E2484(h->unk_08) != 0)) == 0) {
            arg0->copy(*h);
            return;
        }
        it.unk_00 = it.unk_00->unk_04;
    }
    arg0->copy(b->unk_08);
}
}
