#include "common.h"
extern "C" {

typedef struct {
    u8 pad_00[0xB0];
    u32 unk_B0;
    u32 unk_B4;
    u8 pad_B8[0x14];
    s32 unk_CC;
} T;

void func_0898E690(T *);

void func_0898E628(T *arg0, u32 arg1) {
    u32 temp;
    s32 select = arg0->unk_CC;
    switch (select) {
    case 0:
        func_0898E690(arg0);
        break;
    case 1:
        break;
    case 2:
        temp = arg0->unk_B0;
        if (temp < arg0->unk_B4) {
            arg0->unk_B0 = temp + arg1;
        }
        break;
    }
}
}
