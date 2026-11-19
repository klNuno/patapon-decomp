#include "common.h"

extern "C" {

struct S {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
};

struct T {
    char *unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    u8 unk_10[0x84];
    u8 pad_94[0x9C];
    s32 unk_130;
    f32 unk_134;
    f32 unk_138;
};

extern s32 D_089EED20[];
extern f32 D_089EED28[];
extern f32 D_08A06A50[];

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887ED98(char *, s32);
s32 func_0887EDA8(char *, s32);
void func_08995398(s32, s32);
void func_08995438(s32, s32);
void func_08995508(s32, s32);
void func_089955CC(char *);
void func_089955D4(char *);
void func_089955DC(s32, s32);
s32 func_08995720(s32);
s32 func_089B88C0(s32);

static inline const f32 &func_inline(const f32 &arg0, const f32 &arg1) {
    if (arg0 < arg1) {
        return arg0;
    }
    return arg1;
}

static inline const f32 &func_inline2(const f32 &arg0, const f32 &arg1) {
    if (arg1 < arg0) {
        return arg0;
    }
    return arg1;
}

void func_089958E8(T *arg0, u32 arg1) {
    f32 temp0;
    f32 temp1;
    s32 k = arg0->unk_130;
    if (k == 1) {
        f32 temp = arg0->unk_134;
        f32 x = (f32)arg1 / 4800.0f;
        temp0 = temp - x;
        arg0->unk_134 = func_inline2(temp0, D_08A06A50[0]);
    } else if (k == 2) {
        f32 temp = arg0->unk_134;
        f32 x = (f32)arg1 / 4800.0f;
        temp1 = temp + x;
        arg0->unk_134 = func_inline(temp1, D_089EED28[0]);
    }
    if (arg0->unk_08 == 0) {
        arg0->unk_138 = 1.5707964f;
        return;
    }
    f32 temp = arg0->unk_138;
    temp += 0.2f;
    arg0->unk_138 = temp;
    if (temp >= 3.1415927f) {
        arg0->unk_138 = temp - 3.1415927f;
    }
    ((S *)arg0->unk_10)->unk_0C();
    s32 n = D_089EED20[func_089B88C0(func_08995720(arg0->unk_04)) == 2];
    if (func_0887ED98(arg0->unk_00, 0x20) != 0) {
        --arg0->unk_0C;
        func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        if (arg0->unk_0C < 0) {
            arg0->unk_0C = n;
        }
        func_08995398(arg0->unk_04, *(volatile s32 *)&arg0->unk_0C);
    }
    if (func_0887ED98(arg0->unk_00, 0x80) != 0) {
        ++arg0->unk_0C;
        func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
        if (n < arg0->unk_0C) {
            arg0->unk_0C = 0;
        }
        func_08995398(arg0->unk_04, *(volatile s32 *)&arg0->unk_0C);
    }
    if (func_0887EDA8(arg0->unk_00, 0x4000) != 0) {
        s32 temp = *(volatile s32 *)&arg0->unk_04;
        func_08995438(temp, *(volatile s32 *)&arg0->unk_0C);
        return;
    }
    if (func_0887EDA8(arg0->unk_00, 0x1000) != 0) {
        s32 x = arg0->unk_0C;
        if (x != 3) {
            func_08995508(arg0->unk_04, x);
            return;
        }
    }
    if (func_0887EDA8(arg0->unk_00, 0x8000) != 0) {
        s32 x = arg0->unk_0C;
        if (x != 3) {
            func_089955DC(arg0->unk_04, x);
            return;
        }
    }
    if (func_0887EDA8(arg0->unk_00, 8) != 0) {
        func_089955CC((char *)arg0->unk_04);
        return;
    }
    if (func_0887EDA8(arg0->unk_00, 0x2000) != 0) {
        func_089955D4((char *)arg0->unk_04);
    }
}

}
