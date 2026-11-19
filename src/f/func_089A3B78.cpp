#include "common.h"

extern "C" {
struct V {
    u8 pad_00[0x1058];
    virtual void unk_08(s32);
};

typedef struct Unk_089A4DC0 {
    u8 pad_00[0x105C];
    s32 unk_105C, unk_1060, unk_1064;
    u8 unk_1068, unk_1069;
    u8 pad_106A[2];
    s32 unk_106C;
    u8 pad_1070[0x130];
    u8 unk_11A0[0xD20];
    u8 unk_1EC0[0x6D0], unk_2590[0x6D0], unk_2C60[0x6D0], unk_3330[0x6D0];
    u8 unk_3A00[0x6D0], unk_40D0[0x6D0], unk_47A0[0x6D0];
    u8 pad_4E70[0x10];
    u8 unk_4E80[0x180];
    s32 unk_5000;
    V unk_5004;
    u8 pad_6060[0x428];
    u8 unk_6488[0x218];
    f32 unk_66A0;
    u8 pad_66A4[0x18];
    u32 unk_66BC;
    u8 pad_66C0[0x40];
    u8 unk_6700[0x10A48];
    u8 unk_17148[0x10A48];
    u8 unk_27B90[0x10A48];
    s32 unk_385D8;
} Unk_089A4DC0;

s32 func_088586E8(void);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0887EDA8(s32, s32);
void func_088F24B0(void *);
u8 func_08994A74(char *);
s32 func_08995090(s32);
void func_08996A20(char *);
s32 func_08998080(s32, s32);
char *func_0899809C(s32);
typedef struct Obj_08998D30 Obj_08998D30;
void func_089991B0(Obj_08998D30 *);
void func_0899A8F4(char *);
void func_0899F390(void *, s32);
s32 func_089A05C4(char *);
void func_089A1698(void *);
void func_089A1900(void *, void *);
void func_089A4E48(Unk_089A4DC0 *, s32);
u8 func_089A53F8(void *);
s32 func_089B53D8(s32);
void func_089BAF1C(void *);
void func_089C6854(void *);
void func_089C6864(s32, s32);

void func_089A3B78(Unk_089A4DC0 *arg0, s32 arg1) {
    u32 i;
    s32 temp;
    f32 f;
    if (arg0->unk_1068 == 1) {
        if (arg0->unk_1069 == 1) {
            arg0->unk_1068 = 0;
            func_089BAF1C(arg0->unk_11A0);
            func_088F24B0(arg0->unk_1EC0);
            func_088F24B0(arg0->unk_2590);
            func_088F24B0(arg0->unk_2C60);
            func_088F24B0(arg0->unk_3330);
            func_088F24B0(arg0->unk_3A00);
            func_088F24B0(arg0->unk_40D0);
            func_088F24B0(arg0->unk_47A0);
            func_089A1698(arg0->unk_6488);
            func_089C6854(arg0->unk_6700);
            func_089C6854(arg0->unk_17148);
            func_089C6854(arg0->unk_27B90);
            func_089991B0((Obj_08998D30 *)arg0->unk_1064);
            func_08995090(arg0->unk_105C);
            func_08996A20(func_0899809C(arg0->unk_1064));
            i = 0;
            do {
                if (i != (u32)arg0->unk_106C) {
                    func_0899A8F4((char *)func_08998080(arg0->unk_1064, i));
                }
                i++;
            } while (i < 3U);
            return;
        }
        if (func_08994A74((char *)&arg0->unk_5004) == 0 &&
            arg0->unk_66BC != 0 && arg0->unk_385D8 == 0 &&
            func_089A53F8(arg0) == 0 && (u8)func_089A05C4((char *)arg0->unk_4E80) == 0) {
            if (func_0887EDA8(arg0->unk_1060, 0x10) != 0) {
                temp = --arg0->unk_5000;
                if (temp < 0) {
                    arg0->unk_5000 = arg0->unk_66BC - 1;
                }
                func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            }
            if (func_0887EDA8(arg0->unk_1060, 0x40) != 0) {
                temp = ++arg0->unk_5000;
                if (arg0->unk_66BC - 1 < (u32)temp) {
                    arg0->unk_5000 = 0;
                }
                func_08878864(func_089B53D8(func_088586E8()), 1, 2, 1.0f, 0.0f, 0.0f);
            }
            f = arg0->unk_66A0;
            f += 0.05f;
            arg0->unk_66A0 = f;
            if (f > 1.0f) {
                arg0->unk_66A0 = f - 1.0f;
            }
            func_089A1900(arg0->unk_6488, arg0);
        } else {
            arg0->unk_66A0 = 0.5f;
        }
        arg0->unk_5004.unk_08(arg1);
        i = 0;
        do {
            func_089A4E48(arg0, i);
            ++i;
        } while (i < 3U);
    }
    temp = arg0->unk_385D8;
    if (temp != 0) {
        func_089C6864(temp, arg1);
    } else {
        func_0899F390(arg0->unk_4E80, arg1);
    }
}
}
