#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    u8 pad_04[4];
    u8 unk_08;
};

struct E {};

struct I {
    N *unk_00;
    s32 unk_04(I arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(I arg0, const E &, const E &) const { return !(bool)unk_04(arg0); }
};

typedef void (*F)(void *);

F func_08988824(I arg0, I arg1, F arg2) {
    if (arg0.unk_08(arg1, E(), E())) {
        do {
            arg2(&arg0.unk_00->unk_08);
            arg0.unk_00 = arg0.unk_00->unk_00;
        } while (arg0.unk_08(arg1, E(), E()));
    }
    return arg2;
}

}
