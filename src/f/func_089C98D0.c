#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} R_089C97B8;

typedef struct {
    u8 pad_00[0x168];
    s32 unk_168;
    s32 unk_16C;
    u8 pad_170[0xD44];
    u32 unk_EB4;
    s32 unk_EB8;
    u8 unk_EBC[0x10];
} S_089C97B8;

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} O_089CA16C;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
} M_089CA16C;

typedef struct {
    u8 pad_00[0x40];
} Unk_089CA058_Local;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x1C];
} T;

R_089C97B8 *func_089C0588(void *);
O_089CA16C *func_08985828(s32, s32);
void func_0898ABB8(void *, f32, s32, s32);
void func_08855354(M_089CA16C *);
void func_08864E80(void *, M_089CA16C *);
void func_08866464(Unk_089CA058_Local *, char *, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
u32 func_089B5464(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_089C0568(void *);
s32 func_089C0570(void *);
void func_089C0578(void *, s32, s32);
u32 func_089C0590(void *);
u32 func_089C0598(void *);
void func_089C05A0(s32 *, void *);
s32 func_089CA0E0(S_089C97B8 *, void *, u32);
extern f32 D_089F37C0[];
extern s32 D_089F3828[][3];

static inline f32 func_089C98D0_00(f32 arg0, f32 arg1, u32 arg2) {
    return arg0 + arg1 * ((f32)arg2 / 4294967296.0f);
}

void func_089C98D0(S_089C97B8 *arg0, s32 arg1, void *arg2) {
    T temp130;
    Unk_089CA058_Local tempE0;
    M_089CA16C tempA0;
    Unk_089CA058_Local temp60;
    M_089CA16C temp20;
    R_089C97B8 *p;
    u32 i;
    s32 j;
    O_089CA16C *o;
    O_089CA16C *q;
    u32 k;
    f32 f;

    p = func_089C0588(arg2);
    if (p->unk_04 != arg0->unk_EB8) {
        func_0898ABB8(func_08985828((s32)arg0, 0xB), 0.0f, 2, 1);
        arg0->unk_16C = 0;
    }
    if (func_089C0568(arg2) != 0) {
        o = func_08985828((s32)arg0, 0);
        if (o->unk_4C != 4)
            func_0898ABB8(o, 0.0f, 4, 1);
        i = func_089C0590(arg2);
        if (i < 16U) {
            j = func_089CA0E0(arg0, arg2, i);
            func_0898ABB8(func_08985828((s32)arg0, j + 1), 0.0f, 3, 0);
            if (arg0->unk_EBC[i] != 0) {
                q = func_08985828((s32)arg0, 0);
                f = func_089C98D0_00(0.0f, 3.0f, func_089B5464(func_088586E8()));
                k = (u32)f;
                func_08866464(&tempE0, (char *)q, D_089F3828[j][k]);
                o = func_08985828((s32)arg0, 0xB);
                func_08864E80(o, (M_089CA16C *)&tempE0);
                func_0898ABB8(o, 0.0f, k + 3, 0);
            }
            func_089C0578(arg2, 0, j);
        }
    } else if (func_089C0570(arg2) != 0) {
        o = func_08985828((s32)arg0, 0);
        func_0898ABB8(o, 0.0f, 0x10, 0);
        func_0898ABB8(o, 0.4f, 5, 1);
        func_089C05A0(&temp130.unk_10, arg2);
        if (temp130.unk_10 == 0) {
            i = func_089C0598(arg2);
            j = func_089CA0E0(arg0, arg2, i);
            func_0898ABB8(func_08985828((s32)arg0, j + 1), 0.0f, 4, 0);
            func_08855354(&tempA0);
            tempA0.unk_30 = D_089F37C0[0];
            tempA0.unk_34 = D_089F37C0[1];
            o = func_08985828((s32)arg0, 0xB);
            func_08864E80(o, &tempA0);
            func_0898ABB8(o, 0.0f, 1, 1);
            func_0898ABB8(o, 0.4f, 2, 1);
            func_08878864(func_089B53D8(func_088586E8()), 0x44010A, 2, 1.0f, 0.0f, 0.0f);
        } else {
            i = func_089C0590(arg2);
            if (i < 16U) {
                j = func_089CA0E0(arg0, arg2, i);
                o = func_08985828((s32)arg0, j + 1);
                if (o->unk_4C == 2)
                    func_0898ABB8(o, 0.0f, 4, 0);
                if (arg0->unk_EBC[i] != 0) {
                    q = func_08985828((s32)arg0, 0);
                    j = func_089CA0E0(arg0, arg2, i);
                    f = func_089C98D0_00(0.0f, 2.0f, func_089B5464(func_088586E8()));
                    k = (u32)f;
                    func_08866464(&temp60, (char *)q, D_089F3828[j][k]);
                    o = func_08985828((s32)arg0, 0xB);
                    func_08864E80(o, (M_089CA16C *)&temp60);
                    func_0898ABB8(o, 0.0f, k + 3, 0);
                } else {
                    func_08855354(&temp20);
                    temp20.unk_30 = D_089F37C0[0];
                    temp20.unk_34 = D_089F37C0[1];
                    o = func_08985828((s32)arg0, 0xB);
                    func_08864E80(o, &temp20);
                    func_0898ABB8(o, 0.0f, 1, 1);
                    func_0898ABB8(o, 0.4f, 2, 1);
                }
                func_08878864(func_089B53D8(func_088586E8()), 0x440100, 2, 1.0f, 0.0f, 0.0f);
            }
        }
        ++arg0->unk_168;
        ++arg0->unk_16C;
    }
}
