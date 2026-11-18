#include "common.h"

extern "C" {

struct K {
    s32 unk_00;
    s32 unk_04;
    int valid() const { int r = 0; if (unk_00 >= 0 && unk_04 >= 0) r = 1; return r; }
};

struct E {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x6C];
    int eq(const K &o) const { int r = unk_00 == o.unk_00; if (r) r = unk_04 == o.unk_04; return r; }
};

struct T {
    u8 pad_00[0x74A4];
    E *unk_74A4;
    u32 unk_74A8;
    u32 size() const { return unk_74A8; }
    E &at(u32 i) const { return unk_74A4[i]; }
};

s32 func_0890DDBC(T *arg0, K *arg1) {
    s32 i;

    if (!arg1->valid()) {
        return -1;
    }
    for (i = 0; (u32)i < arg0->size(); i++) {
        if (arg0->at(i).eq(*arg1)) {
            return i;
        }
    }
    return -1;
}

}
