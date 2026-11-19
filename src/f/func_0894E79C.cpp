#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
};

struct S {
    u8 pad_00[0x19094];
    N *unk_19094;
};

struct I {
    N *unk_00;
    s32 eq(const I &arg0) const { return unk_00 == arg0.unk_00; }
};

struct E {};

static inline bool ne(const I &arg0, const I &arg1, const E &) {
    return !(bool)arg0.eq(arg1);
}

void func_08912CCC(void *);

void func_0894E79C(S *arg0) {
    I it, end;
    it.unk_00 = arg0->unk_19094;
    end.unk_00 = (N *)&arg0->unk_19094;
    for (; ne(it, end, E()); it.unk_00 = it.unk_00->unk_00) {
        func_08912CCC(&it.unk_00->unk_10);
    }
}
}
