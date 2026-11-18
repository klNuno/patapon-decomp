#include "common.h"

extern "C" {

struct O_0892E67C {
    virtual void v0();
    virtual void v1();
    virtual void v2(s32);
    u8 pad_04[0x8E4];
    s32 unk_8E8;
};

struct N_0892E67C {
    N_0892E67C *unk_00;
    N_0892E67C *unk_04;
    O_0892E67C *unk_08;
    bool eq2(const N_0892E67C &o) const {
        return unk_08 == o.unk_08 && unk_04 == o.unk_04;
    }
    bool eq(const N_0892E67C &o) const {
        return eq2(o) && unk_00 == o.unk_00;
    }
    bool ne(const N_0892E67C &o) const {
        return !(bool)eq(o);
    }
};

struct It_0892E67C {
    N_0892E67C *unk_00;
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

void func_0892E67C(N_0892E67C *arg0, s32 arg1, s32 arg2) {
    It_0892E67C it;
    O_0892E67C *o;

    it.unk_00 = arg0->unk_04;
    while (it.unk_00->ne(*arg0)) {
        o = it.unk_00->unk_08;
        if (arg2 == o->unk_8E8) {
            o->v2(arg1);
        }
        it.next();
    }
}

}
