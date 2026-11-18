#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    N *unk_04;
    u8 unk_08[1];

    int func_00(N *arg0)
    {
        return this == arg0;
    }

    bool func_04(N *arg0)
    {
        return !(bool)func_00(arg0);
    }
};

struct T {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
};

union I {
    N *unk_00;
    f32 unk_04;
};

extern s32 func_08940968(s32);

struct E {};

static inline I &func_08940544_00(I &arg0, const E &, const E &, const E &)
{
    return arg0;
}

I func_08940544(T *arg1, I arg2, I arg3)
{
    N *temp2;
    N *temp3;
    N *temp4;
    N *temp5;
    s32 temp6;

    if (arg2.unk_00 == arg3.unk_00) {
        return func_08940544_00(arg3, E(), E(), E());
    }
    temp2 = arg1->unk_00;
    temp6 = 0;
    for (; temp2->func_04((N *)arg1); temp2 = temp2->unk_00) {
        temp6++;
    }
    arg1->unk_0C -= temp6;
    for (temp3 = arg2.unk_00; temp3->func_04(arg3.unk_00); temp3 = temp3->unk_00) {
        func_08940968((s32)temp3->unk_08);
    }
    temp4 = arg1->unk_08;
    arg2.unk_00->unk_04->unk_00 = arg3.unk_00;
    temp5 = arg3.unk_00->unk_04;
    arg3.unk_00->unk_04 = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = temp4->unk_04;
    temp4->unk_04->unk_00 = arg2.unk_00;
    temp4->unk_04 = temp5;
    temp5->unk_00 = temp4;
    return func_08940544_00(arg3, E(), E(), E());
}

}
