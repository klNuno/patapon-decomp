#include "common.h"

typedef struct {
    u8 pad_00[0xDD4];
    u8 unk_DD4[0x2760 - 0xDD4];
    s32 *unk_2760;
    u8 pad_2764[0xC];
    u8 unk_2770[0x10];
    u8 unk_2780[0x39C0 - 0x2780];
    u8 unk_39C0[0x4110 - 0x39C0];
    s32 unk_4110;
    u8 *unk_4114;
    u8 unk_4118[0x10];
} S_0897EAE0;

void func_089ADC48(S_0897EAE0 *);
void func_089457D8(void *);
s32 func_088C6484(s32 arg0);
s32 func_088BCF94(s32 arg0);
void func_089B0B4C(void *, void *, s32, void *, void *, s32);
void func_089AF140(void *, void *);
void func_08925AB0(void *);
extern s32 D_08A480AC[];

S_0897EAE0 *func_0897EAE0(S_0897EAE0 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    func_089ADC48(arg0);
    arg0->unk_2760 = D_08A480AC;
    func_089457D8(arg0->unk_2770);
    func_089B0B4C(arg0->unk_2780, arg0->unk_DD4, arg2, arg0, arg0->unk_2770, func_088BCF94(func_088C6484((s32)(arg3 + 0x506F0))));
    func_089AF140(arg0->unk_39C0, arg0->unk_2780);
    arg0->unk_4110 = 0;
    arg0->unk_4114 = arg3;
    func_08925AB0(arg0->unk_4118);
    return arg0;
}
