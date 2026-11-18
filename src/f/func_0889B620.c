#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x14];
    volatile u32 unk_1C;
} S0889B620_3C;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x2];
    u16 unk_12;
    u8 pad_14[0x8];
} E0889B620;

typedef struct {
    u8 pad_00[0x3C];
    S0889B620_3C *unk_3C;
    E0889B620 *unk_40;
    u8 pad_44[0x28];
    s32 unk_6C;
    s32 unk_70;
    u8 pad_74[0x4];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x14];
    u32 unk_94;
} S0889B620;

s32 func_0889C3B8(S0889B620 *, s32);
s32 func_0889BF3C(char *);
void func_0889B6E8(char *, s32);

void func_0889B620(S0889B620 *arg0, S0889B620_3C *arg1) {
    S0889B620_3C *h;
    u32 i;

    arg0->unk_3C = arg1;
    arg0->unk_78 = 0;
    if (arg1 != NULL) {
        arg0->unk_6C = func_0889C3B8(arg0, 0x9F38D);
        arg0->unk_40 = (E0889B620 *)((u8 *)arg0->unk_3C + arg0->unk_3C->unk_04);
        arg0->unk_70 = func_0889BF3C((char *)arg0);
        func_0889B6E8((char *)arg0, arg0->unk_70);
        h = arg0->unk_3C;
        for (i = 0; i < h->unk_1C; i++) {

            if (arg0->unk_40[arg0->unk_7C].unk_12 == 0x63 && arg0->unk_40[arg0->unk_7C].unk_0C == 0x14) {
                arg0->unk_94 = i;
                return;
            }
        }
    }
}
