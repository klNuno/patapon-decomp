#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[0x2];
    void *unk_08;
    char unk_0C[0x80];
    s32 unk_8C;
    s32 unk_90;
    s32 unk_94;
    s32 unk_98;
    s32 unk_9C;
    s32 unk_A0;
    s32 unk_A4;
    s32 unk_A8;
} S0885B200;

extern u8 D_089F89D8[];
extern u8 D_08A44940[];
extern u8 D_08A449A0[];

void func_08822B3C(char *, char *);

S0885B200 *func_0885B200(S0885B200 *arg0) {
    arg0->unk_08 = D_08A449A0;
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_05 = 0;
    arg0->unk_08 = D_08A44940;
    arg0->unk_9C = -1;
    arg0->unk_A0 = -1;
    arg0->unk_8C = 0;
    arg0->unk_90 = -100;
    arg0->unk_94 = 100;
    arg0->unk_98 = 1;
    arg0->unk_A8 = 0;
    func_08822B3C(arg0->unk_0C, (char *)D_089F89D8);
    arg0->unk_A4 = 0;
    return arg0;
}
