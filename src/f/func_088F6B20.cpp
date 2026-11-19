#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    N *unk_04;
    u8 unk_08[4];
};

struct I {
    N *unk_00;
    s32 eq(const I &arg0) const { return unk_00 == arg0.unk_00; }
};

struct E {};

static inline bool ne(const I &arg0, const I &arg1, const E &, const E &) {
    return !(bool)arg0.eq(arg1);
}

typedef void (*F)(void *);

F func_088F6B20(I arg0, I arg1, F arg2) {
    F temp = arg2;
    I it = arg0;
    I end = arg1;
    for (; ne(it, end, E(), E()); it.unk_00 = it.unk_00->unk_00) {
        temp(it.unk_00->unk_08);
    }
    return temp;
}
}
