#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_08981CCC;

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    Sub_08981CCC unk_0C;
    s32 unk_A40;
    u8 pad_A44[0xC];
    u8 unk_A50[0x48A0 - 0xA50];
    u8 unk_48A0[0x5694 - 0x48A0];
    s32 unk_5694;
} Obj_08981CCC;

s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_08981CCC *);
void func_0897B950(Sub_08981CCC *, s32);
void func_08982138(void *, s32);
void func_08980348(void *, s32, s32);
void func_089805E8(void *);
void func_08980618(void *);
void func_089825EC(void *);
void func_089826E0(void *, s32);
extern u8 D_08A478D8[];
extern u8 D_08A48024[];
extern u8 D_08A48120[];

Obj_08981CCC *func_08981CCC(Obj_08981CCC *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 b;
    Sub_08981CCC *sub;

    arg0->unk_00 = D_08A478D8;
    arg0->unk_04 = 1;
    arg0->unk_00 = D_08A48120;
    arg0->unk_08 = arg3;
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_0C;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_A40 = arg1;
    func_08982138(arg0->unk_A50, arg1);
    func_08980348(arg0->unk_48A0, arg1, arg2);
    arg0->unk_5694 = 0;
    func_089805E8(arg0->unk_48A0);
    func_089825EC(arg0->unk_A50);
    func_0897B950(&arg0->unk_0C, arg3);
    func_089826E0(arg0->unk_A50, arg3);
    func_08980618(arg0->unk_48A0);
    return arg0;
}
