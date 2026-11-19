#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    s32 unk_08;
    u8 *unk_0C;
} S;

extern u8 D_08A46A1C[];
S *func_08913D00(S *arg0, s32 arg1, s32 arg2);

S *func_08915634(S *arg0, s32 arg1, s32 arg2)
{
    func_08913D00(arg0, arg1, arg2);
    arg0->unk_0C = D_08A46A1C;
    return arg0;
}
