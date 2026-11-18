#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x1C];
} E_088A4094;

void func_0889B100(E_088A4094 *, f32);

E_088A4094 *func_088A4094(E_088A4094 *arg0) {
    u32 i;
    E_088A4094 *best;
    u32 min;

    for (i = 0; i < 32; i++) {
        if (arg0[i].unk_08 < 0) {
            return &arg0[i];
        }
    }
    best = NULL;
    min = -1;
    for (i = 0; i < 32; i++) {
        if (arg0[i].unk_0C < min) {
            min = arg0[i].unk_0C;
            best = &arg0[i];
        }
    }
    if (best != NULL) {
        func_0889B100(best, 0.0f);
    }
    return best;
}
