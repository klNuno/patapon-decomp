#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x708];
    s32 unk_718;
    u8 pad_71C[0x1C4];
    s32 unk_8E0;
    u8 pad_8E4[9];
    u8 unk_8ED;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
    u8 pad_18[6];
    u16 unk_1E;
    u8 unk_20[0x200];
    s32 unk_220;
} S;

void func_0881F5C0(void *, s32, s32);
s32 func_088268AC(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
void func_088D450C(s32, s32);
s32 func_088F2D84(void *);

s32 func_0887EDA8(s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_089234AC(void *, s32, f32, f32);

void func_088EFC74(S *arg0, void *arg1)
{
    s32 n;
    T *p;
    s32 x;
    u16 *q;

    if (arg0->unk_14 == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    if (func_08852EB8(arg1) == 0 && func_088268AC(arg0->unk_20) == 0) {
        p = arg0->unk_14;
        if (p != NULL && p->unk_718 == 4) {
            func_08852EDC(arg1, 2);
            if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
                func_08852EDC(arg1, 3);
            }
        }
    }
    n = func_08852EB8(arg1);
    switch (n) {
    case 0:
        func_08852EDC(arg1, n + 1);
        arg0->unk_14->unk_8E0 = 0;
        if (func_088268AC(arg0->unk_20) != 0) {
            arg0->unk_14->unk_8ED = 1;
            x = func_088268AC(arg0->unk_20);
            if (x != 0) {
                q = (u16 *)((u8 *)(x * 2) + (u32)arg0 + 0x1E);
                if (*q == 0x2F) {
                    *q = 0;
                }
            }
            func_088D450C((s32)arg0->unk_14, (s32)arg0->unk_20);
            arg0->unk_14->unk_8ED = 0;
            func_0881F5C0(arg0->unk_20, 0, 0x200);
            return;
        }
        break;
    case 1:
        x = arg0->unk_14->unk_718;
        if (x == 4) {
            func_08852EDC(arg1, n + 1);
            return;
        }
        if (x == 1) {
            func_08852F00(arg1, 0);
            return;
        }
        break;
    case 2:
        if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
            func_08852EDC(arg1, n + 1);
            return;
        }
        break;
    case 3:
        if (func_0887EDA8(arg0->unk_220, 0x4000) != 0) {
            func_08852EDC(arg1, n + 1);
            func_089234AC(func_089B53D8(func_088586E8()) + 0x2844, 0, 1.0f, 0.0f);
            return;
        }
        break;
    case 4:
        func_08852F00(arg1, 0);
        break;
    }
}
