#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xA24];
    s32 unk_A28;
    s32 unk_A2C;
    u8 unk_A30;
} Sub_089C1A90;

typedef struct {
    u8 pad_00[0x15C];
    void *unk_15C;
    s32 unk_160;
    u8 pad_164[0xC];
    u8 unk_170[0x120];
    u8 unk_290[0x90];
    u8 unk_320[0x90];
    s32 unk_3B0;
    u8 unk_3B4[0x40];
    s32 unk_3F4;
    u8 unk_3F8;
    u8 pad_3F9[3];
    u8 unk_3FC[0xC];
    u8 unk_408;
    u8 pad_409[3];
    s32 unk_40C;
    s32 unk_410;
    s32 unk_414;
    s32 unk_418;
    u8 unk_41C;
    u8 pad_41D[3];
    u8 unk_420[0xC];
    Sub_089C1A90 unk_42C;
} Obj_089C1A90;

void func_08985408(Obj_089C1A90 *);
void func_0880406C(void *, void *, void *, s32, s32);
void func_08865EE0(void *);
void func_08865F78(void *, s32);
void func_08945E64(void *);
char *func_089D3B64(void *, Obj_089C1A90 *);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_08858BC0(void);
void func_0886B4CC(Sub_089C1A90 *);
void func_0881F5C0(void *, s32, s32);
extern u8 D_08A48C84[];
extern u8 D_08A48024[];

Obj_089C1A90 *func_089C1A90(Obj_089C1A90 *arg0) {
    s32 a;
    s32 b;
    Sub_089C1A90 *sub;

    func_08985408(arg0);
    arg0->unk_15C = D_08A48C84;
    arg0->unk_160 = 0;
    func_0880406C(arg0->unk_170, func_08865EE0, func_08865F78, 0x90, 2);
    func_08865EE0(arg0->unk_290);
    func_08865EE0(arg0->unk_320);
    arg0->unk_3B0 = 0;
    arg0->unk_3F4 = 0;
    arg0->unk_3F8 = 0;
    func_08945E64(arg0->unk_3FC);
    arg0->unk_408 = 0;
    arg0->unk_40C = 0;
    arg0->unk_410 = 0;
    arg0->unk_414 = -1;
    arg0->unk_418 = 0;
    arg0->unk_41C = 0;
    func_089D3B64(arg0->unk_420, arg0);
    a = func_089B53D8(func_088586E8());
    b = func_08858BC0();
    sub = &arg0->unk_42C;
    func_0886B4CC(sub);
    sub->unk_00 = D_08A48024;
    sub->unk_A28 = b;
    sub->unk_A2C = a + 0xBB8;
    sub->unk_A30 = 0;
    func_0881F5C0(arg0->unk_3B4, 0, 0x40);
    return arg0;
}
