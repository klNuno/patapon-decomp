#include "common.h"

extern "C" {
struct Unk18 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0xC];
};

struct Unk1B0 {
    u8 pad_00[0x1C0];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10(Unk18 *);
};

struct Unk54 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
};

struct Unk14CD {
    u8 pad_00[0x1B0];
    u8 unk_1B0[0x1B0];
    u8 unk_360[0x10];
    u8 pad_370[0x115D];
    u8 unk_14CD;
};

struct Unk20 {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
};

struct UnkRaw { f32 unk_00[8]; };

struct Unk2C {
    Unk20 unk_00;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
};

s32 func_089424C0(s32, s32);
void func_0894259C(char *);
void func_089425C8(char *, s32, s32, s32, s32, s8, s8);
s32 func_08942680(s32, s32);

inline bool func_00(const volatile Unk20 &arg0, const Unk54 &arg1)
{
    if (arg0.unk_00 != 0 && arg1.unk_04 != 0) return true;
    f32 f1 = arg0.unk_04;
    if (f1 > 0.0f && arg1.unk_08 >= f1) return true;
    f32 f2 = arg0.unk_08;
    if (f2 > 0.0f && arg1.unk_0C >= f2) return true;
    s32 n1 = arg0.unk_0C;
    if (n1 > 0 && arg1.unk_10 >= n1) return true;
    s32 n2 = arg0.unk_10;
    if (n2 > 0 && arg1.unk_14 >= n2) return true;
    return false;
}

s32 func_088A83A4(void *arg0, void *arg1, Unk14CD *arg2, u8 *arg3, void *arg4, Unk2C *arg5)
{
    Unk18 temp;
    volatile UnkRaw t;
    bool b;
    Unk54 *p;

    if (arg5 == NULL) return 0;
    *(UnkRaw *)&t = *(const UnkRaw *)&arg5->unk_00;
    p = (Unk54 *)(arg3 + 0x54);
    b = func_00(*(const volatile Unk20 *)&t, *p);
    if (!b && arg5->unk_00.unk_14 >= 0) {
        func_0894259C((char *)&temp);
        func_089425C8((char *)&temp, func_089424C0((s32)arg2->unk_1B0, -1), -1, 0, 0, 1, 0);
        s32 n = arg5->unk_00.unk_14;
        temp.unk_04 = -1;
        temp.unk_08 = n + 10;
        ((Unk1B0 *)arg2->unk_1B0)->func_10(&temp);
        if (func_08942680((s32)arg2->unk_360, 0) > 0) b = true;
    }
    if (b) {
        if (arg5->unk_24 != 0) {
            p->unk_04 = 0;
            p->unk_08 = 0.0f;
            p->unk_0C = 0.0f;
            p->unk_10 = 0;
            p->unk_14 = 0;
            p->unk_18 = -1;
        }
        if (arg5->unk_28 != 0 && arg2->unk_14CD != 0) arg2->unk_14CD = 0;
        if (arg5->unk_20 >= 0) p->unk_00 = arg5->unk_20;
    }
    return 1;
}
}
