#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_089C6A58;

typedef struct {
    u8 pad_00[0x11C];
    u8 unk_11C[0x15C - 0x11C];
    void *unk_15C;
    s32 unk_160;
    s32 unk_164;
    u8 unk_168[0x24C - 0x168];
    Sub_089C6A58 unk_24C;
    s32 unk_C80;
    s32 unk_C84;
    s32 unk_C88;
    u8 unk_C8C;
    u8 unk_C8D;
    u8 pad_C8E[2];
    s32 unk_C90;
    u8 unk_C94;
    u8 pad_C95[3];
    s32 unk_C98;
    u8 unk_C9C;
    u8 unk_C9D;
    u8 pad_C9E[2];
    s32 unk_CA0;
    s32 unk_CA4;
    u8 unk_CA8[0xC];
    u8 *unk_CB4;
    s32 unk_CB8;
    u8 unk_CBC[4];
} Obj_089C6A58;

void func_08985408(Obj_089C6A58 *, void *);
void func_089CCBA4(void *, void *, Obj_089C6A58 *, void *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_089C6A58 *);
char *func_089D3B64(void *, Obj_089C6A58 *);
extern u8 D_08A48D5C[];
extern u8 D_08A48024[];

Obj_089C6A58 *func_089C6A58(Obj_089C6A58 *arg0, void *arg1) {
    s32 a;
    s32 b;
    Sub_089C6A58 *sub;

    func_08985408(arg0, arg1);
    arg0->unk_15C = D_08A48D5C;
    arg0->unk_160 = 1;
    arg0->unk_164 = 0;
    func_089CCBA4(arg0->unk_168, arg1, arg0, arg0->unk_11C);
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_24C;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    arg0->unk_C80 = -1;
    arg0->unk_C84 = -1;
    arg0->unk_C88 = -1;
    arg0->unk_C8C = 0;
    arg0->unk_C8D = 0;
    arg0->unk_C90 = -1;
    arg0->unk_C94 = 0;
    arg0->unk_C98 = 0;
    arg0->unk_C9C = 0;
    arg0->unk_C9D = 0;
    arg0->unk_CA0 = 0;
    arg0->unk_CA4 = 0;
    arg0->unk_CB4 = (u8 *)(((u32)arg0->unk_CA8 & 3) + (u32)arg0 + 0xCA8);
    arg0->unk_CB8 = 0;
    func_089D3B64(arg0->unk_CBC, arg0);
    return arg0;
}
