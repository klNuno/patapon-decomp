#pragma divbyzerocheck on
#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
} E_088F9E2C;

typedef struct {
    u8 pad_00[0x548];
    s32 *unk_548;
    u32 unk_54C;
    u8 pad_550[0x5D4 - 0x550];
    E_088F9E2C *unk_5D4;
    u32 unk_5D8;
    u32 unk_5DC;
} S_088F9E2C;

s32 func_088586E8(void);
u32 func_089B5464(s32);

s32 func_088F9E2C(S_088F9E2C *arg0, E_088F9E2C *arg1) {
    u32 n;
    u32 r;
    E_088F9E2C *e;

    if (arg1 != NULL) {
        arg1->unk_00 = -1;
        arg1->unk_04 = 0.0f;
    }
    n = arg0->unk_54C;
    if (n != 0) {
        r = func_089B5464(func_088586E8()) % n;
        if (r == arg0->unk_5DC) {
            r = (r + 1) % arg0->unk_54C;
        }
        arg0->unk_5DC = r;
        if (arg1 != NULL) {
            if (arg0->unk_5D8 != 0) {
                e = &arg0->unk_5D4[r % arg0->unk_5D8];
                arg1->unk_00 = e->unk_00;
                arg1->unk_04 = e->unk_04;
            }
        }
        return arg0->unk_548[arg0->unk_5DC];
    }
    return 0;
}
