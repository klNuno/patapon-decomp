#include "common.h"

extern "C" {

struct Unk1 {
    s32 unk_00;
    u8 pad_04[8];
    u32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
};

struct Unk0 {
    u8 pad_00[0x104];
    Unk1 *unk_104;
    s32 unk_108;
};

struct Unk02 {
    u8 pad_00[0x24];
    f32 unk_24;
    u32 unk_28;
    u32 unk_2C;
    u32 unk_30;
    u32 unk_34;
    f32 unk_38;
    u8 pad_3C[8];
    s32 unk_44;
    u32 unk_48;
    u32 unk_4C;
};

struct Unk03 {
    u8 pad_00[0x38];
    u32 unk_38;
};

struct Unk04 {
    u8 pad_00[0xC];
    Unk03 **unk_0C;
    u32 unk_10;
};

struct Unk05 {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
};

extern Unk02 *func_08958DF0(s32);
extern u8 func_08879BC0(Unk0 *);
extern u8 func_08879C18(Unk0 *);
s32 func_08879C70(Unk0 *arg0);

extern u32 D_089E9454[];
extern f32 D_08A04158[];
extern s32 D_08A0415C[];
extern u32 D_08A04160[];

}

template <class T>
static inline const T &unk_00(const T &arg0, const T &arg1)
{
    if (arg0 < arg1)
        return arg0;
    return arg1;
}

template <class T>
static inline const T &unk_04(const T &arg0, const T &arg1)
{
    if (arg1 < arg0)
        return arg1;
    return arg0;
}

extern "C" void func_0894B700(Unk05 *arg0, Unk04 *arg1, Unk0 *arg2, u32 arg3)
{
    Unk02 *p;
    u32 a, b, c, d, e, f;
    f32 x, y;
    s32 t;
    s32 m, n;
    u32 i, j, k;
    Unk03 *q;

    p = func_08958DF0(arg0->unk_08);
    k = *(volatile u32 *)D_089E9454;
    a = ((volatile Unk02 *)p)->unk_28;
    j = *(volatile u32 *)&arg3;
    b = ((volatile Unk02 *)p)->unk_2C;
    c = ((volatile Unk02 *)p)->unk_30;
    d = ((volatile Unk02 *)p)->unk_34;
    e = ((volatile Unk02 *)p)->unk_48;
    y = ((volatile Unk02 *)p)->unk_38;
    f = ((volatile Unk02 *)p)->unk_4C;
    x = ((volatile Unk02 *)p)->unk_24;
    arg3 = *(k < j ? D_089E9454 : &arg3);
    n = (s32)(arg3 * p->unk_44);
    m = p->unk_44 * 25;
    t = unk_04(m, n);
    i = arg1->unk_10;
    q = *(Unk03 **)((u8 *)arg1->unk_0C + i * 4 - 4);
    if (q == NULL) {
        arg0->unk_0C = 0;
    } else if (!(q->unk_38 & 2)) {
        s32 u = func_08879BC0(arg2);
        s32 v = func_08879C18(arg2);
        u32 n = func_08879C70(arg2);
        f32 z;
        s32 k;
        arg0->unk_30 += n;
        arg0->unk_38++;
        if (u != 0)
            n = (u32)((f32)n * x);
        if (v != 0)
            n += a;
        if (arg3 != 0)
            n += b;
        if (d < arg3)
            n += c;
        z = (f32)n + (f32)arg0->unk_0C * y;
        k = (u32)unk_04((f32)(u32)z, D_08A04158[0]);
        k = unk_00(k + t, D_08A0415C[0]);
        if (arg3 == 10 && arg0->unk_14 != 2)
            k = 1000;
        arg0->unk_2C += k;
        arg0->unk_34++;
        arg0->unk_0C = k;
    }
    if (arg0->unk_20 != 0)
        arg0->unk_0C = unk_00((u32)(arg0->unk_0C + 100), D_08A04160[0]);
    if (f < (u32)arg0->unk_0C && arg0->unk_20 != 0)
        arg0->unk_20 += 2;
    if ((u32)arg0->unk_0C >= e) {
        if (f < (u32)arg0->unk_0C) {
            arg0->unk_14 = 2;
            if (arg0->unk_20 == 0)
                arg0->unk_20 = 2;
        } else {
            arg0->unk_14 = 1;
            arg0->unk_20 = 0;
        }
    } else {
        arg0->unk_14 = 0;
        arg0->unk_20 = 0;
    }
    {
        s32 r = arg0->unk_10;
        s32 *s;
        if (r < arg0->unk_0C)
            s = &arg0->unk_0C;
        else
            s = &arg0->unk_10;
        arg0->unk_10 = *s;
    }
}
