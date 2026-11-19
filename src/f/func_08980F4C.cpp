#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x50];
} Unk1;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    u8 pad_08[0xA04];
    Unk1 *unk_A0C;
    s32 unk_A10;
    Unk1 *unk_A14;
    u8 pad_A18[0x37C];
    u8 unk_D94;
} Unk;

void func_08958374(s32, f32);
void func_08956A04(void *, s32, s32, f32);

void func_08980F4C(Unk *arg0)
{
    arg0->unk_00 = 1;
    arg0->unk_A14 = arg0->unk_A0C + arg0->unk_A10;
    func_08958374(arg0->unk_04, 1.0f);
    arg0->unk_D94 = 0;
    func_08956A04((void *)arg0->unk_04, 0, 4, 0.0f);
}

}
