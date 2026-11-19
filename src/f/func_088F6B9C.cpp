#include "common.h"

extern "C" {

struct Unk {
    Unk *unk_00;

    s32 unk_04(Unk *arg0) { return this == arg0; }
    bool unk_08(Unk *arg0) { return !(bool)unk_04(arg0); }
};

s32 func_088F6B9C(Unk *arg0, Unk *arg1) {
    s32 temp = 0;
    if (arg0->unk_08(arg1)) {
        do {
            arg0 = arg0->unk_00;
            temp++;
        } while (arg0->unk_08(arg1));
    }
    return temp;
}

}
