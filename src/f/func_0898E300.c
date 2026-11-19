#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x90];
    s32 unk_A0;
    s32 unk_A4;
    s32 unk_A8;
    s32 unk_AC;
    u8 pad_B0[0x20];
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    s32 unk_DC;
    u8 pad_E0[4];
    u8 *unk_E4;
} T;

void func_08865EE0(void *);
extern void func_0898E444(T *);
extern u8 D_08A484B4[];

T *func_0898E300(T *arg0) {
    arg0->unk_E4 = D_08A484B4;
    func_08865EE0(arg0->unk_10);
    arg0->unk_A0 = 0;
    arg0->unk_A4 = 0;
    arg0->unk_A8 = 0;
    arg0->unk_AC = 0;
    arg0->unk_D0 = -1;
    arg0->unk_D4 = -1;
    arg0->unk_D8 = -1;
    arg0->unk_DC = -1;
    func_0898E444(arg0);
    return arg0;
}
