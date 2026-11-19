#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    u8 pad_08[4];
    u8 unk_0C[0x44];
    u8 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
} S;

extern s32 func_08958D7C(s32);
extern u8 D_08A45194[];
extern u8 D_08A47910[];

S *func_08958B44(S *arg0, s32 arg1) {
    arg0->unk_00 = D_08A45194;
    arg0->unk_00 = D_08A47910;
    arg0->unk_04 = arg1;
    arg0->unk_50 = (u8 *)(((u32)arg0->unk_0C & 3) + (u32)arg0 + 0xC);
    arg0->unk_54 = 0;
    arg0->unk_58 = 3;
    arg0->unk_5C = 5;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    func_08958D7C((s32)arg0);
    return arg0;
}
