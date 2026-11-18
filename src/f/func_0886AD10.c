#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_0886AD10;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
    u8 pad_1511[3];
    Sub_0886AD10 unk_1514;
    u8 pad_1F48[1];
    u8 unk_1F49;
    u8 pad_1F4A[2];
    s32 unk_1F4C;
    s32 unk_1F50;
    u8 unk_1F54;
} Obj_0886AD10;

void func_0886E47C(void *, s32, void *, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_0886AD10 *);
void func_0886F33C(Obj_0886AD10 *, s32, s32);
extern u8 D_08A48024[];
extern u8 D_08A44EC4[];

Obj_0886AD10 *func_0886AD10(Obj_0886AD10 *arg0, s32 arg1, void *arg2) {
    s32 a;
    s32 b;
    Sub_0886AD10 *sub;

    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A44EC4;
    arg0->unk_1510 = 0;
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_1514;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_1F49 = 1;
    arg0->unk_1F4C = 0x10000;
    arg0->unk_1F50 = -1;
    arg0->unk_1F54 = 0;
    func_0886F33C(arg0, -1, 3);
    arg0->unk_1510 = 0;
    return arg0;
}
