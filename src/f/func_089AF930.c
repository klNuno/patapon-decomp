#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    s32 unk_5C;
    s32 unk_60;
    u8 unk_64[0x84];
    u8 *unk_E8;
    s32 unk_EC;
    u8 unk_F0[0x84];
    u8 *unk_174;
    s32 unk_178;
    u8 unk_17C[0x8];
    s32 unk_184;
    u8 pad_188[0x8];
    u8 unk_190[4];
} S_089AF930;

extern u8 D_08A488FC[];
void func_089B32D0(void *, s32);
void func_089457D8(void *);
void func_088FC7C0(void *, void *, s32);

S_089AF930 *func_089AF930(S_089AF930 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A488FC;
    arg0->unk_5C = arg2;
    arg0->unk_60 = arg3;
    arg0->unk_E8 = (u8 *)(((u32)arg0->unk_64 & 3) + (u32)arg0 + 0x64);
    arg0->unk_EC = 0;
    arg0->unk_174 = (u8 *)(((u32)arg0->unk_F0 & 3) + (u32)arg0 + 0xF0);
    arg0->unk_178 = 0;
    func_089457D8(arg0->unk_17C);
    arg0->unk_184 = arg4;
    func_088FC7C0(arg0->unk_190, arg0->unk_17C, arg5);
    return arg0;
}
