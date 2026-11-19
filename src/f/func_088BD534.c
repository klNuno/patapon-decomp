#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} Unk088BD534_00;

typedef struct {
    u8 pad_00[0x0C];
    s32 unk_0C;
    s32 unk_10;
} Unk088BD534_01;

typedef struct {
    u8 pad_00[0x40C];
    s32 unk_40C;
} Unk088BD534_02;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk088BD534_03;

typedef struct T088BBE88 {
    u8 pad_00[0x30];
    u8 *unk_30;
    u8 pad_34[0x1C];
    u8 unk_50[0x28];
    u8 *unk_78;
    Unk088BD534_02 unk_7C;
    s32 unk_48C;
    s32 unk_490;
    u8 unk_494;
    u8 pad_495[3];
    s32 unk_498;
    f32 unk_49C;
    f32 unk_4A0;
    u32 unk_4A4;
    struct T088BBE88 *unk_4A8;
    Unk088BD534_03 unk_4AC;
    u8 unk_4B8;
    u8 pad_4B9[3];
    s32 unk_4BC;
    s32 unk_4C0;
} T088BBE88;

typedef struct { u8 pad_00[4]; f32 unk_04; u8 pad_08[8]; } U;
typedef struct Obj_088BD814 Obj_088BD814;
typedef struct T_0894AA30 T_0894AA30;
typedef struct L_0894AA30 L_0894AA30;

extern u8 D_08A45EF0[];
extern u8 D_08A45F30[];
extern U D_089E01B0[];
extern Unk088BD534_03 D_08A490BC[];

void func_088BA1A0(T088BBE88 *);
void func_088CE4F4(void *, s32);
s32 func_088BD998(s32);
void *func_08827A50(s32, s32);
T_0894AA30 *func_0894AA30(T_0894AA30 *, s32, L_0894AA30 *, s32, s32, s32);
char *func_088BD934(char *, s32, s32);
void func_088BD8D0(char *, char *);
Obj_088BD814 *func_088BD814(Obj_088BD814 *, s16);

T088BBE88 *func_088BD534(T088BBE88 *arg0, s32 arg1, s32 arg2, Unk088BD534_01 *arg3) {
    Unk088BD534_02 *temp0;
    u32 *temp1;
    u32 temp2;
    u8 *temp3;
    u32 temp4;
    L_0894AA30 *temp5;
    Unk088BD534_00 *temp6;
    void *temp7;
    u32 temp8[4];

    func_088BA1A0(arg0);
    func_088CE4F4(arg0->unk_50, 0);
    arg0->unk_30 = D_08A45EF0;
    arg0->unk_78 = D_08A45F30;
    temp0 = &arg0->unk_7C;
    func_088BD998((s32)temp0);
    temp0->unk_40C = arg1;
    temp1 = (u32 *)((u8 *)arg3 + arg3->unk_10);
    temp2 = *temp1;
    temp3 = (u8 *)arg3 + arg3->unk_0C + 4;
    temp6 = (Unk088BD534_00 *)(temp1 + 1);
    for (temp4 = 0; temp4 < temp2; temp4++, temp6++) {
        temp5 = (L_0894AA30 *)(temp3 + temp6->unk_20 * 0x180);
        temp7 = func_08827A50(0x150, arg2);
        if (temp7 != NULL) {
            temp7 = func_0894AA30(temp7, (s32)arg0, temp5, -1, arg1, temp4);
        }
        func_088BD934((char *)&temp8, (s32)temp7, arg2);
        func_088BD8D0((char *)temp0, (char *)&temp8);
        func_088BD814((Obj_088BD814 *)&temp8, -1);
    }
    arg0->unk_48C = 0;
    arg0->unk_490 = 0;
    arg0->unk_494 = 0;
    arg0->unk_498 = 0;
    arg0->unk_49C = 1.0f;
    arg0->unk_4A0 = 1.0f;
    arg0->unk_4A4 = (u32)*(f32 *)D_089E01B0;
    temp5 = (L_0894AA30 *)D_08A490BC;
    arg0->unk_4A8 = arg0;
    {
        Unk088BD534_03 *temp9 = (Unk088BD534_03 *)temp5;
        f32 temp10 = ((volatile Unk088BD534_03 *)D_08A490BC)->unk_00;
        f32 temp11 = temp9->unk_04;
        f32 temp12 = temp9->unk_08;
        arg0->unk_4AC.unk_00 = temp10;
        arg0->unk_4AC.unk_04 = temp11;
        arg0->unk_4AC.unk_08 = temp12;
    }
    arg0->unk_4B8 = 0;
    arg0->unk_4BC = 0;
    arg0->unk_4C0 = 0;
    return arg0;
}
