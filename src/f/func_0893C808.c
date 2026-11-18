#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_0893C808;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x1510 - 0x54];
    u8 unk_1510;
    u8 pad_1511[3];
    u8 unk_1514[0x20];
    Sub_0893C808 unk_1534;
    u8 unk_1F68[0x208C - 0x1F68];
    u8 unk_208C[0x10];
} Obj_0893C808;

void func_0886E47C(void *, s32, void *, s32, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_0893C808 *);
void func_0893CB64(void *, s32, void *, void *);
void func_0893B0BC(void *, void *);
void func_088A3FA4(void *);
extern u8 D_08A48024[];
extern u8 D_08A47300[];

Obj_0893C808 *func_0893C808(Obj_0893C808 *arg0, s32 arg1, void *arg2) {
    s32 a;
    s32 b;
    Sub_0893C808 *sub;

    func_0886E47C(arg0, arg1, arg2, 0, -1);
    arg0->unk_50 = D_08A47300;
    arg0->unk_1510 = 0;
    func_0893CB64(arg0->unk_1514, arg1, arg2, arg0->unk_1F68);
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_1534;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    func_0893B0BC(arg0->unk_1F68, arg0->unk_208C);
    func_088A3FA4(arg0->unk_208C);
    return arg0;
}
