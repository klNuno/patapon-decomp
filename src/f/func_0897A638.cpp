#include "common.h"

extern "C" {
struct N {
    N *unk_00;
    N *unk_04;
    u8 unk_08[4];
};

typedef void (*F)(void *);

struct E {};

struct I {
    N *unk_00;

    s32 unk_04(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const I &arg0) const { return !(bool)unk_04(arg0); }
};

static inline void unk_00(F arg0, void *arg1, const E &, const E &, const E &, const E &)
{
    arg0(arg1);
}

F func_0897A638(I arg0, I arg1, F arg2)
{
    if (arg0.unk_08(arg1)) {
        do {
            unk_00(arg2, arg0.unk_00->unk_08, E(), E(), E(), E());
            arg0.unk_00 = arg0.unk_00->unk_00;
        } while (arg0.unk_08(arg1));
    }
    return arg2;
}
}
