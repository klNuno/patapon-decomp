#include "common.h"

typedef struct T0898CBF4 {
    struct T0898CBF4 *unk_00;
    struct T0898CBF4 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    s32 unk_20;
    void *unk_24;
} T0898CBF4;

typedef struct Unk0898D760_00 {
    struct Unk0898D760_00 *unk_00;
    struct Unk0898D760_00 *unk_04;
    u8 pad_08[4];
    struct Unk0898D760_00 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    void *unk_24;
} Unk0898D760_00;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0C[0xC];
    u8 pad_18[0x118];
    T0898CBF4 unk_130;
    Unk0898D760_00 unk_158;
    s32 unk_180;
    s32 unk_184[100];
    s32 unk_314[90];
} Unk0898D760;

typedef struct {
    f32 unk_00[16];
} Mtx;

typedef struct {
    f32 unk_00[2];
} Unk0898D760_01;

typedef struct O O;

extern void *D_08A0645C[];
s32 func_088586E8(void);
s32 func_089B53D8(s32);
u32 func_089B5464(s32);
extern s32 func_08985828(s32, s32);
void func_08866464(Mtx *, void *, void *);
extern s32 func_08945908(s32, s32);
void func_0898D14C(s32 *, T0898CBF4 *);
void func_0898D0B4(s32 *, T0898CBF4 *, s32);
void func_0898DC20(O *, u8 *, f32 *);
s32 func_0898E1A4(s32 arg0);
void func_08945F18(void *, s32, s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_0898D760(Unk0898D760 *arg0, s32 arg1, u8 arg2) {
    s32 temp0;
    s32 temp1;
    Unk0898D760_01 temp2;
    Mtx temp3;
    s32 temp5;
    s32 temp4 = arg0->unk_130.unk_04->unk_08;
    Unk0898D760_00 *temp6;

    func_0898D14C(&temp1, &arg0->unk_130);
    func_0898D0B4(&temp0, &arg0->unk_130, temp1);
    func_08866464(&temp3, (void *)func_08985828(arg1, 0), D_08A0645C[arg0->unk_180]);
    arg0->unk_180 = (arg0->unk_180 + 1) & 1;
    if (arg2 == 0) {
        temp5 = arg0->unk_184[func_089B5464(func_088586E8()) % 100U];
    } else {
        temp5 = arg0->unk_314[func_089B5464(func_088586E8()) % 90U];
    }
    temp2 = *(Unk0898D760_01 *)&temp3.unk_00[12];
    func_0898DC20((O *)temp4, (u8 *)func_08945908((s32)arg0->unk_04, temp5), temp2.unk_00);
    temp6 = (Unk0898D760_00 *)func_0898E1A4(temp4);
    if (&arg0->unk_158 != temp6) {
        s32 temp7;
        if (arg0->unk_158.unk_00 != &arg0->unk_158) {
            temp6->unk_00 = arg0->unk_158.unk_00;
            arg0->unk_158.unk_00->unk_04 = temp6;
            arg0->unk_158.unk_00 = temp6;
            temp7 = 1;
        } else {
            arg0->unk_158.unk_00 = temp6;
            arg0->unk_158.unk_04 = temp6;
            temp6->unk_00 = &arg0->unk_158;
            temp7 = 1;
        }
        temp6->unk_04 = &arg0->unk_158;
        if (temp7) {
            temp6->unk_0C = &arg0->unk_158;
            ++arg0->unk_158.unk_20;
        }
    }
    if (temp5 != 0x24) {
        func_08945F18(arg0->unk_0C, temp5, 1);
    }
    func_08878864(func_089B53D8(func_088586E8()), 0x1B0105, 2, 1.0f, 0.0f, 0.0f);
}
