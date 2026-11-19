#include "common.h"

extern "C" {

class Unk00 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

struct Unk01 {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
};

struct Unk02 {
    Unk01 *unk_00;
    u8 pad_04[4];
    Unk00 *unk_08;
    char *unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    u8 pad_24[4];
    s32 unk_28;
    s32 unk_2C;
    u8 pad_30[8];
    f32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    u8 pad_44[0xC];
    f32 unk_50;
};

struct Unk03 {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x40];
    f32 unk_90;
};

extern s32 func_08853004(s32);
s32 *func_0884EBA0(s32, s32);
extern f32 *func_0884EBB0(s32, s32);
extern s32 func_08974044(char *, s32);
extern void func_08971C34(Unk02 *);
extern u8 func_08971F3C(Unk02 *);
extern void *func_08899E18(s32, s32);
extern u8 func_08971E20(Unk02 *, s32);
extern void func_08971F60(Unk02 *, s32);
extern void func_089738C4(Unk02 *);
extern void func_08973834(Unk02 *);
extern void func_08972E24(Unk02 *);
extern void func_08972828(Unk02 *);
extern u8 func_089734B8(Unk02 *);
extern void func_089737CC(Unk02 *, s32, s32);
extern void func_0897305C(Unk02 *);
s32 func_08973EB8(char *arg0, s32 arg1);
extern u8 func_089733C0(Unk02 *);
extern u8 func_08981F1C(char *arg0);
extern void func_089723C0(Unk02 *, s32);

void func_089717E8(Unk02 *arg0)
{
    s32 a, b, i, n, k;
    u8 c, d;
    Unk03 *p;

    a = func_08853004((s32)arg0->unk_08);
    b = arg0->unk_08->unk_0C();
    arg0->unk_10 = *func_0884EBA0(b, 10);
    arg0->unk_14 = *func_0884EBA0(b, 11);
    if ((arg0->unk_18 = *func_0884EBA0(b, 12)) != 0)
        return;
    k = *func_0884EBA0(a, 31);
    arg0->unk_40 = func_08974044((char *)arg0, 1);
    n = arg0->unk_40;
    if (n <= 0)
        return;
    c = 0;
    if (n != *func_0884EBA0(b, 13)) {
        *func_0884EBA0(b, 13) = n;
        c = 1;
    }
    arg0->unk_50 = *func_0884EBB0(a, 32);
    if (k == 1 || k == 3 || k == 9 || k == 11 || c == 1)
        func_08971C34(arg0);
    if (func_08971F3C(arg0) == 1)
        func_08899E18(arg0->unk_00->unk_36B10, 0);
    arg0->unk_3C = 0;
    i = 0;
    do {
        if (func_08971E20(arg0, i) == 1) {
            d = 1;
            func_08971F60(arg0, i);
            switch (k) {
            case 0:
                func_089738C4(arg0);
                func_08973834(arg0);
                break;
            case 1:
                arg0->unk_28 = -1;
                func_08972E24(arg0);
            case 2:
                if (arg0->unk_28 < 0)
                    break;
                func_08972828(arg0);
                break;
            case 3:
                arg0->unk_28 = -1;
                if (func_089734B8(arg0) == 0)
                    break;
                func_08972E24(arg0);
            case 4:
                if (arg0->unk_28 < 0)
                    break;
                func_08972828(arg0);
                break;
            case 5:
                if (func_089734B8(arg0) == 0)
                    break;
                func_089737CC(arg0, 0x47, 0);
                break;
            case 9:
                arg0->unk_28 = -1;
                func_0897305C(arg0);
            case 10:
                if (arg0->unk_28 < 0)
                    break;
                func_08972828(arg0);
                if (arg0->unk_28 < 0)
                    break;
                p = (Unk03 *)(func_08973EB8((char *)arg0, arg0->unk_20) + 0xCF0);
                if (arg0->unk_2C != p->unk_4C)
                    break;
                if (func_089733C0(arg0) != 1)
                    break;
                p->unk_90 += arg0->unk_38;
                break;
            case 11:
                arg0->unk_28 = -1;
                func_0897305C(arg0);
            case 12:
                if (arg0->unk_28 >= 0) {
                    func_08972828(arg0);
                    if (arg0->unk_28 >= 0) {
                        p = (Unk03 *)(func_08973EB8((char *)arg0, arg0->unk_20) + 0xCF0);
                        if (arg0->unk_2C == p->unk_4C && func_089733C0(arg0) == 1) {
                            p->unk_90 += arg0->unk_38;
                            d = 0;
                        }
                    }
                }
                if (d != 1)
                    break;
                if (arg0->unk_0C != NULL && func_08981F1C(arg0->unk_0C) == 1)
                    arg0->unk_28 = -1;
                if (arg0->unk_28 >= 0)
                    break;
                func_089738C4(arg0);
                func_08973834(arg0);
                break;
            case 7:
                arg0->unk_28 = -1;
                func_08972E24(arg0);
            case 8:
                if (arg0->unk_28 < 0)
                    break;
                func_08972828(arg0);
                break;
            case 6:
            default:
                break;
            }
            func_089723C0(arg0, i);
            if (++arg0->unk_3C >= arg0->unk_40)
                break;
        }
        i++;
    } while (i < 6);
}

}
