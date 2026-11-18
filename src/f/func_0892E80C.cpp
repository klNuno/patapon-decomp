#include "common.h"

extern "C" {

struct Node_0892E80C {
    s32 unk_00;
    Node_0892E80C *unk_04;
    s32 unk_08;

    bool eqA(const Node_0892E80C &o) const {
        return unk_08 == o.unk_08 && unk_04 == o.unk_04;
    }
    bool eqB(const Node_0892E80C &o) const {
        return eqA(o) && unk_00 == o.unk_00;
    }
    bool ne(const Node_0892E80C &o) const {
        return !eqB(o);
    }
};


struct It_0892E80C {
    Node_0892E80C *unk_00;
};

s32 func_0892E80C(Node_0892E80C *arg0, s32 arg1) {
    s32 i;
    It_0892E80C it;

    it.unk_00 = *(Node_0892E80C **)((u8 *)arg0 + 4);
    for (i = 0; it.unk_00->ne(*arg0); i++) {
        if (i == arg1) {
            break;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return it.unk_00->unk_08;
}

}
