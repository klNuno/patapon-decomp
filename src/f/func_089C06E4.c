#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_089CBB24;

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    Sub_089CBB24 unk_160;
    s32 unk_B94;
    u8 unk_B98;
    s32 unk_B9C;
    s32 unk_BA0;
    u8 unk_BA4;
    s32 unk_BA8;
    s32 unk_BAC;
    s32 unk_BB0;
    s32 unk_BB4;
    s32 unk_BB8;
    s32 unk_BBC;
    s32 unk_BC0;
    u8 unk_BC4[0xC];
    u8 unk_BD0;
    u8 pad_BD1[3];
    u8 unk_BD4[0xC];
    s32 unk_BE0;
    u8 unk_BE4[4];
} Obj_089C06E4;

void func_0881F5C0(void *, s32, s32);
s32 func_088586E8(void);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_089CBB24 *);
void func_08985408(Obj_089C06E4 *, s32);
s32 func_089B53D8(s32);
void func_089C3FD0(void *, s32, Obj_089C06E4 *);
void func_089D3B64(void *, Obj_089C06E4 *);
extern u8 D_08A48024[];
extern u8 D_08A48C4C[];

Obj_089C06E4 *func_089C06E4(Obj_089C06E4 *arg0, s32 arg1) {
    s32 a;
    s32 b;
    Sub_089CBB24 *sub;

    func_08985408(arg0, arg1);
    arg0->unk_15C = D_08A48C4C;
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_160;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_B94 = 0;
    arg0->unk_B98 = 0;
    arg0->unk_B9C = 0;
    arg0->unk_BA0 = 0;
    arg0->unk_BA4 = 0;
    arg0->unk_BA8 = -1;
    arg0->unk_BAC = -1;
    arg0->unk_BB0 = -1;
    arg0->unk_BB4 = 0;
    arg0->unk_BB8 = -1;
    arg0->unk_BBC = -1;
    arg0->unk_BC0 = -1;
    func_089D3B64(arg0->unk_BC4, arg0);
    arg0->unk_BD0 = 0;
    arg0->unk_BE0 = 0;
    func_089C3FD0(arg0->unk_BE4, arg1, arg0);
    func_0881F5C0(arg0->unk_BD4, 0, 0xC);
    return arg0;
}
