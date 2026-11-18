#include "common.h"

extern "C" {

struct S;
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void *unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    f32 unk_34;
    S *unk_38;
    s32 unk_3C;
    u8 pad_40[0x10];
} T;

struct U {
    u8 pad_00[0x1C];
    virtual void unk_08(T *);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    U unk_0C;
    u8 pad_2C[0x14];
} V;

struct S {
    u8 pad_00[0x804];
    V *unk_804;
    s32 unk_808;
    u8 pad_80C[4];
    u8 unk_810[0x80];
    f32 unk_890;
    f32 unk_894;
};

extern f32 D_089FDC20[];
extern f32 D_089FDC28[];

void func_088F218C(S *arg0) {
    T temp;
    V *temp2;
    V *temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;
    f32 temp7;

    temp2 = arg0->unk_804;
    temp3 = arg0->unk_804 + arg0->unk_808;
    temp.unk_18 = arg0->unk_890;
    temp.unk_1C = *(volatile f32 *)&arg0->unk_894;
    temp.unk_00 = 7;
    temp.unk_0C = arg0->unk_810;
    temp4 = *(volatile f32 *)&D_089FDC20[0];
    temp5 = *(volatile f32 *)&D_089FDC20[1];
    temp.unk_20 = temp4;
    temp6 = *(volatile f32 *)&D_089FDC28[0];
    temp.unk_38 = arg0;
    temp.unk_04 = 0;
    temp7 = *(volatile f32 *)&D_089FDC28[1];
    temp.unk_28 = temp6;
    temp.unk_10 = 0;
    temp.unk_30 = 0;
    temp.unk_34 = 0.0f;
    temp.unk_3C = 0;
    temp.unk_24 = temp5;
    temp.unk_2C = temp7;
    if (temp2 != temp3) {
        do {
            temp.unk_04 = temp2->unk_00;
            temp.unk_08 = temp2->unk_04;
            temp.unk_10 = temp2->unk_08;
            temp2->unk_0C.unk_08(&temp);
            temp2++;
            temp.unk_3C++;
            temp.unk_1C += temp.unk_34;
        } while (temp2 != temp3);
    }
}

}
