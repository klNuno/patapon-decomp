#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_089CBB24;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
    u8 pad_1511[0xF];
    u8 unk_1520[0x2440 - 0x1520];
    Sub_089CBB24 unk_2440;
} Obj_089CBB24;

void func_0886E47C(void *, s32, void *, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_089CBB24 *);
void func_089CBF70(void *, s32, void *, Obj_089CBB24 *);
extern u8 D_08A48024[];
extern u8 D_08A48E00[];

Obj_089CBB24 *func_089CBB24(Obj_089CBB24 *arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 a;
    s32 b;
    Sub_089CBB24 *sub;

    func_0886E47C(arg0, arg1, arg2, arg3, -1);
    arg0->unk_50 = D_08A48E00;
    arg0->unk_1510 = 0;
    func_089CBF70(arg0->unk_1520, arg1, arg2, arg0);
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_2440;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    return arg0;
}
