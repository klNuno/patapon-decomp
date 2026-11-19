#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
} S;

extern u8 D_08A47AE0[];

S *func_0895FEA4(S *arg0, s32 arg1) {
    arg0->unk_1C = D_08A47AE0;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = arg1;
    arg0->unk_0C = 0;
    return arg0;
}
