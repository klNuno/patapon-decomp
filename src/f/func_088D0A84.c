#include "common.h"

typedef struct {
    u8 pad_00[0x1928];
    s32 unk_1928;
    f32 unk_192C;
    f32 unk_1930;
    f32 unk_1934;
} S;

s32 func_088586E8(void);
u32 func_089B5464(s32);

void func_088D0A84(S *arg0) {
    f32 t;
    f32 u;
    f32 temp;

    t = (f32)func_089B5464(func_088586E8());
    t /= 4294967296.0f;
    arg0->unk_1928 = 0;
    temp = 0.6f * t;
    arg0->unk_192C = 0.4f + temp;
    u = arg0->unk_1934;
    if (arg0->unk_1930 < u) {
        arg0->unk_1930 = u;
        t = (f32)func_089B5464(func_088586E8());
        t /= 4294967296.0f;
        temp = (0.3f - 0.1f) * t;
        arg0->unk_1934 = 0.1f + temp;
    } else {
        arg0->unk_1930 = u;
        t = (f32)func_089B5464(func_088586E8());
        t /= 4294967296.0f;
        temp = (0.9f - 0.7f) * t;
        arg0->unk_1934 = 0.7f + temp;
    }
}
