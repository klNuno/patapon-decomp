#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} U;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x14BC];
    u8 unk_1510;
    u8 pad_1511[3];
    s32 unk_1514;
    f32 unk_1518;
    u8 unk_151C;
    u8 pad_151D[3];
    s32 unk_1520;
    u8 pad_1524[4];
    s32 unk_1528;
    s32 unk_152C;
    s32 unk_1530;
    s32 unk_1534;
    u8 pad_1538[0x14];
    u8 unk_154C;
    u8 pad_154D[3];
    u8 unk_1550[0x150];
    s32 unk_16A0;
    s32 unk_16A4;
    u8 unk_16A8;
    u8 pad_16A9[3];
    s32 unk_16AC;
    s32 unk_16B0;
    s32 unk_16B4;
    void *unk_16B8;
    u8 pad_16BC[4];
    u8 unk_16C0[8];
    U *unk_16C8;
    u8 pad_16CC[0xC];
    f32 unk_16D8;
    f32 unk_16DC;
    u8 pad_16E0[0x28];
    f32 unk_1708;
    f32 unk_170C;
    u8 pad_1710[0x680];
    u8 unk_1D90;
    u8 pad_1D91[3];
    s32 unk_1D94;
    u8 unk_1D98;
} V;

extern u8 D_08A01A48[];
extern u8 D_08A44AD8[];
extern u8 D_08A46C18[];

void func_0886E47C(void *, s32, void *, s32, s32);
s32 func_08858BCC(void);
void func_08885768(void *);
void func_08885C28(void *, void *);
extern s32 func_088AF0B8(s32, s32, s32, s32);
void *func_088F2288(void *);

V *func_0891ED04(V *arg0, s32 arg1, void *arg2) {
    s32 temp;
    U *p;

    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A46C18;
    arg0->unk_1510 = 0;
    arg0->unk_1514 = 0;
    arg0->unk_1518 = 1.0f;
    arg0->unk_151C = 0;
    arg0->unk_1520 = 0;
    arg0->unk_152C = 0;
    arg0->unk_1530 = -1;
    arg0->unk_1534 = -1;
    func_08885768(arg0->unk_1550);
    temp = func_08858BCC();
    arg0->unk_16B8 = D_08A44AD8;
    arg0->unk_16B4 = 0;
    arg0->unk_16A0 = 0;
    arg0->unk_16A4 = 0;
    arg0->unk_16A8 = 0;
    arg0->unk_16B0 = 0;
    arg0->unk_16AC = temp;
    func_088F2288(arg0->unk_16C0);
    func_08885C28(arg0->unk_1550, D_08A01A48);
    arg0->unk_1528 = 0;
    arg0->unk_1D98 = 0;
    arg0->unk_154C = 0;
    arg0->unk_1D94 = 0;
    func_088AF0B8((s32)arg0->unk_16C0, 0, 0, 1);
    p = arg0->unk_16C8;
    arg0->unk_16D8 = 20.0f - p->unk_00;
    arg0->unk_16DC = 20.0f - p->unk_04;
    arg0->unk_1708 = 64.0f;
    arg0->unk_170C = 272.0f;
    arg0->unk_1D90 = 1;
    return arg0;
}
