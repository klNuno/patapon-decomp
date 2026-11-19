#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0xC];
} M;

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x420];
    f32 unk_478;
} T;

typedef struct { u8 pad_00[8]; s32 unk_08; } A;

void func_08858024(s32);
extern s32 func_088581B0(s32);
void func_08855354(char *);
void func_088B8500(s32, M *, s32, s32);

void func_088B8E4C(T *arg0, A *arg1, s32 arg2) {
    struct { s32 *unk_00; } x1;
    struct { M unk_00; u8 pad_40[12]; } a;
    M b;
    f32 x, y, t, u;
    s32 q, i;

    func_08858024(1);
    func_088581B0((s32)&a.unk_00);
    func_08858024(2);
    func_08855354((char *)&b);
    x = a.unk_00.unk_30;
    y = arg0->unk_478;
    q = (s32)(-x * y) / 720;
    x1.unk_00 = &arg1->unk_08;
    i = 0;
    u = 1.0f - y;
    t = (f32)q;
    t -= x;
    b.unk_30 = t * u + (f32)(q * 720 - 1440);
    do {
        func_088B8500(*x1.unk_00, &b, arg0->unk_54, arg2);
        i++;
        b.unk_30 += 720.0f;
    } while (i < 5);
}
