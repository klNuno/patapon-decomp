#include "common.h"

extern "C" {

struct E0894C7AC {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
};

struct N0894C7AC {
    N0894C7AC *unk_00;
    u8 pad_04[4];
    E0894C7AC unk_08;
};

struct I0894C7AC {
    N0894C7AC *unk_00;

    s32 eq(const I0894C7AC &arg0) const { return unk_00 == arg0.unk_00; }
    bool ne(const I0894C7AC &arg0) const { return !(bool)eq(arg0); }
};

struct T0894C7AC {
    u8 pad_00[0x2018];
    N0894C7AC unk_2018;
};

void func_0894C7AC(T0894C7AC *arg0) {
    I0894C7AC it;
    I0894C7AC end;

    it.unk_00 = arg0->unk_2018.unk_00;
    end.unk_00 = &arg0->unk_2018;

    if (it.ne(end)) {
        do {
            E0894C7AC *p = &it.unk_00->unk_08;
            if (p->unk_0C == 2) {
                p->unk_0C = 1;
                p->unk_10 = 0;
            }
            it.unk_00 = it.unk_00->unk_00;
        } while (it.ne(end));
    }
}

}
