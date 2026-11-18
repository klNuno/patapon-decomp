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
    A *unk_00;
    u8 pad_04[0x220];
    u8 unk_224[0x10];
    f32 unk_234;
};

void func_0891C7A0(s32 *, void *);
void func_0891C798(s32 *, void *);
s32 func_0891CDE4(s32 *, s32 *);
C *func_0891CEB0(s32 *);
void func_0891CE20(s32 *, void *, s32);
void func_0891CE10(s32 *, s32 *);
void func_0891CDFC(s32 *);

void func_0891CCA4(T *arg0, u32 arg1) {
    s32 temp, temp2, temp3;
    C *temp4;
    B *temp5;
    u8 temp6;
    f32 temp7;

    func_0891C7A0(&temp, arg0->unk_224);
    func_0891C798(&temp2, arg0->unk_224);
    while (func_0891CDE4(&temp, &temp2) != 0) {
        temp4 = func_0891CEB0(&temp);
        temp5 = temp4->unk_00;
        temp6 = 0;
        if (temp5->unk_00 < arg0->unk_234) {
            temp6 = (arg0->unk_00->*temp5->unk_04)(arg1, temp4->unk_04 == 0);
            temp4->unk_04 = 1;
        }
        if (temp6 == 1) {
            func_0891CE20(&temp3, arg0->unk_224, temp);
            func_0891CE10(&temp, &temp3);
        } else {
            func_0891CDFC(&temp);
        }
    }
    temp7 = (f32)arg1;
    temp7 /= 4800.0f;
    arg0->unk_234 += temp7;
}
}
