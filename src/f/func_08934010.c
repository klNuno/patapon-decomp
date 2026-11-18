#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x40];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[4];
    s32 unk_64;
} T;

s32 func_088586E8(void);
s32 func_088E5574(s32);
void func_0890988C(T *);
s32 func_08909918(T *, f32);
void func_0890AA8C(s32, s32, s32, s32);
u32 func_089B5464(s32);

extern f32 D_08A02E94[];
extern f32 D_08A02E98[];

void func_08934010(T *arg0) {
    f32 temp;

    func_0890988C(arg0);
    if (func_08909918(arg0, arg0->unk_54)) {
        func_0890AA8C(func_088E5574(arg0->unk_10), 1, 1, 1);
        temp = 0.01f * (f32)(func_089B5464(func_088586E8()) % 100U);
        arg0->unk_5C = D_08A02E98[0] + D_08A02E94[0] * temp;
        arg0->unk_64 = 1;
    }
}
