#include "common.h"

extern "C" {
struct A;
typedef u8 (A::*P)(u32, bool);
struct B {
    f32 unk_00;
    P unk_04;
};
struct C {
    B *unk_00;
    s32 unk_04;
};
struct T {
    u8 pad_00[0x48];
    u8 unk_48;
    u8 pad_49[0xB];
    A *unk_54;
    u8 pad_58[0x220];
    s32 unk_278[4];
    f32 unk_288;
};

void func_08939740(s32 *arg0, s32 *arg1);
void func_08939738(s32 *arg0, s32 arg1);
s32 func_08939AC0(s32 *, s32 *);
C *func_08939B8C(s32 *);
void func_08939AFC(s32 *, void *, s32);
void func_08939AEC(s32 *, s32 *);
void func_08939AD8(s32 *);

void func_08939978(T *arg0, u32 arg1) {
    s32 temp, temp2, temp3;
    C *temp4;
    B *temp5;
    u8 temp6;
    f32 temp7;

    if (arg0->unk_48 != 0) {
        func_08939740(&temp, arg0->unk_278);
        func_08939738((s32 *)(u32)&temp2, (s32)arg0->unk_278);
        while (func_08939AC0(&temp, &temp2) != 0) {
            temp4 = func_08939B8C(&temp);
            temp5 = temp4->unk_00;
            temp6 = 0;
            if (temp5->unk_00 < arg0->unk_288) {
                temp6 = (arg0->unk_54->*temp5->unk_04)(arg1, temp4->unk_04 == 0);
                temp4->unk_04 = 1;
            }
            if (temp6 == 1) {
                func_08939AFC(&temp3, arg0->unk_278, temp);
                func_08939AEC(&temp, &temp3);
            } else {
                func_08939AD8(&temp);
            }
        }
        temp7 = (f32)arg1;
        temp7 /= 4800.0f;
        arg0->unk_288 += temp7;
    }
}
}
