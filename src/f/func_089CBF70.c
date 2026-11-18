#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x90];
    u8 unk_A0[0x90];
    S unk_130;
    u8 unk_EC0[0x50];
    s32 unk_F10;
    s32 unk_F14;
} T;

void func_08865EE0(void *);
extern s32 func_08913614(s32);
extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

T *func_089CBF70(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    S *s;

    arg0->unk_00 = arg3;
    arg0->unk_04 = 3;
    func_08865EE0(arg0->unk_10);
    func_08865EE0(arg0->unk_A0);
    arg0->unk_130.unk_00 = D_08A44C14;
    s = &arg0->unk_130;
    s->unk_00 = D_08A44C60;
    s->unk_D88 = (u8 *)(((u32)s->unk_04 & 3) + (u32)s + 0x04);
    s->unk_D8C = 0;
    s->unk_00 = D_08A44CAC;
    func_08913614((s32)arg0->unk_EC0);
    arg0->unk_F10 = arg2;
    arg0->unk_F14 = 0;
    return arg0;
}
