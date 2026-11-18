#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    s32 unk_5C;
    u8 unk_60[0x20];
    u8 unk_80[0x90];
    u8 unk_110[0xB0];
    u8 unk_1C0[0xC];
    s32 unk_1CC;
    s32 unk_1D0;
    u8 unk_1D4[0x20];
    u8 unk_1F4[0x1004];
    u8 *unk_11F8;
    s32 unk_11FC;
    s32 unk_1200;
    s32 unk_1204;
} T0;

extern u8 D_08A48964[];

void func_089B32D0(void *, s32);
extern s32 func_08975794(s32);
void func_08865EE0(void *);
void func_088FC7C0(void *, void *, s32);
void func_089457D8(void *);
void func_089B1374(void *, void *, s32, s32, s32);

T0 *func_089B17F8(T0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_089B32D0(arg0, arg1);
    arg0->unk_58 = D_08A48964;
    arg0->unk_5C = arg2;
    func_08975794((s32)arg0->unk_60);
    func_08865EE0(arg0->unk_80);
    func_088FC7C0(arg0->unk_110, arg0->unk_1C0, arg3);
    func_089457D8(arg0->unk_1C0);
    arg0->unk_1CC = 0x40;
    arg0->unk_1D0 = 4;
    func_089B1374(arg0->unk_1D4, arg0, 0x21, 4, 6);
    arg0->unk_11F8 = (u8 *)(((u32)arg0->unk_1F4 & 3) + (u32)arg0 + 0x1F4);
    arg0->unk_11FC = 0;
    arg0->unk_1200 = 0;
    arg0->unk_1204 = 0;
    return arg0;
}
