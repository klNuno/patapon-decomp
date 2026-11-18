#include "common.h"


typedef struct {
    f32 unk_00[3];
} V_0898412C;

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_0898412C;

typedef struct {
    void *unk_00;
    V_0898412C unk_04;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
} X_0898412C;

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    s32 unk_160;
    u8 unk_164;
    u8 unk_165;
    u8 pad_166[2];
    s32 unk_168;
    s32 unk_16C;
    u8 unk_170[0x40];
    s32 unk_1B0;
    u8 unk_1B4;
    u8 pad_1B5[3];
    u8 unk_1B8[0x634 - 0x1B8];
    s32 unk_634;
    s32 unk_638;
    X_0898412C unk_63C;
    X_0898412C unk_658;
    Sub_0898412C unk_674;
} S_0898412C;

extern u8 D_08A4818C[];
extern u8 D_08A48024[];
extern f32 D_08A05E00[];

void func_08985408(S_0898412C *, s32);
void func_0898C9A8(void *, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_0898412C *);
void func_0881F5C0(void *, s32, s32);

S_0898412C *func_0898412C(S_0898412C *arg0, s32 arg1) {
    V_0898412C t1;
    V_0898412C t2;
    s32 a;
    s32 b;
    Sub_0898412C *sub;

    func_08985408(arg0, arg1);
    arg0->unk_15C = D_08A4818C;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    arg0->unk_165 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 0;
    arg0->unk_1B0 = 0;
    arg0->unk_1B4 = 0;
    func_0898C9A8(arg0->unk_1B8, arg1);
    arg0->unk_634 = 0;
    arg0->unk_638 = 0;
    t1 = ((V_0898412C *)D_08A05E00)[0];
    arg0->unk_63C.unk_00 = arg0;
    arg0->unk_63C.unk_04 = t1;
    arg0->unk_63C.unk_10 = 0;
    arg0->unk_63C.unk_14 = 0;
    arg0->unk_63C.unk_18 = 0;
    t2 = ((V_0898412C *)D_08A05E00)[1];
    arg0->unk_658.unk_00 = arg0;
    arg0->unk_658.unk_04 = t2;
    arg0->unk_658.unk_10 = 0;
    arg0->unk_658.unk_14 = 0;
    arg0->unk_658.unk_18 = 0;
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_674;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    func_0881F5C0(arg0->unk_170, 0, 0x40);
    return arg0;
}

