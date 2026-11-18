#include "common.h"

extern "C" {

inline void fill_0884ECC8(f32 *first, f32 *last, f32 v) {
    s32 n;

    for (n = last - first; n > 0; n--) {
        *first++ = v;
    }
}

struct S_0884ECC8 {
    u8 pad_00[0x14];
    f32 *unk_14;
    s32 unk_18;
    f32 *begin() { return unk_14; }
    f32 *end() { return *(f32 **)&unk_14 + unk_18; }
};

void func_0884ECC8(S_0884ECC8 *arg0, f32 arg1) {
    fill_0884ECC8(arg0->begin(), arg0->end(), arg1);
}

}
