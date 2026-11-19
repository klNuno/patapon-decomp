#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[4];
    u16 unk_14;
    u16 unk_16;
    u8 pad_18[0x68];
    V unk_80[9];
} T;

void func_088C2C18(T *arg0) {
    u32 a;
    u32 b;
    f32 x;
    f32 y;
    f32 z;
    f32 v;
    u16 flags = arg0->unk_0E;
    V *p;

    y = 1.0f;
    x = y;
    if (flags & 4) {
        a = arg0->unk_14;
        v = (f32)a;
        x = 0.0005f * v;
    }
    if (flags & 8) {
        b = arg0->unk_16;
        v = (f32)b;
        y = 0.0005f * v;
    }
    p = arg0->unk_80;
    if (flags & 2) {
        z = x + x;
        if (flags & 0x10) {
            p[0].unk_00 = 0.0f;
            p[0].unk_04 = y;
            p[0].unk_08 = 0.0f;
            p[0].unk_0C = 1.0f;
            p[1].unk_00 = x;
            p[1].unk_04 = y;
            p[1].unk_08 = 0.0f;
            p[1].unk_0C = 1.0f;
            p[2].unk_00 = z;
            p[2].unk_04 = y;
            p[2].unk_08 = 0.0f;
            p[2].unk_0C = 1.0f;
            p[3].unk_00 = 0.0f;
            p[3].unk_04 = 0.0f;
            p[3].unk_08 = 0.0f;
            p[3].unk_0C = 1.0f;
            p[4].unk_00 = x;
            p[4].unk_04 = 0.0f;
            p[4].unk_08 = 0.0f;
            p[4].unk_0C = 1.0f;
            p[5].unk_00 = z;
            p[5].unk_04 = 0.0f;
            p[5].unk_08 = 0.0f;
            p[5].unk_0C = 1.0f;
            {
                f32 n = -y;

                p[6].unk_00 = 0.0f;
                p[6].unk_04 = n;
                p[6].unk_08 = 0.0f;
                p[6].unk_0C = 1.0f;
                p[7].unk_00 = x;
                p[7].unk_04 = n;
                p[7].unk_08 = 0.0f;
                p[7].unk_0C = 1.0f;
                p[8].unk_00 = z;
                p[8].unk_04 = n;
                p[8].unk_08 = 0.0f;
                p[8].unk_0C = 1.0f;
            }
        } else {
            p[0].unk_00 = 0.0f;
            p[0].unk_04 = y;
            p[0].unk_08 = 0.0f;
            p[0].unk_0C = 1.0f;
            p[1].unk_00 = z;
            p[1].unk_04 = y;
            p[1].unk_08 = 0.0f;
            p[1].unk_0C = 1.0f;
            {
                f32 n = -y;
                p[3].unk_00 = z;
                p[3].unk_04 = n;
                p[3].unk_08 = 0.0f;
                p[3].unk_0C = 1.0f;
                p[2].unk_00 = 0.0f;
                p[2].unk_04 = n;
                p[2].unk_08 = 0.0f;
                p[2].unk_0C = 1.0f;
            }
        }
    } else {
        if (flags & 0x10) {
            z = -x;
            p[0].unk_00 = z;
            p[0].unk_04 = y;
            p[0].unk_08 = 0.0f;
            p[0].unk_0C = 1.0f;
            p[1].unk_00 = 0.0f;
            p[1].unk_04 = y;
            p[1].unk_08 = 0.0f;
            p[1].unk_0C = 1.0f;
            p[2].unk_00 = x;
            p[2].unk_04 = y;
            p[2].unk_08 = 0.0f;
            p[2].unk_0C = 1.0f;
            p[3].unk_00 = z;
            p[3].unk_04 = 0.0f;
            p[3].unk_08 = 0.0f;
            p[3].unk_0C = 1.0f;
            p[4].unk_00 = 0.0f;
            p[4].unk_04 = 0.0f;
            p[4].unk_08 = 0.0f;
            p[4].unk_0C = 1.0f;
            p[5].unk_00 = x;
            p[5].unk_04 = 0.0f;
            p[5].unk_08 = 0.0f;
            p[5].unk_0C = 1.0f;
            {
                f32 n = -y;

                p[6].unk_00 = z;
                p[6].unk_04 = n;
                p[6].unk_08 = 0.0f;
                p[6].unk_0C = 1.0f;
                p[7].unk_00 = 0.0f;
                p[7].unk_04 = n;
                p[7].unk_08 = 0.0f;
                p[7].unk_0C = 1.0f;
                p[8].unk_00 = x;
                p[8].unk_04 = n;
                p[8].unk_08 = 0.0f;
                p[8].unk_0C = 1.0f;
            }
        } else {
            z = -x;
            p[0].unk_00 = z;
            p[0].unk_04 = y;
            p[0].unk_08 = 0.0f;
            p[0].unk_0C = 1.0f;
            p[1].unk_00 = x;
            p[1].unk_04 = y;
            p[1].unk_08 = 0.0f;
            p[1].unk_0C = 1.0f;
            {
                f32 n = -y;
                p[2].unk_00 = z;
                p[2].unk_04 = n;
                p[2].unk_08 = 0.0f;
                p[2].unk_0C = 1.0f;
                p[3].unk_00 = x;
                p[3].unk_04 = n;
                p[3].unk_08 = 0.0f;
                p[3].unk_0C = 1.0f;
            }
        }
    }
}
