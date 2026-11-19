#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} Unk089D1874Vec;

typedef struct {
    u8 pad_00[8];
    Unk089D1874Vec *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
    f32 unk_1C;
} Unk089D1874Inner;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0x20];
    volatile f32 unk_30;
    f32 unk_34;
} Unk089D1874;

extern void func_088AF2FC(f32 *, s32, u8 *);

s32 func_089D1874(Unk089D1874Vec *arg0, Unk089D1874 *arg1) {
    f32 temp[2];
    Unk089D1874Inner *temp2 = (Unk089D1874Inner *)arg1->unk_0C;
    f32 temp3 = arg0->unk_00;
    f32 temp4 = arg0->unk_04;
    Unk089D1874Vec *temp5 = temp2->unk_08;

    temp2->unk_18 = temp3 - temp5->unk_00;
    temp2->unk_1C = temp4 - temp5->unk_04;
    func_088AF2FC(temp, arg1->unk_0C, arg1->unk_04);
    arg1->unk_30 = temp[0];
    arg1->unk_34 = temp[1];
    arg1->unk_30 += 16.0f;
    return 0;
}
