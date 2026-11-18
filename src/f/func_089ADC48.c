#include "common.h"

typedef struct {
    f32 unk_00[3];
} V_089ADC48;

typedef struct {
    f32 unk_00[2];
} F2_089ADC48;

typedef struct {
    void *unk_00;
    V_089ADC48 unk_04;
    u8 unk_10;
    s32 unk_14;
    s32 unk_18;
} P_089ADC48;

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
    s32 unk_D90;
    s32 unk_D94;
    P_089ADC48 unk_D98;
    P_089ADC48 unk_DB4;
    u8 unk_DD0;
    u8 unk_DD1;
    u8 pad_DD2[2];
    u8 unk_DD4[0x5C];
    u8 unk_E30[0x1930];
    void *unk_2760;
} S_089ADC48;

extern u8 D_08A48810[];
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];
extern f32 D_08A082C8[];
extern f32 D_08A082D0[];
extern f32 D_08A082DC[];
void func_089B32D0(void *, s32);
void func_089B2798(void *);

S_089ADC48 *func_089ADC48(S_089ADC48 *arg0, s32 arg1) {
    V_089ADC48 a;
    V_089ADC48 b;

    arg0->unk_2760 = D_08A48810;
    arg0->unk_00 = D_08A44C14;
    arg0->unk_00 = D_08A44C60;
    arg0->unk_D88 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_D8C = 0;
    arg0->unk_00 = D_08A44CAC;
    arg0->unk_D90 = 0;
    arg0->unk_D94 = arg1;
    *(F2_089ADC48 *)&a = *(F2_089ADC48 *)D_08A082C8;
    a.unk_00[2] = D_08A082D0[0];
    arg0->unk_D98.unk_00 = arg0;
    arg0->unk_D98.unk_04 = a;
    arg0->unk_D98.unk_10 = 0;
    arg0->unk_D98.unk_14 = 0;
    arg0->unk_D98.unk_18 = 0;
    *(F2_089ADC48 *)&b = *(F2_089ADC48 *)&D_08A082D0[1];
    b.unk_00[2] = D_08A082DC[0];
    arg0->unk_DB4.unk_00 = arg0;
    arg0->unk_DB4.unk_04 = b;
    arg0->unk_DB4.unk_10 = 0;
    arg0->unk_DB4.unk_14 = 0;
    arg0->unk_DB4.unk_18 = 0;
    arg0->unk_DD0 = 0;
    arg0->unk_DD1 = 1;
    func_089B32D0(arg0->unk_DD4, 0);
    func_089B2798(arg0->unk_E30);
    return arg0;
}
