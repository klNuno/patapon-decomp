#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x24];
} Unk74;

typedef struct {
    u8 pad_00[0x74A4];
    Unk74 *unk_74A4;
} S_0890DE5C;

typedef struct {
    u32 unk_00;
    u32 unk_04;
} Unk;

s32 func_0890E830(S_0890DE5C *, u32, u32);

void func_0890DC54(S_0890DE5C *arg0, const Unk *arg1, s32 arg2) {
    u32 unk_04 = *(volatile u32 *)&arg1->unk_04;
    u32 unk_00 = *(volatile u32 *)&arg1->unk_00;
    s32 temp = func_0890E830(arg0, unk_04, unk_00);
    if (temp >= 0) {
        s32 off = temp * 0x74;
        ((Unk74 *)((u8 *)arg0->unk_74A4 + off))->unk_4C = arg2;
    }
}
