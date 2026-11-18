#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
} T;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
extern s32 func_08985828(s32, s32);
void func_089CDE88(s32);

s32 func_089C8BA0(s32 arg0) {
    s32 temp = 0;
    if (((T *)func_08985828(arg0, 2))->unk_4C == 0x12 &&
        (s32)(f32)(s32)((T *)func_08985828(arg0, 2))->unk_54 == 9) {
        func_08878864(func_089B53D8(func_088586E8()), 0x45010B, 2, 1.0f, 0.0f, 0.0f);
        temp = 1;
    }
    if (((T *)func_08985828(arg0, 1))->unk_4C == 0x11 &&
        (s32)(f32)(s32)((T *)func_08985828(arg0, 1))->unk_54 == 10) {
        func_08878864(func_089B53D8(func_088586E8()), 0x45010A, 2, 1.0f, 0.0f, 0.0f);
        temp = 1;
    }
    if (((T *)func_08985828(arg0, 1))->unk_4C == 0x13 &&
        (s32)(f32)(s32)((T *)func_08985828(arg0, 1))->unk_54 == 12) {
        func_089CDE88(arg0 + 0x168);
        func_08878864(func_089B53D8(func_088586E8()), 0x45010C, 2, 1.0f, 0.0f, 0.0f);
        temp = 1;
    }
    return temp;
}
