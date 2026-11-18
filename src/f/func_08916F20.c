#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    void *unk_00;
    void *unk_04;
    V unk_08;
} S;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10[0x90];
    u8 unk_A0[0x90];
    u8 unk_130[0x90];
    u8 unk_1C0[0x90];
    u8 unk_250[0x90];
    u8 unk_2E0[0x50];
    s32 unk_330;
    u8 unk_334[0xD30];
    S unk_1064;
    u8 pad_1078[0x8];
    u8 unk_1080[0x110E0];
    u8 unk_12160[0xC0];
    u8 unk_12220[0x12210];
    s32 unk_24430;
    u8 unk_24434;
    u8 unk_24435;
    u8 unk_24436;
    u8 pad_24437[0x1];
    u8 unk_24438[0x10A3C];
    u8 unk_34E74;
    u8 pad_34E75[0x3];
    s32 unk_34E78;
    s32 unk_34E7C;
    u8 unk_34E80[0x50];
    f32 unk_34ED0;
    u8 pad_34ED4[0xC];
    s32 unk_34EE0;
    s32 unk_34EE4;
    s32 unk_34EE8;
    s32 unk_34EEC;
} T;

extern f32 D_08A00818[];
extern f32 D_08A00820[];
extern u8 D_08A46884[];
extern u8 D_08A46AB8[];

void func_08865EE0(void *);
void func_08913614(void *);
void func_08914CD0(void *, s32);
void func_089154B4(void *, void *);
void func_08977558(void *, s32, s32);
void func_089D05EC(void *, s32, s32);
void func_089D1ED0(void *, s32, s32);
void func_089D5070(void *, s32, s32);

T *func_08916F20(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    V t;

    arg0->unk_00 = arg3;
    arg0->unk_04 = 0;
    func_08865EE0(arg0->unk_10);
    func_08865EE0(arg0->unk_A0);
    func_08865EE0(arg0->unk_130);
    func_08865EE0(arg0->unk_1C0);
    func_08865EE0(arg0->unk_250);
    func_08913614(arg0->unk_2E0);
    arg0->unk_330 = arg2;
    func_08914CD0(arg0->unk_334, arg1);
    t.unk_00 = D_08A00818[0];
    t.unk_04 = D_08A00818[1];
    t.unk_08 = D_08A00820[0];
    arg0->unk_1064.unk_00 = D_08A46884;
    arg0->unk_1064.unk_00 = D_08A46AB8;
    arg0->unk_1064.unk_04 = arg0;
    arg0->unk_1064.unk_08 = t;
    func_08977558(arg0->unk_1080, arg1, arg2);
    func_089D5070(arg0->unk_12160, arg1, arg2);
    func_089D1ED0(arg0->unk_12220, arg1, arg2);
    arg0->unk_24430 = 0;
    arg0->unk_24434 = 0;
    arg0->unk_24435 = 0;
    arg0->unk_24436 = 0;
    func_089D05EC(arg0->unk_24438, arg1, arg2);
    arg0->unk_34E74 = 0;
    arg0->unk_34E78 = 0;
    arg0->unk_34E7C = -1;
    func_08913614(arg0->unk_34E80);
    arg0->unk_34ED0 = 0.5f;
    arg0->unk_34EE8 = 0;
    arg0->unk_34EE4 = 0;
    arg0->unk_34EE0 = 0;
    arg0->unk_34EEC = 0;
    func_089154B4(arg0->unk_334, &arg0->unk_1064);
    return arg0;
}
