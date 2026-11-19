#include "common.h"

typedef struct {
    volatile s32 unk_00;
    volatile s32 unk_04;
    volatile s32 unk_08;
    u8 unk_0C[0xC];
    u8 *unk_18;
    s32 unk_1C;
    u8 unk_20[0x2C];
    s32 unk_4C;
    s32 unk_50;
    u8 pad_54[0x1C];
    s32 unk_70;
    u8 pad_74[0xC];
    void *unk_80;
} S;

extern u8 D_08A4595C[];
extern void func_0889E084(char *);
void func_0889EA14(void *);

S *func_0889DF64(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_00 = arg2;
    arg0->unk_04 = arg3;
    arg0->unk_08 = arg4;
    arg0->unk_80 = D_08A4595C;
    arg0->unk_18 = (u8 *)(((u32)arg0->unk_0C & 3) + (u32)arg0 + 0xC);
    arg0->unk_1C = 0;
    func_0889EA14(arg0->unk_20);
    arg0->unk_4C = 0;
    arg0->unk_50 = 0;
    arg0->unk_70 = 0;
    func_0889E084((char *)arg0);
    return arg0;
}
