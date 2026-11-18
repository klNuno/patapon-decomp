#include "common.h"

typedef struct {
    u8 unk_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 unk_48;
    u8 unk_49;
    u8 unk_4A;
    u8 unk_4B;
    s16 unk_4C;
    s16 unk_4E;
    u8 pad_50[0x24];
    u8 unk_74[0x28];
    s32 unk_9C;
    s32 unk_A0;
    u8 pad_A4[0x28];
    s32 unk_CC;
    s32 unk_D0;
    u8 pad_D4[0x28];
    s32 unk_FC;
    s32 unk_100;
} T08876338;

void func_0881F5C0(void *, s32, s32);
void func_08822B3C(char *, char *);
extern char D_089DD524[];

void func_08876338(T08876338 *arg0) {
    func_0881F5C0(arg0, 0, 0x20);
    func_08822B3C((char *)arg0->unk_00, D_089DD524);
    arg0->unk_20 = -1;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 1;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0;
    arg0->unk_44 = 0;
    arg0->unk_48 = arg0->unk_49 = arg0->unk_4A = arg0->unk_4B = 0xFF;
    arg0->unk_4C = -1;
    arg0->unk_4E = -1;
    func_0881F5C0(arg0->unk_74, 0, 0x90);
    arg0->unk_9C = -1;
    arg0->unk_A0 = -1;
    arg0->unk_CC = -1;
    arg0->unk_D0 = -1;
    arg0->unk_FC = -1;
    arg0->unk_100 = -1;
}
