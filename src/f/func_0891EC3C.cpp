#include "common.h"

extern "C" {

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32 *);
};

struct U {
    u8 pad_00[0x944];
    s32 unk_944;
    u8 pad_948[0x4E30 - 0x948];
    T *unk_4E30;
    u8 pad_4E34[0x24];
    f32 unk_4E58;
    f32 unk_4E5C;
};

extern s32 func_088D5794(s32, s32, s32);

void func_0891EC3C(U *arg0) {
    f32 temp[2];
    f32 temp2[2];
    f32 temp3[2];
    f32 temp4[2];
    f32 temp6;
    f32 temp5;

    switch (arg0->unk_944) {
    case 1:
        func_088D5794((s32)temp, (s32)arg0, 1);
        temp5 = temp[0];
        temp6 = temp[1];
        break;
    case 0:
    case 3:
        func_088D5794((s32)temp2, (s32)arg0, 3);
        temp5 = temp2[0];
        temp6 = temp2[1];
        break;
    case 2:
    default:
        func_088D5794((s32)temp3, (s32)arg0, 5);
        temp5 = temp3[0];
        temp6 = temp3[1];
        break;
    }
    f32 temp7 = temp5 + arg0->unk_4E58;
    f32 temp8 = temp6 + arg0->unk_4E5C;
    temp4[0] = temp7;
    temp4[1] = temp8;
    arg0->unk_4E30->unk_14(temp4);
}

}
