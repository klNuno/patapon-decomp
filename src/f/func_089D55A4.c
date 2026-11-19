#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[4];
    s32 unk_08[2];
    s32 unk_10;
    u8 pad_14[0x10];
    u8 unk_24;
    u8 pad_25[3];
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    f32 unk_34;
} T;

void func_08814BB4(s32);
void func_0881518C(s32, s32, s32, s32);
void func_088151A8(s32, s32, s32, s32, s32, s32, s32);
void func_08815514(s32);
void func_088157AC(s32, s32, s32, s32);
void func_088157E8(s32, s32);
void func_08815814(s32, s32);
void func_0881587C(s32, s32);
void func_088159A8(s32, s32, s32, s32, s32);
void func_08815D9C(s32, s32, s32, s32, s32);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
s32 func_0893F544(void *, s32);

void func_089D55A4(T *arg0) {
    L_0893CEA8 l;
    f32 a;
    f32 b;
    s32 *p;
    s32 i;
    f32 v;
    f32 w;
    u32 *q;
    u32 bits;

    p = (s32 *)((u8 *)arg0->unk_08 + arg0->unk_10 * 4);
    if (func_0893F544(arg0->unk_04, *p) != 0) {
        arg0->unk_10 = (arg0->unk_10 + 1) & 1;
        if (arg0->unk_30 == 0) {
            arg0->unk_30 = 1;
            w = arg0->unk_34;
            arg0->unk_28 = 0.0f;
            arg0->unk_2C = w;
            arg0->unk_24 = 1;
        }
    }
    if (arg0->unk_30 != 0) {
        func_08864A30(&l);
        func_08814BB4(9);
        func_08815814(0, 0);
        func_088157E8(7, 0);
        func_0881587C(0, 0);
        func_088157AC(3, 0, 0, 0);
        func_088159A8(0, 0x200, 0x200, 0x200, *p);
        func_08815D9C(0, 2, 3, 0, 0);
        func_08814BB4(4);
        v = 1.0f;
        if (arg0->unk_30 == 1) {
            w = arg0->unk_2C;
            a = w;
            bits = *(u32 *)&a;
            bits = (bits << 1) >> 1;
            q = (u32 *)&a;
            *(u32 *)&a = bits;
            v = *(f32 *)q <= 0.0001f ? v : arg0->unk_28 / w;
        } else if (arg0->unk_30 == 3) {
            w = arg0->unk_2C;
            b = w;
            bits = *(u32 *)&b;
            bits = (bits << 1) >> 1;
            q = (u32 *)&b;
            *(u32 *)&b = bits;
            v = *(f32 *)q <= 0.0001f ? v : arg0->unk_28 / w;
            v = 1.0f - v;
        }
        if (arg0->unk_30 == 4) {
            v = 0.0f;
        }
        func_08815514(((u32)(255.0f * v) << 24) | 0xFFFFFF);
        for (i = 0; i < 4; i++) {
            func_0881518C(0x80, 0x110, 0x80, 0x110);
            func_088151A8(i * 0x200 / 4, 0, 0, i * 0x200 / 4, 0, 0, 0);
        }
        func_08864A68(&l, -1);
    }
}
