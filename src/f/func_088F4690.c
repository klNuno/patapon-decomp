#include "common.h"

typedef struct {
    u8 pad_00[0xDD4];
    u8 unk_DD4[0x2760 - 0xDD4];
    s32 *unk_2760;
    u8 pad_2764[0xC];
    u8 unk_2770[0x3990 - 0x2770];
    u8 unk_3990[0x40E0 - 0x3990];
    u8 unk_40E0[0x4320 - 0x40E0];
    u8 unk_4320[0x4AB0 - 0x4320];
    u8 unk_4AB0[0x24];
    u8 *unk_4AD4;
    s32 unk_4AD8;
    s32 unk_4ADC;
    u8 unk_4AE0[0x24];
    u8 *unk_4B04;
    s32 unk_4B08;
    u8 *unk_4B0C;
    u8 unk_4B10[0x5B68 - 0x4B10];
    u8 unk_5B68[0x4];
} S_088F4690;

void func_089ADC48(S_088F4690 *, s32);
s32 func_088C6484(void *arg0);
s32 func_088BCF94(s32 arg0);
void func_08925AB0(void *);
void func_089AF140(void *, void *);
void func_089AF58C(void *, void *, s32, void *, s32);
void func_089AF930(void *, void *, s32, void *, s32, s32);
void func_089AEE0C(void *, void *, S_088F4690 *);
extern s32 D_08A466B4[];

S_088F4690 *func_088F4690(S_088F4690 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    func_089ADC48(arg0, arg1);
    arg0->unk_2760 = D_08A466B4;
    func_089AF58C(arg0->unk_2770, arg0->unk_DD4, arg2, arg0->unk_4AB0, func_088BCF94(func_088C6484(arg3 + 0x506F0)));
    func_089AF140(arg0->unk_3990, arg0->unk_2770);
    func_089AF930(arg0->unk_40E0, arg0->unk_2770, arg2, arg0->unk_4AB0, arg1, func_088BCF94(func_088C6484(arg3 + 0x506F0)));
    func_089AEE0C(arg0->unk_4320, arg0->unk_2770, arg0);
    arg0->unk_4AD4 = (u8 *)(((u32)arg0->unk_4AB0 & 3) + (u32)arg0 + 0x4AB0);
    arg0->unk_4AD8 = 0;
    arg0->unk_4ADC = 0;
    arg0->unk_4B04 = (u8 *)(((u32)arg0->unk_4AE0 & 3) + (u32)arg0 + 0x4AE0);
    arg0->unk_4B08 = 0;
    arg0->unk_4B0C = arg3;
    func_08925AB0(arg0->unk_4B10);
    func_08925AB0(arg0->unk_5B68);
    return arg0;
}
