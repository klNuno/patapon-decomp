#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
} E;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    E unk_0C[3];
    S unk_60;
    s32 unk_DF0;
    s32 unk_DF4;
} T;

void func_0880406C(void *, void *, void *, s32, s32);
void func_089934F8(void);
void func_089934A8(void);
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

T *func_089933F8(T *arg0, s32 arg1, s32 arg2) {
    S *s;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    func_0880406C(arg0->unk_0C, func_089934F8, func_089934A8, 0x1C, 3);
    arg0->unk_60.unk_00 = D_08A44C14;
    s = &arg0->unk_60;
    s->unk_00 = D_08A44C60;
    s->unk_D88 = (u8 *)(((u32)s->unk_04 & 3) + (u32)s + 0x04);
    s->unk_D8C = 0;
    s->unk_00 = D_08A44CAC;
    arg0->unk_DF0 = 0;
    arg0->unk_DF4 = 0;
    arg0->unk_0C[0].unk_14 = 0;
    arg0->unk_0C[0].unk_18 = 0;
    arg0->unk_0C[1].unk_14 = 0;
    arg0->unk_0C[1].unk_18 = 0;
    arg0->unk_0C[2].unk_14 = 0;
    arg0->unk_0C[2].unk_18 = 0;
    return arg0;
}
