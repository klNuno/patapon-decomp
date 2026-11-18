#include "common.h"

s32 func_0887ED78(s32, s32);
f32 func_08856234(f32);
extern f32 D_089DDCC0[];

typedef struct {
    u8 pad_00[0x1514];
    s32 unk_1514;
} T;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    u8 pad_44[0x1C];
    T *unk_60;
    u8 pad_64[0x44];
    f32 unk_A8;
    f32 unk_AC;
    u8 pad_B0[4];
    f32 unk_B4;
    u8 pad_B8[4];
    f32 unk_BC;
    u8 unk_C0;
} S;

void func_0887FB54(S *arg0) {
    f32 temp0;
    f32 temp1;
    s32 temp2;
    f32 temp3;

    temp0 = func_08856234(arg0->unk_40);
    temp1 = (arg0->unk_38 * temp0) / 136.0f;
    arg0->unk_34 = temp1 * (arg0->unk_BC + (-40.0f + D_089DDCC0[0]));
    arg0->unk_A8 = 0.0f;
    if (arg0->unk_C0 != 0) {
        temp2 = arg0->unk_60->unk_1514;
        if (func_0887ED78(temp2, 0x20) != 0) {
            arg0->unk_A8 = 0.25f * (480.0f * temp1);
        } else if (func_0887ED78(temp2, 0x80) != 0) {
            arg0->unk_A8 = 0.25f * (480.0f * -temp1);
        }
    }
    temp3 = arg0->unk_AC;
    arg0->unk_B4 = temp3;
    arg0->unk_30 = temp3 + arg0->unk_A8;
}
