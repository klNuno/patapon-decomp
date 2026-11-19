#include "common.h"

typedef struct Unk Unk;
typedef struct {
    u8 pad_00[0xCF0];
    u8 unk_CF0[1];
} Unk1;

struct Unk {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0xC];
    s32 unk_2C;
    u8 pad_30[4];
    f32 unk_34;
};

void func_0889DA40(u8 *, s32, s32, s32);
Unk1 *func_08973F20(Unk *, s32);

void func_089737CC(Unk *arg0, s32 arg1, s32 arg2)
{
    Unk1 *temp = func_08973F20(arg0, arg0->unk_1C);
    if (temp != NULL) {
        func_0889DA40(temp->unk_CF0, arg1, arg2, 0);
    }
    arg0->unk_2C = arg1;
    arg0->unk_34 = -1.0f;
}
