#include "common.h"

extern "C" {

typedef struct { f32 unk_00; f32 unk_04; } U;
typedef struct { U unk_00; u8 pad_08[4]; } V;
struct T {
    U unk_00;
    u8 pad_08[8];
    U unk_10;
    f32 unk_18;
    u8 unk_1C;
    u8 pad_1D[3];
    u8 unk_20[0x10];
    u8 unk_30;
    u8 pad_31[7];
    U unk_38;
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x50];
    u8 unk_98;
    u8 pad_99[0x27];

    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10_v();
    virtual void unk_14(s32);
};

extern void func_0881F120(void *, void *, s32);
extern f32 func_088542D4(U *);
extern f32 D_089FB540[];

void func_088B5488(T *arg0) {
    f32 temp;
    V temp2;
    f32 temp3;
    const f32 *temp4;
    s32 temp5;
    f32 temp6;
    f32 temp7;
    f32 temp8;
    f32 temp9;
    f32 temp10;
    f32 temp11;

    arg0->unk_30 = 1;
    func_0881F120(&arg0->unk_10, arg0->unk_20, 0x10);
    arg0->unk_38.unk_00 = arg0->unk_00.unk_00;
    arg0->unk_38.unk_04 = arg0->unk_00.unk_04;
    arg0->unk_40 = 0.0f;
    temp6 = arg0->unk_10.unk_04;
    temp7 = arg0->unk_00.unk_04;
    temp8 = arg0->unk_10.unk_00;
    temp9 = arg0->unk_00.unk_00;
    temp10 = temp6 - temp7;
    temp11 = temp8 - temp9;
    temp2.unk_00.unk_00 = temp11;
    temp2.unk_00.unk_04 = temp10;
    temp3 = func_088542D4(&temp2.unk_00);
    if (temp3 <= 0.01f) {
        arg0->unk_44 = 1.0f;
    } else {
        temp = arg0->unk_18 / temp3;
        if (temp < D_089FB540[1]) {
            temp4 = &temp;
        } else {
            temp4 = &D_089FB540[1];
        }
        arg0->unk_44 = *temp4;
    }
    temp5 = 1;
    if (arg0->unk_1C == 1) {
        if (!(arg0->unk_10.unk_00 < arg0->unk_00.unk_00)) {
            temp5 = 0;
        }
        arg0->unk_14(temp5);
    }
    arg0->unk_98 = 0;
}

}
