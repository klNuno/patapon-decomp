#include "common.h"

typedef struct {
    u8 pad_00[0xDD4];
    u8 unk_DD4[0x2760 - 0xDD4];
    s32 *unk_2760;
    u8 pad_2764[0xC];
    u8 unk_2770[0x3980 - 0x2770];
    u8 unk_3980[0x4840 - 0x3980];
    u8 unk_4840[0x5D20 - 0x4840];
    u8 unk_5D20[0x64B0 - 0x5D20];
    u8 unk_64B0[0x7508 - 0x64B0];
    u8 unk_7508[0x8560 - 0x7508];
    u8 *unk_8560;
} S_088F53C0;

void func_089ADC48(S_088F53C0 *);
s32 func_088C6484(s32 arg0);
s32 func_088BCF94(s32 arg0);
void func_089B30E0(void *, void *, s32, s32);
void func_089AE5F0(void *, void *);
void func_089B2AB8(void *, void *);
void func_089B247C(void *, void *);
void func_08925AB0(void *);
extern s32 D_08A466E0[];

S_088F53C0 *func_088F53C0(S_088F53C0 *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    func_089ADC48(arg0);
    arg0->unk_2760 = D_08A466E0;
    func_089B30E0(arg0->unk_2770, arg0->unk_DD4, arg2, func_088BCF94(func_088C6484((s32)(arg3 + 0x506F0))));
    func_089AE5F0(arg0->unk_3980, arg0->unk_2770);
    func_089B2AB8(arg0->unk_4840, arg0->unk_2770);
    func_089B247C(arg0->unk_5D20, arg0->unk_2770);
    func_08925AB0(arg0->unk_64B0);
    func_08925AB0(arg0->unk_7508);
    arg0->unk_8560 = arg3;
    return arg0;
}
