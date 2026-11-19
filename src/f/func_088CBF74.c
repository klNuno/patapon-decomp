#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} C_088CBF74;

typedef struct {
    u8 pad_00[0x28];
    u32 unk_28;
    s32 unk_2C;
} R_088CBF74;

extern u8 D_089FB8B8[];

u32 func_088CBF74(C_088CBF74 *arg0, R_088CBF74 *arg1, R_088CBF74 *arg2) {
    u32 ret;
    u32 w0;
    u32 w1;
    u32 hi;
    u32 nw0;
    u32 top;
    s32 d;
    u32 a;
    u32 m;
    u32 nw1;

    ret = 0;
    if (D_089FB8B8[0] != 0) {
        w0 = arg0->unk_00;
        w1 = arg0->unk_04;
        ret = (w1 & 0xFFFFFF) | ((w0 << 8) & 0x0F000000);
        d = ret - arg2->unk_28;
        if (d >= 0 && d < arg2->unk_2C) {
            ret = arg1->unk_28 + d;
            arg0->unk_00 = (w0 & 0xFF00FFFF) | ((ret >> 8) & 0xFF0000);
            arg0->unk_04 = (w1 & 0xFF000000) | (ret & 0xFFFFFF);
        }
    } else {
        w0 = arg0->unk_00;
        nw0 = w0 & 0xFF00FFFF;
        hi = (w0 & 0xFF0000) << 8;
        w1 = arg0->unk_04;
        top = w1 & 0xFF000000;
        a = (w1 & 0xFFFFFF) | hi;
        if (hi != 0) {
            a -= arg1->unk_28;
            m = a + arg2->unk_28;
            nw1 = top | (m & ~(hi & 0x0F000000));
        } else {
            nw1 = top | (a & ~(hi & 0xFFFF0000));
            ret = (nw1 & 0xFFFFFF) | ((nw0 << 8) & 0x0F000000);
            a = ret - arg2->unk_28;
        }
        if ((s32)a >= 0 && (s32)a < arg2->unk_2C) {
            arg0->unk_00 = nw0;
            arg0->unk_04 = nw1;
            ret = arg1->unk_28 + a;
        }
    }
    return ret;
}
