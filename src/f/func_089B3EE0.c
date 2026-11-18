#include "common.h"

s32 func_088586E8(void);
u32 func_089B5464(s32);
extern f32 D_089F1DB0[];
extern const f32 D_089F1DB4[];

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x14];
    s32 unk_6C;
    f32 unk_70;
} Unk;

void func_089B3EE0(Unk *arg0) {
    s32 temp = arg0->unk_54 * 2;
    f32 temp2 = D_089F1DB0[temp];
    f32 temp3 = (f32)func_089B5464(func_088586E8()) / 4294967296.0f;
    const f32 *temp4 = &D_089F1DB4[temp];
    arg0->unk_6C = 0;
    {
        f32 temp5 = *temp4 - temp2;
        arg0->unk_70 = temp2 + temp5 * temp3;
    }
}
