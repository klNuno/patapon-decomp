#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} Unk;

extern u8 D_08A47364[];
extern s32 func_08975794(s32);

Unk *func_0893E8E0(Unk *arg0)
{
    func_08975794((s32)arg0);
    arg0->unk_10 = D_08A47364;
    return arg0;
}
