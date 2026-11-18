#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[4];
    f32 unk_40;
    u8 pad_44[0x2C];
    f32 unk_70;
    u8 pad_74[0xC];
    f32 unk_80;
    f32 unk_84;
} T1;

typedef struct {
    u8 pad_00[0xF4];
    s32 unk_F4;
} T2;

extern T2 *D_08AD2178[];
extern f32 D_089DDCC0[];
extern s32 func_0887ED78(s32, s32);
f32 func_08856234(f32);

static inline T2 *temp0(void) {
    T2 *p = D_08AD2178[0];
    if (p != NULL) {
        return p;
    } else {
        return NULL;
    }
}

void func_08920A60(T1 *arg0) {
    s32 i = temp0()->unk_F4;
    f32 x;
    f32 y;
    x = func_08856234(arg0->unk_40);
    y = arg0->unk_38 * x;
    y /= 136.0f;
    x = -40.0f + D_089DDCC0[0];
    arg0->unk_34 = y * x;
    arg0->unk_30 = arg0->unk_70 + arg0->unk_80;
    if (func_0887ED78(i, 0x20) != 0) {
        arg0->unk_80 += 10.0f;
    }
    if (func_0887ED78(i, 0x80) != 0) {
        arg0->unk_80 -= 10.0f;
    }
    if (arg0->unk_80 < 0.0f) {
        arg0->unk_80 = 0.0f;
    }
    y = arg0->unk_84;
    if (arg0->unk_80 > y) {
        arg0->unk_80 = y;
    }
}
