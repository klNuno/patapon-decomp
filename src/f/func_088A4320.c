#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x28 - 0x08];
    u8 unk_28;
    u8 pad_29[3];
} E_088A4320;

void func_0889B100(E_088A4320 *, f32);

void func_088A4320(E_088A4320 *arg0, s32 arg1, s32 arg2) {
    u32 i;
    E_088A4320 *p;

    p = arg0;
    for (i = 0; i < 0x20; i++, p++) {
        if (arg1 == 0 || arg1 == (p->unk_28 ? 0 : p->unk_00)) {
            if (arg2 == p->unk_04) {
                func_0889B100(p, 0.0f);
            }
        }
    }
}
