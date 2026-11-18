#include "common.h"

typedef struct {
    u8 pad_00[0x6BC];
    s32 unk_6BC;
} T_088EFF18;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x6D0];
    T_088EFF18 *unk_6E0;
    u8 pad_6E4[0x34];
    s32 unk_718;
    u8 pad_71C[0x180];
    s32 unk_89C;
    u8 pad_8A0[4];
    s32 unk_8A4;
    u8 pad_8A8[0x38];
    s32 unk_8E0;
    u8 pad_8E4[9];
    u8 unk_8ED;
} U_088EFF18;

typedef struct {
    u8 pad_00[0x14];
    U_088EFF18 *unk_14;
    u8 pad_18[6];
    u16 unk_1E;
    u8 unk_20[0x200];
    s32 unk_220;
} S_088EFF18;

void func_0881F5C0(void *, s32, s32);
s32 func_088268AC(void *);
s32 func_08852EB8(void *);
void func_08852EDC(void *, s32);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_088586E8(void);
s32 func_0887EDA8(s32, s32);
void func_088D450C(s32, s32);
s32 func_088F2D84(void *);
void func_089234AC(void *, s32, f32, f32);
s32 func_0892CF80(void *);
void func_0892CF98(void *, s32);
u8 *func_089B53D8(s32);
extern s32 D_089FDBDC[];

void func_088EFF18(S_088EFF18 *arg0, void *arg1) {
    s32 n;
    if (arg0->unk_14 == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    if (func_08852EB8(arg1) == 0 && func_088268AC(arg0->unk_20) == 0 &&
        arg0->unk_14 != NULL && arg0->unk_14->unk_718 == 4) {
        func_08852EDC(arg1, 2);
        if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
            func_08852EDC(arg1, 3);
        }
    }
    n = func_08852EB8(arg1);
    switch (n) {
    case 0: {
        s32 *a = func_0885356C(arg1, 0, 1, 4);
        s32 *b = func_0885356C(arg1, 1, 1, 4);
        func_08852EDC(arg1, n + 1);
        arg0->unk_14->unk_8E0 = 0;
        if (func_088268AC(arg0->unk_20) != 0) {
            s32 i, temp, v;
            arg0->unk_14->unk_8ED = 1;
            i = func_088268AC(arg0->unk_20);
            if (i != 0) {
                u16 *p = &((S_088EFF18 *)((i << 1) + (u32)arg0))->unk_1E;
                if (*p == 0x2F) {
                    *p = 0;
                }
            }
            func_088D450C((s32)arg0->unk_14, (s32)arg0->unk_20);
            arg0->unk_14->unk_8ED = 0;
            v = arg0->unk_14->unk_6E0->unk_6BC + 1;
            temp = -1;
            if (*a > 0) {
                temp = v - *a;
                temp = *(D_089FDBDC[0] < temp ? &temp : D_089FDBDC);
            }
            arg0->unk_14->unk_89C = temp;
            arg0->unk_14->unk_8A4 = *b;
            func_0881F5C0(arg0->unk_20, 0, 0x200);
        }
        break;
    }
    case 1:
        if (arg0->unk_14->unk_718 == 4) {
            func_08852EDC(arg1, n + 1);
        } else if (arg0->unk_14->unk_718 == 1) {
            func_08852F00(arg1, 0);
        }
        break;
    case 2:
        if (func_088F2D84(arg0->unk_14->unk_10) != 0) {
            func_08852EDC(arg1, n + 1);
        }
        break;
    case 3:
        if (func_0887EDA8(arg0->unk_220, 0x10) != 0) {
            func_0892CF98(arg0->unk_14, -1);
        }
        if (func_0887EDA8(arg0->unk_220, 0x40) != 0) {
            func_0892CF98(arg0->unk_14, 1);
        }
        if (func_0887EDA8(arg0->unk_220, 0x4000) != 0) {
            func_08852EDC(arg1, n + 1);
            func_089234AC(func_089B53D8(func_088586E8()) + 0x2844, 0, 1.0f, 0.0f);
        }
        break;
    case 4: {
        s32 temp = func_0892CF80(arg0->unk_14);
        *func_0885356C(arg1, 2, 1, 4) = temp;
        func_08852F00(arg1, 0);
        break;
    }
    }
}
