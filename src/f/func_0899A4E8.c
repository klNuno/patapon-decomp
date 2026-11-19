#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} E;

typedef struct {
    u8 pad_00[0xF90];
    E *unk_F90;
    u8 pad_F94[4];
    u32 unk_F98;
    u8 pad_F9C[0x34];
    f32 unk_FD0;
    u8 pad_FD4[0x88];
    u8 unk_105C;
    u8 pad_105D[3];
    f32 unk_1060;
    f32 unk_1064;
    u8 pad_1068[0x50];
    u8 unk_10B8;
    u8 pad_10B9[3];
    f32 unk_10BC;
    f32 unk_10C0;
} T;

f32 func_0899A934(T *);
f32 *func_0899E288(s32);

void func_0899A4E8(T *arg0, f32 *arg1) {
    f32 a, b;
    f32 t, r, s, d, x, y, z;
    u32 bits, i, off, n;
    u32 *q;
    E **pp;
    f32 *p;

    t = func_0899A934(arg0);
    if (arg0->unk_105C != 0) {
        d = arg0->unk_1064;
        a = d;
        bits = *(u32 *)&a;
        bits = (bits << 1) >> 1;
        q = (u32 *)&a;
        *(u32 *)&a = bits;
        r = *(f32 *)q <= 0.0001f ? 1.0f : arg0->unk_1060 / d;
        i = 0;
        if (arg0->unk_F98 != 0) {
            s = 0.5f * t;
            off = 0;
            pp = &arg0->unk_F90;
            do {
                p = func_0899E288(((E *)((u8 *)*pp + off))->unk_08);
                n = arg0->unk_F98;
                x = (f32)n;
                y = s * x;
                x = arg0->unk_FD0 + y;
                y = x - s;
                x = (f32)i;
                ++i;
                off += 0x10;
                *arg1 = y - t * x;
                z = *p;
                *arg1 = z + r * (*(volatile f32 *)arg1 - z);
                ++arg1;
            } while (i < arg0->unk_F98);
        }
    } else if (arg0->unk_10B8 != 0) {
        d = arg0->unk_10C0;
        b = d;
        bits = *(u32 *)&b;
        bits = (bits << 1) >> 1;
        q = (u32 *)&b;
        *(u32 *)&b = bits;
        r = *(f32 *)q <= 0.0001f ? 1.0f : arg0->unk_10BC / d;
        i = 0;
        if (arg0->unk_F98 != 0) {
            s = 0.5f * t;
            off = 0;
            pp = &arg0->unk_F90;
            do {
                p = func_0899E288(((E *)((u8 *)*pp + off))->unk_08);
                n = arg0->unk_F98;
                x = (f32)n;
                y = s * x;
                x = arg0->unk_FD0 + y;
                y = x - s;
                x = (f32)i;
                ++i;
                off += 0x10;
                *arg1 = y - t * x;
                z = *p;
                *arg1 = z + r * (*(volatile f32 *)arg1 - z);
                ++arg1;
            } while (i < arg0->unk_F98);
        }
    } else {
        i = 0;
        n = arg0->unk_F98;
        if (n != 0) {
            s = 0.5f * t;
            do {
                z = arg0->unk_FD0;
                y = (z + s * (f32)n) - s;
                x = (f32)i;
                ++i;
                *arg1 = y - t * x;
                n = arg0->unk_F98;
                ++arg1;
            } while (i < n);
        }
    }
}
