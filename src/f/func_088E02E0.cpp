#include "common.h"

extern "C" {

struct T0 {
    T0 *unk_00;
    u8 pad_04[4];
    u8 unk_08[4];
};

struct T {
    T0 *unk_00;

    s32 unk_04(const T &arg0) const { return unk_00 == arg0.unk_00; }
    bool unk_08(const T &arg0) const { return !(bool)unk_04(arg0); }
};

struct Z {
};

typedef void (*F)(void *);

static inline bool unk_00(const T &arg0, const T &arg1, const Z &, const Z &) {
    return arg0.unk_08(arg1);
}

F func_088E02E0(T arg0, T arg1, F arg2) {
    if (unk_00(arg0, arg1, Z(), Z())) {
        do {
            arg2(arg0.unk_00->unk_08);
            arg0.unk_00 = arg0.unk_00->unk_00;
        } while (unk_00(arg0, arg1, Z(), Z()));
    }
    return arg2;
}

}
