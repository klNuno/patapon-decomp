#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    volatile s32 unk_0C;
    volatile s32 unk_10;
    volatile s32 unk_14;
} T;

extern s32 D_089DDB08[];
extern s32 D_089DDB0C[];
extern s32 D_089DDB10[];

s32 func_0894CE7C(T *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_04 = arg3;
    arg0->unk_0C = D_089DDB08[0];
    arg0->unk_10 = D_089DDB0C[0];
    arg0->unk_14 = D_089DDB10[0];
    arg0->unk_08 = arg4;
    arg0->unk_00 = arg2;
    return 0;
}
