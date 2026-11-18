#include "common.h"

extern "C" {

struct N08977494 {
    s32 unk_00;
    N08977494 *unk_04;
    void *unk_08;
    s32 eq2(const N08977494 *o) const {
        s32 r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    s32 eq(const N08977494 *o) const {
        s32 r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
};

struct I08977494 {
    N08977494 *unk_00;
    bool ne(const N08977494 *o) const { return !(bool)unk_00->eq(o); }
    void next() { if (unk_00 != NULL) unk_00 = unk_00->unk_04; }
};

struct T08977494 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x228];
    N08977494 unk_230;
    N08977494 *end() { return &unk_230; }
};

s32 func_089766B0(void *, s32);

s32 func_08977494(T08977494 *arg0, s32 arg1) {
    I08977494 it;

    it.unk_00 = arg0->unk_230.unk_04;
    while (it.ne(arg0->end())) {
        if (it.unk_00->unk_08 != NULL) {
            func_089766B0(it.unk_00->unk_08, arg1);
        }
        it.next();
    }
    arg0->unk_04 = arg0->unk_00;
    return 1;
}

}
