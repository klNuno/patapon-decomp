#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[0x1C];
    u32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    u32 unk_28;
} T0895CA34;

void func_0895BB40(T0895CA34 *);
void func_0895BB48(T0895CA34 *);

void func_0895C984(T0895CA34 *arg0)
{
    func_0895BB40(arg0);
    arg0->unk_24++;
    func_0895BB48(arg0);
    arg0->unk_28 = (arg0->unk_28 + 1) % arg0->unk_1C;
}
