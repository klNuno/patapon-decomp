#include "common.h"

extern "C" {

class V {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct { f32 unk_00, unk_04, unk_08; } T1;

typedef struct {
    u8 pad_00[0x128];
    char unk_128[0x10];
    f32 unk_138;
    f32 unk_13C;
    s32 unk_140;
    char unk_144[0x10];
    T1 unk_154, unk_160;
    void *unk_16C;
} T;

typedef struct {
    u8 pad_00[0x10C];
    char unk_10C[0x10];
    f32 unk_11C;
    f32 unk_120;
    s32 unk_124;
} Unk;

typedef struct {
    u8 pad_00[0x400];
    T unk_400;
    u8 pad_570[0x20];
    s32 unk_590;
} U;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} W;

typedef struct {
    u8 pad_00[0x1100];
    u8 unk_1100[8];
    u8 pad_1108[0x18F8];
    u8 unk_2A00[0x10];
    u8 unk_2A10[0x200];
    u8 unk_2C10[0x200];
    u8 pad_2E10[0xF9C];
    s32 unk_3DAC;
    u8 pad_3DB0[0x98];
    W *unk_3E48;
} S;

extern f32 D_08A05D40[];
extern f32 D_08A05D48[];
extern f32 D_08A05D50[];
extern f32 D_08A05D54[];

void func_08865FE4(void *, s32);
void func_08866028(void *);
void func_08974410(T *, void *, f32);
void func_08974440(char *arg0, f32 farg0);
void func_08974584(Unk *arg0, f32 arg1, f32 arg2);
void func_08974648(T *arg0, f32 arg1, f32 arg2);
void func_0897470C(T *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
u64 func_089AC210(u32, u32, u64);
u64 func_089ACC80(s32);
f32 func_089ACE68(u32, u32);

void func_08983064(S *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    volatile f32 temp[5];
    s32 temp2;
    s32 *temp1;
    u8 *temp3;
    u8 *temp4;
    W **temp5;
    s32 temp6;
    u64 temp7;
    u64 temp8;
    union {
        f32 unk_00;
        u32 unk_04;
    } temp10;

    arg0->unk_3DAC = arg3;
    temp1 = arg1;
    temp2 = 0;
    temp3 = (u8 *)arg0;
    temp4 = (u8 *)arg0;
    temp5 = &arg0->unk_3E48;
    do {
        U *temp9 = (U *)temp3;
        arg0->unk_1100[temp2] = 0;
        temp6 = *temp1;
        if (temp6 == 0) {
            func_08866028(&temp9->unk_400);
            temp9->unk_590 = 0;
        } else {
            temp[0] = D_08A05D40[1];
            temp[1] = D_08A05D48[0];
            temp[2] = D_08A05D48[1];
            temp[3] = D_08A05D50[0];
            temp[4] = D_08A05D54[0];
            func_08865FE4(&temp9->unk_400, (*temp5)[((volatile s32 *)temp)[temp6]].unk_08);
            ((V *)&temp9->unk_400)->unk_14(1, 1);
            func_08974410(&temp9->unk_400, ((S *)temp4)->unk_2A10, 0.0f);
            func_08974410(&temp9->unk_400, ((S *)temp4)->unk_2C10, 0.35f);
            func_08974584((Unk *)&temp9->unk_400, 0.0f, 0.0f);
            func_08974648(&temp9->unk_400, 0.0f, 0.0f);
            func_0897470C(&temp9->unk_400, 0.0f, 0.0f, 0.0f, 0.0f);
            func_0897470C(&temp9->unk_400, 1.0f, -1.0f, 1.0f, 0.5f);
            temp10.unk_00 = 1.625f;
            temp7 = func_089ACC80(temp2);
            temp8 = func_089AC210(0, temp10.unk_04, temp7);
            func_08974440((char *)&temp9->unk_400, func_089ACE68((u32)temp8, (u32)(temp8 >> 32)));
            temp9->unk_590 = 1;
        }
        temp2++;
        temp1++;
        temp3 += 0x1A0;
        temp4 += 0x40;
    } while (temp2 < 8);
}

}
