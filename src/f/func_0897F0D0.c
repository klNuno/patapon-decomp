#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} S;

extern u8 D_08A48268[];
extern S *func_08980138(S *, s32, s32);

S *func_0897F0D0(s32 arg0, s32 arg1, S *arg2, s32 arg3, s32 arg4, s32 arg5, s32 *arg6, s32 *arg7) {
    if (arg2 != NULL) {
        func_08980138(arg2, arg0, arg1);
        arg2->unk_08 = D_08A48268;
        arg2->unk_0C = *arg6;
        arg2->unk_10 = *arg7;
        arg2->unk_14 = arg4;
    }
    return arg2;
}
