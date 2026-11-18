#include "common.h"

extern f32 *func_0884EBB0(s32, s32);
extern s32 func_08853004(s32);
u32 func_08981F88(s32);

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} T;

s32 func_0896EC74(T *arg0) {
    f32 f = *func_0884EBB0(func_08853004(arg0->unk_04), 0x21);
    if (func_08981F88(arg0->unk_08) < 5) {
        if (f >= 1.5f) {
            return 1;
        }
    } else if (f >= 3.5f) {
        return 1;
    }
    return 0;
}
