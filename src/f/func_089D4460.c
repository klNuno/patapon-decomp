#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x40];
    u8 unk_90[1];
} S_089D4460_18;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    u8 pad_10[0x8];
    S_089D4460_18 *unk_18;
    u8 pad_1C[0xC];
    f32 unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
} S_089D4460;

s32 func_088CE494(s32, void *);

s32 func_089D4460(S_089D4460 *arg0) {
    S_089D4460_18 *p;
    s32 ret;
    void *q;

    f32 f = arg0->unk_28;

    if ((1.5f > f && arg0->unk_0C < 80.0f) || 0.0f >= f) {
        p = arg0->unk_18;
        ret = p->unk_4C;
        q = p;
        if (q != NULL) {
            q = p->unk_90;
        }
        func_088CE494(arg0->unk_38, q);
        return ret;
    }
    return -1;
}
