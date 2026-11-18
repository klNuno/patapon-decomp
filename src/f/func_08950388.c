#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10[0x110];
    u8 unk_120[4];
} Sub_08950388;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
    u8 pad_14[0x8];
    u8 unk_1C[0x174];
    u8 unk_190[0x5C];
    u8 unk_1EC[0x104];
    u8 *unk_2F0;
    s32 unk_2F4;
    u8 unk_2F8[0xC];
    u8 *unk_304;
    s32 unk_308;
    u8 unk_30C[0x83C];
    s32 unk_B48;
    s32 unk_B4C;
    u8 pad_B50[0x8];
    s32 unk_B58;
    s32 unk_B5C;
    s32 unk_B60;
    u8 unk_B64;
    u8 unk_B65;
    u8 pad_B66[0x2];
    s32 unk_B68;
    s32 unk_B6C;
    u8 pad_B70[0x8];
    s32 unk_B78;
    s32 unk_B7C;
    s32 unk_B80;
    u8 unk_B84;
    u8 unk_B85;
    u8 pad_B86[0xA];
    Sub_08950388 unk_B90;
    u8 pad_CB4[0x1918];
    u8 unk_25CC[4];
} S_08950388;

void func_0894C824(void *, s32, s32);
void func_0887E17C(void *, s32);
char *func_088793A8(char *, s32, s32, s32);
void func_0880406C(void *, void *, void *, s32, s32);
void func_0887DA6C(void *);
void func_088A3898(void *);
void func_08950800(S_08950388 *);
void func_089506BC(void);
void func_08950650(void);

S_08950388 *func_08950388(S_08950388 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p;
    Sub_08950388 *s;

    arg0->unk_00 = arg4;
    arg0->unk_04 = arg1;
    arg0->unk_08 = arg2;
    arg0->unk_10 = 0;
    func_0894C824(arg0->unk_1C, arg3, arg4);
    func_0887E17C(arg0->unk_190, arg4);
    p = arg0->unk_1EC;
    arg0->unk_2F0 = (u8 *)((u32)p + ((u32)p & 3));
    arg0->unk_2F4 = 0;
    arg0->unk_304 = (u8 *)(((u32)arg0->unk_2F8 & 3) + (u32)arg0 + 0x2F8);
    arg0->unk_308 = 0;
    func_088793A8((char *)arg0->unk_30C, arg3, arg4, (s32)p);
    arg0->unk_B48 = -1;
    arg0->unk_B4C = 0;
    arg0->unk_B58 = 0;
    arg0->unk_B5C = 0;
    arg0->unk_B60 = 0;
    arg0->unk_B64 = 0;
    arg0->unk_B65 = 0;
    arg0->unk_B68 = -1;
    arg0->unk_B6C = 0;
    arg0->unk_B78 = 0;
    arg0->unk_B7C = 0;
    arg0->unk_B80 = 0;
    arg0->unk_B84 = 0;
    arg0->unk_B85 = 0;
    s = &arg0->unk_B90;
    func_0887DA6C(s->unk_10);
    func_0880406C(s->unk_120, func_089506BC, func_08950650, 0x320, 8);
    func_088A3898(arg0->unk_25CC);
    func_08950800(arg0);
    return arg0;
}
