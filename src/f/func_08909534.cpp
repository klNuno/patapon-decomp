#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    s32 unk_00;
    V unk_04;
    u8 pad_10[4];
} E;

typedef struct {
    u8 pad_00[8];
    E *unk_08;
    s32 unk_0C;
} T;

typedef union {
    struct { s32 unk_00; u8 unk_04; } unk_00;
    struct { f32 unk_00; f32 unk_04; } unk_08;
} P;

class A {
};

struct B {
    volatile u8 unk_00;
    u8 pad_01[3];

};

void func_08909534(V *arg0, T *arg1, s32 arg2) {
    B temp;
    const A *temp11;
    struct { A unk_00; u8 pad_01[7]; } temp1;
    volatile P temp2;
    volatile P temp3;
    E *temp4 = arg1->unk_08;
    E *temp5;
    s32 temp6;
    s32 temp7;
    f32 temp9;
    f32 temp10;
    f32 temp12;
    f32 temp13;
    f32 temp14;
    temp2.unk_00.unk_00 = arg2;
    temp11 = &temp1.unk_00;
    temp.unk_00 = *(const u8 *&)temp11;
    temp7 = arg1->unk_0C;
    temp5 = temp4 + temp7;
    temp2.unk_00.unk_04 = temp.unk_00;
    temp9 = temp2.unk_08.unk_00;
    temp10 = temp2.unk_08.unk_04;
    temp3.unk_08.unk_00 = temp9;
    temp3.unk_08.unk_04 = temp10;
    temp6 = temp3.unk_00.unk_00;
    while (temp4 != temp5 && temp6 != temp4->unk_00) {
        ++temp4;
    }
    temp12 = *(volatile f32 *)&temp4->unk_04.unk_00;
    temp13 = *(volatile f32 *)&temp4->unk_04.unk_04;
    temp14 = *(volatile f32 *)&temp4->unk_04.unk_08;
    arg0->unk_00 = temp12;
    arg0->unk_04 = temp13;
    arg0->unk_08 = temp14;
}

}
