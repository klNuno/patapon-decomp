#include "common.h"

extern "C" {

struct N0897C818 {
    N0897C818 *unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
};

union I0897C818 {
    N0897C818 *unk_00;
    f32 unk_00f;
};

struct S0897C818 {
    u8 pad_00[0x9C];
    N0897C818 unk_9C;
};

inline s32 eq(N0897C818 *arg0, N0897C818 *arg1) {
    return arg0 == arg1;
}

inline bool ne(N0897C818 *arg0, N0897C818 *arg1) {
    return !(bool)eq(arg0, arg1);
}

void func_0897C818(I0897C818 *arg0, S0897C818 *arg1, s32 arg2) {
    volatile I0897C818 temp;
    N0897C818 *p = arg1->unk_9C.unk_00;
    N0897C818 *end = &arg1->unk_9C;

    temp.unk_00 = p;
    if (ne(p, end)) {
        do {
            if (arg2 == p->unk_18) {
                arg0->unk_00f = temp.unk_00f;
                return;
            }
            p = p->unk_00;
            temp.unk_00 = p;
        } while (ne(p, end));
    }
    arg0->unk_00 = &arg1->unk_9C;
}

}
