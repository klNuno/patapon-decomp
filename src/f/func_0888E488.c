#include "common.h"

typedef struct {
    u8 pad_00[0x24];
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[0x160];
} R;

typedef struct {
    u8 pad_00[0x104];
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} U;

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
    u8 pad_92E4[0x4C];
    s32 unk_9330;
} P;

typedef struct {
    u8 pad_00[0x3A0];
    P *unk_3A0;
    u8 pad_3A4[0x111C];
    u8 unk_14C0[4];
} T;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[2];
    s16 unk_26;
    u8 pad_28[6];
    s16 unk_2E;
    u8 pad_30[0x20];
    f32 unk_50;
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[0x24];
    u8 unk_84[0x28];
    s32 unk_AC;
} B;

void func_088912C4(void *, s32);
s32 func_0882160C(void);
s32 func_0885AB7C(s32, s32, s32);
s32 func_0888E684(s32, S *, U *);

s32 func_0888E488(T *arg0, B *arg1) {
    U t;
    S *r;
    s32 flag;
    s32 i;
    f32 sign;
    f32 span;

    if (arg0->unk_3A0 == NULL) {
        return 0;
    }
    r = (S *)arg1->unk_84;
    func_088912C4(arg0->unk_14C0, arg1->unk_AC);
    flag = 0;
    if (arg1->unk_2E != 0) {
        flag = 1;
    }
    if (flag == 0) {
        s32 h = arg0->unk_3A0->unk_9330;
        s32 n = arg1->unk_20;
        s32 x;

        if (h == 0) {
            x = -1;
        } else {
            R *p = (R *)func_0885AB7C(h, 1, 0);
            s32 j;

            x = 0;
            for (j = 0; j < n; j++, p++) {
                s32 y = p->unk_26;
                if (y == -1) {
                    x += p->unk_24;
                } else {
                    x += y;
                }
            }
        }
        r = (S *)func_0885AB7C(h, 2, x);
    }
    for (i = 0; i < arg1->unk_26; i++) {
        f32 y, x;

        if (arg0->unk_3A0->unk_92E0 == 1) {
            sign = -1.0f;
        } else {
            sign = 1.0f;
        }
        span = arg1->unk_5C;
        if (span < 0.0f) {
            f32 z = (-1.0f * span) * (f32)i;
            f32 w = arg1->unk_50;
            x = w + (-sign * z);
        } else {
            f32 z = (f32)(func_0882160C() & 0xFFFF);
            f32 w = arg1->unk_50;
            x = w + (-sign * (span * (z / 65536.0f)));
        }
        y = arg1->unk_54;
        t.unk_00 = x;
        t.unk_04 = y;
        t.unk_0C = 1.0f;
        t.unk_08 = 0.0f;
        func_0888E684((s32)arg0, r, &t);
        if (flag == 0) {
            r++;
        }
    }
    return 1;
}
