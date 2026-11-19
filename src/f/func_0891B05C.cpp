#include "common.h"

extern "C" {
struct N {
    N *unk_00;
    u8 pad_04[4];
    u8 unk_08[1];
};

struct E {};
typedef void (*F)(void *);

struct I {
    N *unk_00;

    s32 unk_04(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const I &arg0, const E &, const E &) const
    {
        return !(bool)unk_04(arg0);
    }
};

F func_0891B05C(I arg0, I arg1, F arg2)
{
    F temp = arg2;
    if (arg0.unk_08(arg1, E(), E())) {
        do {
            temp(arg0.unk_00->unk_08);
            arg0.unk_00 = arg0.unk_00->unk_00;
        } while (arg0.unk_08(arg1, E(), E()));
    }
    return temp;
}
}
