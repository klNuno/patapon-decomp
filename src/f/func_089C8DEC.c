#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_089C8DEC;

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16C;
    u8 unk_170[0x480 - 0x170];
    Sub_089C8DEC unk_480;
    s32 unk_EB4;
    s32 unk_EB8;
    u8 unk_EBC[0x10];
    s32 unk_ECC;
    u8 unk_ED0[4];
} Obj_089C8DEC;

void func_08985408(Obj_089C8DEC *, void *);
void func_089CAE9C(void *, void *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_089C8DEC *);
char *func_089D3B64(void *, Obj_089C8DEC *);
void func_0881F5C0(void *, s32, s32);
extern u8 D_08A48D94[];
extern u8 D_08A48024[];

Obj_089C8DEC *func_089C8DEC(Obj_089C8DEC *arg0, void *arg1) {
    s32 a;
    s32 b;
    Sub_089C8DEC *sub;

    func_08985408(arg0, arg1);
    arg0->unk_15C = D_08A48D94;
    arg0->unk_160 = -1;
    arg0->unk_164 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 0;
    func_089CAE9C(arg0->unk_170, arg1);
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_480;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_EB4 = 0;
    arg0->unk_EB8 = 0;
    arg0->unk_ECC = -1;
    func_089D3B64(arg0->unk_ED0, arg0);
    func_0881F5C0(arg0->unk_EBC, 0, 0x10);
    return arg0;
}
