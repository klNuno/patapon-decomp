#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    s32 unk_2C;
} T;

typedef struct {
    T *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10[0x104];
    u8 *unk_114;
    s32 unk_118;
    u8 unk_11C[0x2C];
    u8 unk_148;
    u8 pad_149[3];
    s32 unk_14C;
    s32 unk_150;
    s32 unk_154;
    s32 unk_158;
    void *unk_15C;
} S;

extern u8 D_08A481C4[];
void func_088CDFFC(void *);

S *func_08985408(S *arg0, T *arg1) {
    arg0->unk_15C = D_08A481C4;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1->unk_28;
    arg0->unk_08 = arg1->unk_2C;
    arg0->unk_114 = (u8 *)(((u32)arg0->unk_10 & 3) + (u32)arg0 + 0x10);
    arg0->unk_118 = 0;
    func_088CDFFC(arg0->unk_11C);
    arg0->unk_148 = 0;
    arg0->unk_14C = 0;
    arg0->unk_150 = -1;
    arg0->unk_154 = 0;
    arg0->unk_158 = 0;
    return arg0;
}
