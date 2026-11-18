#include "common.h"

typedef union {
    struct {
        u32 unk_00;
        u32 unk_04;
        s8 *unk_08;
    } l;
    struct {
        u8 unk_00_0 : 1;
        u8 unk_00_1 : 7;
        s8 unk_01[11];
    } s;
} Str_08886BF4;

s32 func_08886BF4(Str_08886BF4 *arg0, s8 *arg1, u32 arg2, u32 arg3) {
    s8 *data;
    u32 size;
    s8 *p;
    s8 *q;
    u32 i;

    if (!(arg0->l.unk_00 & 1)) {
        data = arg0->s.unk_01;
        size = arg0->s.unk_00_1;
    } else {
        data = arg0->l.unk_08;
        size = arg0->l.unk_04;
    }
    if (size != 0 && arg3 != 0) {
        if (size - 1 < arg2) {
            arg2 = size - 1;
        }
        for (p = data + arg2 + 1; data < p;) {
            p--;
            for (q = arg1, i = 0; i < arg3; i++, q++) {
                if (*p == *q) {
                    return p - data;
                }
            }
        }
    }
    return -1;
}
