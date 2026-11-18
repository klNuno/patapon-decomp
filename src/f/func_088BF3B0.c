#include "common.h"

typedef struct {
    u8 pad_00[0x40E8];
    u8 unk_40E8;
    u8 pad_40E9[3];
    s32 unk_40EC;
    f32 unk_40F0;
} T;

s32 func_088586E8(void);
f32 func_088BF494(T *);
f32 func_088BF574(T *);
extern s32 func_088CEE24(s32, s32);
u32 func_089B5464(s32);

void func_088BF3B0(T *arg0, s32 arg1) {
    f32 temp1;
    f32 temp;
    f32 temp2;
    f32 temp3;

    func_088CEE24((s32)arg0, arg1);
    if (arg1 == 1) {
        temp = func_088BF574(arg0);
        temp1 = func_088BF494(arg0);
        temp2 = (f32)func_089B5464(func_088586E8()) / 4294967296.0f;
        arg0->unk_40EC = 0;
        temp3 = temp - temp1;
        temp3 *= temp2;
        arg0->unk_40F0 = temp1 + temp3;
        arg0->unk_40E8 = 1;
    }
}
