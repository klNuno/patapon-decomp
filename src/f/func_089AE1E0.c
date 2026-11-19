#include "common.h"

typedef struct {
    u8 pad_00[0xDC4];
    u8 unk_DC4;
    u8 pad_DC5[3];
    f32 unk_DC8;
    f32 unk_DCC;
    u8 unk_DD0;
} Unk;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_089AE1E0(Unk *arg0)
{
    func_08878864(func_089B53D8(func_088586E8()), 9, 2, 1.0f, 0.0f, 0.0f);
    arg0->unk_DD0 = 0;
    arg0->unk_DC8 = 0.0f;
    arg0->unk_DCC = 0.1f;
    arg0->unk_DC4 = 1;
}
