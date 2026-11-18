#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} V_0890DE5C;

typedef struct {
    u8 pad_00[0x1C];
    V_0890DE5C unk_1C;
    u8 pad_34[0x40];
} E_0890DE5C;

typedef struct {
    u8 pad_00[0x74A4];
    E_0890DE5C *unk_74A4;
} S_0890DE5C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} K_0890DE5C;

s32 func_0890E830(S_0890DE5C *, u32, u32);

void func_0890DE5C(S_0890DE5C *arg0, K_0890DE5C *arg1, V_0890DE5C *arg2) {
    s32 temp;
    E_0890DE5C *e;

    temp = func_0890E830(arg0, arg1->unk_04, arg1->unk_00);
    if (temp >= 0) {
        e = &arg0->unk_74A4[temp];
        e->unk_1C.unk_00 = arg2->unk_00;
        e->unk_1C.unk_04 = arg2->unk_04;
        e->unk_1C.unk_08 = arg2->unk_08;
        e->unk_1C.unk_0C = arg2->unk_0C;
        e->unk_1C.unk_10 = arg2->unk_10;
        e->unk_1C.unk_14 = arg2->unk_14;
    }
}
