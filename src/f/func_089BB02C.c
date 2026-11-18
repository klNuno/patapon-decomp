#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} UnkPair;

typedef struct {
    UnkPair unk_00;
    UnkPair unk_08;
    u8 pad_10[8];
} UnkBlock;

extern UnkPair D_089F2550[];
extern UnkPair D_089F2558[];
extern f32 D_089F2560[];
extern f32 D_089F2564[];
void func_089BB3A8(void *, UnkPair *, volatile UnkBlock *, s32);

void func_089BB02C(void *arg0, const UnkPair *arg1, s32 arg2, f32 arg3)
{
    UnkPair temp;
    volatile UnkBlock temp2;
    f32 temp3;
    f32 temp4;
    temp2.unk_00 = D_089F2550[0];
    temp2.unk_08.unk_00 = D_089F2558[0].unk_00;
    temp3 = D_089F2558[0].unk_04;
    temp2.unk_08.unk_04 = temp3;
    temp2.unk_08.unk_04 = temp3 * arg3;
    temp4 = arg1->unk_04 + D_089F2564[0];
    temp.unk_00 = arg1->unk_00 + D_089F2560[0];
    temp.unk_04 = temp4;
    func_089BB3A8(arg0, &temp, &temp2, arg2);
}
