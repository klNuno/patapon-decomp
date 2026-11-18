#include "common.h"

extern "C" {
typedef struct { f32 unk_00, unk_04; } V;
typedef struct { f32 unk_00[4]; } W;
typedef struct { u8 pad_00[0x30]; W unk_30; } T1;
class T2 {
public:
    u8 pad_00[0x16C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual T1 *unk_10();
};
typedef struct {
    T2 *unk_00;
    u8 pad_04[4];
    V unk_08;
    f32 unk_10;
    s32 unk_14, unk_18;
    f32 unk_1C;
    u8 pad_20[8];
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30, unk_34, unk_38;
    s32 unk_3C;
} T3;

extern f32 D_089F4CF0[], D_089F4CF4[];
void func_0885A870(V *, W *);
f32 func_0885A8D8(W *);
f32 func_088542D4(V *);
s32 func_088586E8(void);
u32 func_089B5464(s32);

void func_089D4A50(T3 *arg0) {
    V temp;
    f32 temp1, temp2, temp3, temp4, temp5, temp6;
    s32 temp7;
    func_0885A870(&arg0->unk_08, &arg0->unk_00->unk_10()->unk_30);
    arg0->unk_1C = func_0885A8D8(&arg0->unk_00->unk_10()->unk_30);
    temp1 = (f32)func_089B5464(func_088586E8());
    temp1 /= 4294967296.0f;
    arg0->unk_30 = 0.0f;
    temp2 = 50.0f * temp1;
    arg0->unk_34 = 100.0f + temp2;
    temp1 = (f32)func_089B5464(func_088586E8());
    temp1 /= 4294967296.0f;
    temp2 = 100.0f * temp1;
    temp1 = 0.0f;
    temp1 += temp2;
    temp7 = ((u32)temp1 > 50U) ? -1 : 1;
    temp3 = (f32)temp7;
    arg0->unk_30 *= temp3;
    arg0->unk_34 *= temp3;
    temp1 = (f32)func_089B5464(func_088586E8());
    temp1 /= 4294967296.0f;
    temp2 = 50.0f * temp1;
    arg0->unk_38 = -(100.0f + temp2);
    arg0->unk_3C = 0;
    temp4 = arg0->unk_08.unk_04;
    temp3 = D_089F4CF4[0];
    temp6 = arg0->unk_08.unk_00;
    temp5 = D_089F4CF0[0];
    temp3 = temp4 - temp3;
    temp5 = temp6 - temp5;
    temp.unk_00 = temp5;
    temp.unk_04 = temp3;
    arg0->unk_10 = func_088542D4(&temp);
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_28 = 3;
}
}



