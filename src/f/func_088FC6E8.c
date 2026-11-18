#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} U;

typedef struct {
    u32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
} V;

typedef struct {
    u8 pad_00[0x4C];
    f32 unk_4C;
    f32 unk_50;
} W;

W *func_089B2A98(s32, s32);

s32 func_088FC6E8(U *arg0, V *arg1) {
    W *temp;
    f32 temp2;

    arg0->unk_00 = 2.0f * func_089B2A98(arg1->unk_08, 0x22)->unk_4C;
    temp = func_089B2A98(arg1->unk_08, 0x26);
    temp2 = (f32)arg1->unk_00;
    arg0->unk_00 += temp2 * temp->unk_4C;
    arg0->unk_04 = 2.0f * func_089B2A98(arg1->unk_08, 0x22)->unk_50;
    arg0->unk_04 += func_089B2A98(arg1->unk_08, 0x28)->unk_50;
    return 0;
}
