#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[0x64];
    u8 *unk_68;
    s32 unk_6C;
} Sub_08915828;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    s32 unk_1510;
    s32 unk_1514;
    s32 unk_1518;
    s32 unk_151C;
    u8 unk_1520;
    u8 unk_1521;
    u8 pad_1522[6];
    u8 unk_1528[0xF0C];
    u8 unk_2434;
    u8 pad_2435[3];
    Sub_08915828 unk_2438;
    s32 unk_24A8;
    s32 unk_24AC;
    u8 unk_24B0;
    u8 pad_24B1[3];
    s32 unk_24B4;
    s32 unk_24B8;
    s32 unk_24BC;
    void *unk_24C0;
    s32 unk_24C4;
    s32 unk_24C8;
    u8 unk_24CC;
    u8 pad_24CD[3];
    s32 unk_24D0;
    u8 pad_24D4[0xC];
    u8 unk_24E0[0x90];
    u8 unk_2570[0x90];
    u8 unk_2600;
} T08915828;

void func_0886E47C(void *, s32, s32, s32, s32);
s32 func_088586E8(void);
u8 *func_089B53D8(s32);
void func_0897A320(void *, s32, u8 *);
s32 func_08858BA8(void);
void func_08865EE0(void *);
extern u8 D_08A46A6C[];
extern u8 D_08A44C14[];
extern u8 D_08A450E8[];
extern u8 D_08A44AD8[];
extern T08915828 *D_08AD8844[];

T08915828 *func_08915828(T08915828 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Sub_08915828 *sub;
    s32 temp;

    func_0886E47C(arg0, arg1, arg2, arg3, -1);
    arg0->unk_50 = D_08A46A6C;
    arg0->unk_1510 = 0;
    arg0->unk_1514 = 0;
    arg0->unk_1518 = 0;
    arg0->unk_151C = 0;
    arg0->unk_1520 = 0;
    arg0->unk_1521 = 0;
    func_0897A320(arg0->unk_1528, arg1, func_089B53D8(func_088586E8()) + 0xBB8);
    arg0->unk_2434 = 0;
    arg0->unk_2438.unk_00 = D_08A44C14;
    sub = &arg0->unk_2438;
    sub->unk_00 = D_08A450E8;
    sub->unk_68 = (u8 *)(((u32)sub->unk_04 & 3) + (u32)sub + 0x04);
    sub->unk_6C = 0;
    temp = func_08858BA8();
    arg0->unk_24C0 = D_08A44AD8;
    arg0->unk_24BC = 0;
    arg0->unk_24A8 = 0;
    arg0->unk_24AC = 0;
    arg0->unk_24B0 = 0;
    arg0->unk_24B8 = 0;
    arg0->unk_24B4 = temp;
    arg0->unk_24C4 = 0;
    arg0->unk_24C8 = 0;
    arg0->unk_24CC = 0;
    arg0->unk_24D0 = 0;
    func_08865EE0(arg0->unk_24E0);
    func_08865EE0(arg0->unk_2570);
    arg0->unk_2600 = 0;
    D_08AD8844[0] = arg0;
    return arg0;
}
