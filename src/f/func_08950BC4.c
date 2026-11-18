#include "common.h"

s32 func_0895257C(char *arg0);
void func_0894C7AC(s32);
void func_08879610(void *, s32);
void func_0894CF90(f32, void *);
void func_0887A12C(void *, s32);
void func_088A3C34(void *);
extern const u32 D_089EA4E8[];

typedef struct {
    u8 unk_00[0x20];
} UnkEntry;

typedef struct {
    UnkEntry *unk_00;
    s32 unk_04;
} UnkVector;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0xC];
    u8 unk_1C[0x2D4];
    UnkVector unk_2F0;
    u8 pad_2F8[0x14];
    u8 unk_30C[0x884];
    u8 unk_B90[0x1A34];
    s32 unk_25C4;
    u8 pad_25C8[4];
    u8 unk_25CC[1];
} UnkObject;

void func_08950BC4(UnkObject *arg0)
{
    UnkVector *temp;
    UnkEntry *temp2;
    UnkEntry *temp3;
    s32 temp4;
    u32 temp5;

    if (arg0->unk_0C != 0) {
        func_0894C7AC(func_0895257C((char *)arg0));
    }
    temp4 = arg0->unk_2F0.unk_04;
    temp2 = arg0->unk_2F0.unk_00;
    temp = &arg0->unk_2F0;
    if ((u32)temp2 != (u32)(temp2 + temp4)) {
        temp3 = *(UnkEntry *volatile *)&temp->unk_00 + temp4;
        do {
            ++temp2;
        } while (temp2 != temp3);
    }
    arg0->unk_2F0.unk_04 = 0;
    func_0887A12C(arg0->unk_B90, 0);
    func_08879610(arg0->unk_30C, 0);
    temp5 = D_089EA4E8[0];
    arg0->unk_25C4 = 0;
    func_0894CF90((f32)temp5, arg0->unk_1C);
    func_088A3C34(arg0->unk_25CC);
}
