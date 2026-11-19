#include "common.h"

extern "C" {
class T;
typedef void (T::*P)();

inline const f32 &func_0(const f32 &arg0, const f32 &arg1) {
    if (arg0 < arg1) {
        return arg0;
    } else {
        return arg1;
    }
}

struct S {
    u8 pad_00[0x10];
    char unk_10[0x460];
    s32 unk_470;
    u8 pad_474[0x10C44];
    u8 unk_110B8;
    u8 pad_110B9[3];
    f32 unk_110BC;
    f32 unk_110C0;
    T *unk_110C4;
    P unk_110C8;
    u8 unk_110D4;
    u8 pad_110D5[3];
    f32 unk_110D8;
    f32 unk_110DC;

    void func_1(u32 arg0) {
        if (unk_110D4 == 1) {
            f32 temp = unk_110D8 + (f32)arg0 / 4800.0f;
            unk_110D8 = func_0(temp, unk_110DC);
            if (unk_110D8 >= unk_110DC && unk_110C8) {
                (unk_110C4->*unk_110C8)();
            }
        }
    }
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_089234AC(void *, s32, f32, f32);
void func_0892E67C(void *, s32, s32);
void func_0897813C(S *, u32);
void func_08978E74(S *);
void func_08991748(void *, u32);
s32 func_08991CC8(char *);
s32 sceKernelPowerTick(s32);
extern void *D_08AD8DD8[];

void func_08977BD8(S *arg0, u32 arg1) {
    func_08991748(arg0->unk_10, arg1);
    switch (arg0->unk_470) {
    case 1:
        if (func_08991CC8(arg0->unk_10) == 3) {
            func_08878864(func_089B53D8(func_088586E8()), 0x1C0000, 2, 1.0f, 0.0f, 0.0f);
            arg0->unk_470 = 2;
        }
        break;
    case 2:
        if (func_08991CC8(arg0->unk_10) == 4 || func_08991CC8(arg0->unk_10) == 5) {
            func_08978E74(arg0);
            arg0->unk_470 = 3;
        }
        break;
    case 3:
        if (func_08991CC8(arg0->unk_10) == 5) {
            arg0->unk_110BC = 0.0f;
            arg0->unk_110C0 = 0.7f;
            arg0->unk_110B8 = 1;
            arg0->unk_470 = 4;
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        func_0897813C(arg0, arg1);
        arg0->func_1(arg1);
        break;
    case 8:
        if (func_08991CC8(arg0->unk_10) != 0) {
            func_089234AC((u8 *)func_089B53D8(func_088586E8()) + 0x2844, 0x1C0002, 1.0f, 0.5f);
            arg0->unk_470 = 9;
        }
        arg0->func_1(arg1);
        break;
    case 9:
        arg0->func_1(arg1);
        if (func_08991CC8(arg0->unk_10) == 5) {
            arg0->unk_470 = 10;
        }
        break;
    case 0:
    default:
        break;
    }
    func_0892E67C(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, arg1, 0);
    sceKernelPowerTick(6);
}
}
