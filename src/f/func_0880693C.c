#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[8];
    u8 unk_0C[1];
} S;

S *func_08806A1C(S *);
s32 func_088069E0(s32 arg0, s32 arg1, s32 arg2);
extern u8 D_08A443BC[];

S *func_0880693C(S *arg0, s32 arg1, s32 arg2)
{
    func_08806A1C(arg0);
    arg0->unk_00 = D_08A443BC;
    func_088069E0((s32)arg0->unk_0C, arg1, arg2);
    return arg0;
}
