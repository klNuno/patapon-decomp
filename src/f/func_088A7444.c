#include "common.h"

s32 func_0888FCFC(s32, s32);

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
} S0;

typedef struct S1 S1;
typedef struct {
    S1 *unk_00;
    u8 pad_04[8];
    f32 unk_0C;
    u8 pad_10[0x70];
} S2;

struct S1 {
    u8 pad_00[0x3A0];
    S0 *unk_3A0;
    u8 pad_3A4[0x184];
    S2 *unk_528;
    s32 unk_52C;
};

f32 *func_088A7444(S1 *arg0, u8 arg1) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 *ret;
    S2 *p;
    S2 **base;
    s32 *count;
    s32 dir;
    s32 n;

    if (arg0->unk_3A0->unk_92E0 == 1) {
        f0 = -1.0f;
    } else {
        f0 = 1.0f;
    }
    dir = arg1;
    ret = 0;
    n = dir == 1 ? 1 : -1;
    f2 = (f32)n;
    f1 = -1.0f * (3.4028235e37f * f0) * f2;
    if (arg0->unk_52C == 0) {
        return 0;
    }
    p = arg0->unk_528;
    base = &arg0->unk_528;
    if (p != *base + arg0->unk_52C) {
        count = &arg0->unk_52C;
        do {
            if (p->unk_00 != 0 && func_0888FCFC((s32)p->unk_00->unk_3A0, 0) > 0) {
                if (dir == 1) {
                    if (f0 * f1 <= f0 * p->unk_0C) {
                        f1 = p->unk_0C;
                        ret = &p->unk_0C;
                    }
                } else {
                    if (f0 * f1 >= f0 * p->unk_0C) {
                        f1 = p->unk_0C;
                        ret = &p->unk_0C;
                    }
                }
            }
            p++;
        } while (p != *base + *count);
    }
    return ret;
}
