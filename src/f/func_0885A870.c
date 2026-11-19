#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Vec;

typedef struct {
    Vec unk_00;
    u8 pad_08[8];
} Temp;

extern void func_0885A6B8(Vec *);

void func_0885A870(Vec *arg0)
{
    Temp temp;
    f32 x;
    func_0885A6B8(&temp.unk_00);
    temp.unk_00.unk_04 = 136.0f + 136.0f * -temp.unk_00.unk_04;
    x = 240.0f + 240.0f * temp.unk_00.unk_00;
    temp.unk_00.unk_00 = x;
    arg0->unk_00 = x;
    arg0->unk_04 = temp.unk_00.unk_04;
}
