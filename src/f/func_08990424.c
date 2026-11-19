#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;
typedef struct {
    u8 pad_00[0x80];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    f32 unk_8C;
} S;

s32 func_088586E8(void);
u32 func_089B5464(s32);

void func_08990424(V *arg0, S *arg1, S *arg2) {
    f32 c;
    f32 b;
    f32 a;
    f32 x;
    f32 y;
    f32 p;
    f32 q;
    f32 r;
    f32 t;

    if (arg1 != NULL && arg2 != NULL) {
        if (arg1->unk_88 - arg1->unk_80 > arg2->unk_88 - arg2->unk_80) {
            arg1 = arg2;
        }
        p = arg1->unk_80;
        q = arg1->unk_88;
        r = arg1->unk_84;
        t = arg1->unk_8C;
        b = r + t;
        c = p + q;
        c *= 0.5f;
        x = (f32)func_089B5464(func_088586E8());
        x /= 4294967296.0f;
        y = 20.0f * x;
        a = -10.0f;
        a += y;
        y = (f32)func_089B5464(func_088586E8());
        y /= 4294967296.0f;
        x = 20.0f * y;
        y = -10.0f;
        y += x;
        arg0->unk_00 = c + y;
        b *= 0.5f;
        arg0->unk_04 = b + a;
        arg0->unk_08 = 0.0f;
        arg0->unk_0C = 1.0f;
    } else {
        arg0->unk_00 = 0.0f;
        arg0->unk_04 = 0.0f;
        arg0->unk_08 = 0.0f;
        arg0->unk_0C = 1.0f;
    }
}
