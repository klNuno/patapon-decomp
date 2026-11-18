#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
    u8 pad_A31[3];
} Sub_08955104;

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[0x48];
    Sub_08955104 unk_50;
    u8 pad_A84[4];
    s32 unk_A88;
    s32 unk_A8C;
    s32 unk_A90;
    s32 unk_A94;
    s32 unk_A98;
    s32 unk_A9C;
    s32 unk_AA0;
    s32 unk_AA4;
    s32 unk_AA8;
    u8 unk_AAC[0x44];
    u8 unk_AF0[0x1D50 - 0xAF0];
    u8 unk_1D50[0x4350 - 0x1D50];
    u8 unk_4350[0x70];
    u8 unk_43C0[0x1E6B0 - 0x43C0];
    u8 unk_1E6B0[0x20010 - 0x1E6B0];
    u8 unk_20010[0x22060 - 0x20010];
    u8 unk_22060[0x5C];
    s32 unk_220BC;
    s32 unk_220C0;
    u8 pad_220C4[0x2C];
    u8 unk_220F0[0x40];
    u8 unk_22130;
    u8 unk_22131;
    u8 pad_22132[2];
    u8 unk_22134[0x40];
    void *unk_22174;
} Obj_08955104;

extern u8 D_08A477CC[];
extern u8 D_08A478A4[];
extern u8 D_08A48024[];

void func_0887A798(void *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858B9C(void);
void func_0886B4CC(Sub_08955104 *);
void func_0885AC10(void *);
void func_08952C6C(void *);
void func_08950388(void *, Obj_08955104 *, void *, s32, void *);
void func_08958B44(void *, void *);
void func_0894D9B4(void *, void *);
void func_08953F0C(void *);
void func_0894BE0C(void *, void *);
void func_0894B4C4(void *, void *);
void func_08955004(void *, s32, s32, s32, s32, s32, s32, s32, s32);
void func_08958F1C(void *);
void func_089555BC(Obj_08955104 *);

Obj_08955104 *func_08955104(Obj_08955104 *arg0) {
    s32 a;
    s32 b;
    Sub_08955104 *sub;

    arg0->unk_00 = D_08A477CC;
    arg0->unk_00 = D_08A478A4;
    arg0->unk_04 = 0;
    func_0887A798(arg0->unk_08);
    a = func_089B53D8(func_088586E8());
    b = func_08858B9C();
    sub = &arg0->unk_50;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_A88 = 0;
    arg0->unk_A8C = 0;
    arg0->unk_A90 = 0;
    arg0->unk_A94 = 0;
    arg0->unk_A98 = 0;
    arg0->unk_A9C = 0;
    arg0->unk_AA0 = 0;
    arg0->unk_AA4 = func_089B53D8(func_088586E8()) + 0x14;
    arg0->unk_AA8 = func_089B53D8(func_088586E8()) + 0xC4;
    func_0885AC10(arg0->unk_AAC);
    func_08952C6C(arg0->unk_AF0);
    func_08950388(arg0->unk_1D50, arg0, arg0->unk_1E6B0, func_089B53D8(func_088586E8()) + 0xC4, arg0->unk_08);
    func_08958B44(arg0->unk_4350, arg0->unk_08);
    func_0894D9B4(arg0->unk_43C0, arg0->unk_08);
    func_08953F0C(arg0->unk_1E6B0);
    func_0894BE0C(arg0->unk_20010, arg0->unk_08);
    func_0894B4C4(arg0->unk_22060, arg0->unk_08);
    arg0->unk_220BC = 3;
    arg0->unk_220C0 = 3;
    func_08955004(arg0->unk_220F0, 0, 0, 0, 0, 0, 0, 0, 0);
    arg0->unk_22130 = 0;
    arg0->unk_22131 = 0;
    arg0->unk_22174 = arg0;
    func_08958F1C(arg0->unk_22134);
    func_089555BC(arg0);
    return arg0;
}
