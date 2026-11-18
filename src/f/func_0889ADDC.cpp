#include "common.h"

extern "C" {

typedef struct { u8 pad_00[0x8C]; f32 unk_8C; } A;
typedef struct { u8 pad_00[0x18]; s32 unk_18; } B;
typedef struct {
    u8 pad_00[8];
    s32 unk_08, unk_0C;
    u8 pad_10[2];
    u16 unk_12, unk_14, unk_16;
    u8 unk_18, unk_19, unk_1A, unk_1B;
} C;
typedef struct {
    A *unk_00;
    s32 unk_04, unk_08, unk_0C;
    u32 unk_10;
    f32 unk_14;
    s32 unk_18, unk_1C;
    f32 unk_20, unk_24;
    u8 unk_28;
} D;

void func_0889B100(char *, f32);
s32 func_0883B528(s32, u16, s32, s32);
void func_0883C1F8(s32, s32, s32);
void func_0883C2B0(s32, f32);
void func_0883C9F0(s32, s32);
u64 func_089AB994(f32);
u64 func_089AC210(u32, u32, u64);
f32 func_089ACE68(u32, u32);

struct E {};

static inline void func_0889ADDC_inline(D *arg0, A *arg1, s32 arg2, B *arg3, C *arg4, const E &) {
    u32 temp;
    C *temp2;
    B *temp3;
    D *temp4;
    s32 temp5;
    A *temp6;
    s32 temp7;
    s32 temp12;
    f32 temp8, temp9, temp10;
    union { u32 unk_00; f32 unk_04; } temp11;
    u64 temp13;
    temp6 = arg1;
    temp2 = arg4;
    temp3 = arg3;
    temp4 = arg0;
    temp5 = arg2;
    func_0889B100((char *)temp4, 0.0f);
    temp4->unk_28 = 0;
    temp4->unk_00 = temp6;
    temp4->unk_04 = 0;
    temp7 = (temp4->unk_08 = func_0883B528(temp5, temp2->unk_12, temp2->unk_0C, 1));
    if (temp7 < 0) {
        temp4->unk_0C = 0;
    } else {
        temp12 = (s32)temp2->unk_14 + (s32)temp2->unk_1A;
        temp8 = (f32)(temp12 / 2);
        temp9 = temp8 * temp6->unk_8C;
        temp = (u16)(u32)(temp4->unk_24 * temp9);
        temp10 = ((f32)(u32)temp2->unk_1B - 64.0f) / 64.0f;
        func_0883C1F8(temp7, (u16)temp, (u16)temp);
        temp11.unk_04 = 1.625f;
        temp13 = func_089AB994(temp10);
        temp13 = func_089AC210(0, temp11.unk_00, temp13);
        temp9 = func_089ACE68((u32)temp13, (u32)(temp13 >> 32));
        func_0883C2B0(temp4->unk_08, temp9);
        temp7 = temp4->unk_1C;
        func_0883C9F0(temp4->unk_08, temp7);
        temp4->unk_0C = temp2->unk_08 * temp3->unk_18;
        temp4->unk_10 = temp2->unk_16;
        temp4->unk_18 = 0;
        temp4->unk_04 = temp2->unk_18;
        temp8 = (f32)temp4->unk_10;
        temp9 = 0.1f * temp8;
        temp4->unk_14 = temp9 / 127.0f;
        temp8 = (f32)temp;
        temp4->unk_20 = temp8 / 127.0f;
    }
}




void func_0889ADDC(D *arg0, A *arg1, s32 arg2, B *arg3, C *arg4) {
    func_0889ADDC_inline(arg0, arg1, arg2, arg3, arg4, E());
}
}

