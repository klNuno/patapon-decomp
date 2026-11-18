#include "common.h"

extern "C" {

inline void fill_0884EC18(s32 *first, s32 *last, s32 v) {
    s32 n;

    for (n = last - first; n > 0; n--) {
        *first++ = v;
    }
}

struct S_0884EC18 {
    u8 pad_00[0x8];
    s32 *unk_08;
    s32 unk_0C;
    s32 *begin() { return unk_08; }
    s32 *end() { return *(s32 **)&unk_08 + unk_0C; }
};

void func_0884EC18(S_0884EC18 *arg0, s32 arg1) {
    fill_0884EC18(arg0->begin(), arg0->end(), arg1);
}

}
