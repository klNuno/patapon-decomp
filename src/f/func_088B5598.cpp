#include "common.h"

extern "C" {
extern f32 D_089FB548[];

class T {};
typedef void (T::*P)();
struct S {
    u8 pad_00[0xA4];
    T *unk_A4;
    P unk_A8;
    u8 unk_B4;
    f32 unk_B8;
    f32 unk_BC;

    void func_0(f32 arg0) {
        if (unk_B4 == 1) {
            f32 temp = unk_B8 + arg0;
            unk_B8 = *(!(temp < unk_BC) ? &unk_BC : &temp);
            if (unk_B8 >= unk_BC && unk_A8) {
                (unk_A4->*unk_A8)();
            }
        }
    }
};

void func_088B5598(S *arg0, f32 arg1) {
    f32 *temp = D_089FB548[0] < arg1 ? &arg1 : D_089FB548;
    f32 temp1 = *temp;
    arg0->unk_B8 = 0.0f;
    arg0->unk_BC = temp1;
    arg0->unk_B4 = 1;
    if (arg1 < 0.0f) {
        arg0->func_0(0.0f);
    }
}
}
