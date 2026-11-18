#include "common.h"

extern "C" {

class T;
typedef void (T::*P)();

typedef struct {
    u8 pad_00[4];
    u8 unk_04[0x10];
    T *unk_14;
    P unk_18;
    u8 unk_24;
    u8 pad_25[3];
    f32 unk_28;
    f32 unk_2C;
    s32 unk_30;
    u8 pad_34[4];
    f32 unk_38;
    u8 unk_3C;
} S;

s32 func_0893F590(void *);
void func_0893F4EC(void *);

void func_089D5420(S *arg0, u32 arg1) {
    f32 temp;
    s32 temp2 = arg0->unk_30;

    if (temp2 != 0) {
        switch (temp2) {
        case 0:
            break;
        case 1:
        case 2:
        case 3:
            if (arg0->unk_3C != 0 && temp2 == 2) {
                f32 temp3 = arg0->unk_38;
                arg0->unk_28 = 0.0f;
                arg0->unk_2C = temp3;
                arg0->unk_24 = 1;
                arg0->unk_30 = 3;
            }
            if (func_0893F590(arg0->unk_04) == 3 && arg0->unk_30 == 2) {
                f32 temp3 = arg0->unk_38;
                arg0->unk_28 = 0.0f;
                arg0->unk_2C = temp3;
                arg0->unk_24 = 1;
                arg0->unk_30 = 3;
            }
            break;
        case 4:
            arg0->unk_30 = 5;
            func_0893F4EC(arg0->unk_04);
            break;
        case 5:
            break;
        }
        if (arg0->unk_24 == 1) {
            temp = arg0->unk_28 + (f32)arg1 / 4800.0f;
            arg0->unk_28 = *(temp < arg0->unk_2C ? &temp : &arg0->unk_2C);
            if (arg0->unk_28 >= arg0->unk_2C && arg0->unk_18) {
                (arg0->unk_14->*arg0->unk_18)();
            }
        }
    }
}

}
