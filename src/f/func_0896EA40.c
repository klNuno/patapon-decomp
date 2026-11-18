#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} S_0896EA40;

s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);
s32 func_08853004(s32);

s32 func_0896EA40(S_0896EA40 *arg0) {
    s32 h;

    h = func_08853004(arg0->unk_04);
    if (*func_0884EBA0(h, 0x24) == 0) {
        return 1;
    }
    if (*func_0884EBB0(h, 0x21) < 0.5f) {
        return 1;
    }
    if (*func_0884EBB0(h, 0x21) > 7.5f) {
        return 1;
    }
    if (*func_0884EBB0(h, 0x21) > 7.0f) {
        if (*func_0884EBA0(h, 0x25) == 1) {
            return 1;
        }
        if (*func_0884EBA0(h, 0x25) == 3) {
            return 1;
        }
        if (*func_0884EBA0(h, 0x25) == 4) {
            return 1;
        }
        return *func_0884EBA0(h, 0x25) == 2;
    }
    return 0;
}
