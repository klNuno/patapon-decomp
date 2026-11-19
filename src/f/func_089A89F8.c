#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    u8 *unk_18;
} Unk;

extern u8 D_08A486F8[];
void func_089A8A74(s32);

Unk *func_089A89F8(Unk *arg0)
{
    arg0->unk_18 = D_08A486F8;
    func_089A8A74((s32)arg0);
    return arg0;
}
