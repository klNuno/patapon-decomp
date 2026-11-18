#include "common.h"

typedef struct {
    u8 *unk_00;
    u32 unk_04;
} Vec_0886E47C;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x44];
    Vec_0886E47C unk_A4;
    s32 unk_AC;
    u8 unk_B0[0x1450];
    s32 unk_1500;
    s32 unk_1504;
    s32 unk_1508;
    u8 unk_150C;
} Struct_0886E47C;

void func_0886F02C(Struct_0886E47C *);
s32 func_08858BCC(void);
void func_0885B788(void *, s32);
extern u8 D_08A44F44[];
extern u8 D_089F917B[];

Struct_0886E47C *func_0886E47C(Struct_0886E47C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p;
    Vec_0886E47C *vp;
    u32 *sp;

    func_0886F02C(arg0);
    arg0->unk_50 = D_08A44F44;
    arg0->unk_A4.unk_00 = (u8 *)(((u32)arg0->unk_60 & 3) + (u32)arg0 + 0x60);
    arg0->unk_A4.unk_04 = 0x40;
    p = arg0->unk_A4.unk_00;
    vp = &arg0->unk_A4;
    if ((u32)p != (u32)(p + arg0->unk_A4.unk_04)) {
        sp = &arg0->unk_A4.unk_04;
        do {
            if (p != NULL) {
                *p = *(volatile u8 *)D_089F917B;
            }
            p++;
        } while (p != vp->unk_00 + (u32)*sp);
    }
    arg0->unk_AC = 0;
    func_0885B788(arg0->unk_B0, func_08858BCC());
    arg0->unk_1500 = arg2;
    arg0->unk_1504 = arg4;
    arg0->unk_1508 = arg3;
    arg0->unk_150C = 1;
    return arg0;
}
