#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} S_0896EBE0;

f32 *func_0884EBB0(s32, s32);
s32 func_08853004(s32);
u32 func_08981F88(s32);

s32 func_0896EBE0(S_0896EBE0 *arg0) {
    f32 f;

    f = *func_0884EBB0(func_08853004(arg0->unk_04), 0x21);
    if (func_08981F88(arg0->unk_08) < 5) {
        if (f >= 1.5f) {
            return 1;
        }
    } else if (f >= 3.5f) {
        return 1;
    }
    return 0;
}
