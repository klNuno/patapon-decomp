#include "common.h"

typedef struct {
    u8 pad_00[0x3C];
    char unk_3C[0x10];
    char unk_4C[0x18];
    u8 unk_64;
    u8 pad_65[0x5D0 - 0x65];
    char *unk_5D0;
    char *unk_5D4;
    char *unk_5D8;
    u8 pad_5DC[0x694 - 0x5DC];
} Sub_08914654;

typedef struct {
    u8 pad_00[0x1C];
    Sub_08914654 unk_1C;
    char unk_6B0[0x14];
    char unk_6C4[0x40];
    char unk_704[0x1C];
} S_08914654;

void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
void func_08914808(S_08914654 *, s32, Sub_08914654 *);

void func_08914654(S_08914654 *arg0) {
    Sub_08914654 *sub;

    sub = &arg0->unk_1C;
    func_08914808(arg0, 0, sub);
    func_0881F5C0(arg0->unk_6B0, 0, 0x14);
    sub->unk_5D0 = arg0->unk_6B0;
    func_0881F5C0(arg0->unk_6C4, 0, 0x40);
    sub->unk_5D4 = arg0->unk_6C4;
    func_08822B3C(arg0->unk_6C4, sub->unk_3C);
    func_08822B3C(sub->unk_5D4 + 0x10, sub->unk_4C);
    func_0881F5C0(arg0->unk_704, 0, 0x1C);
    sub->unk_5D8 = arg0->unk_704;
    sub->unk_64 = 0;
}
