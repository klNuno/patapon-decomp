#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    f32 unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
} A;
typedef struct {
    u8 pad_00[0x20];
    A unk_20;
    u8 pad_3C[4];
    f32 unk_40[4];
} B;
typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    s32 unk_0C;
    u8 unk_10[4];
    u8 pad_14[0x28];
    B *unk_3C;
} C;

extern s32 func_088586E8(void);
extern u32 func_089B5464(s32);
s32 func_0882160C(void);

s32 func_088F5C18(C *arg0, B *arg1) {
    f32 temp2, temp, temp5, temp6;
    f32 *temp3;
    s32 i;
    A *temp4;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    arg0->unk_3C = arg1;
    temp3 = arg1->unk_40;
    temp4 = &arg1->unk_20;
    temp = ((volatile A *)temp4)->unk_08;
    temp2 = ((volatile A *)temp4)->unk_00;
    temp5 = (f32)func_089B5464(func_088586E8());
    temp5 /= 4294967296.0f;
    i = 0;
    temp6 = temp - temp2;
    temp6 *= temp5;
    arg0->unk_08 = temp2 + temp6;
    arg0->unk_0C = ((volatile A *)temp4)->unk_18;
    do {
        s32 temp8;
        f32 temp7 = (f32)(s32)(u16)func_0882160C();
        temp7 /= 65536.0f;
        temp8 = 1;
        if (!(*temp3 - temp7 > 0.0f)) {
            temp8 = 0;
        }
        arg0->unk_10[i] = temp8;
        ++i;
        ++temp3;
    } while (i < 4);
    return 1;
}
