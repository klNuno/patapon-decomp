#include "common.h"

typedef struct V2_088DFB60 {
    f32 unk_00;
    f32 unk_04;
} V2_088DFB60;

typedef struct Obj_088DFB60 {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0xF8 - 0x3C];
    f32 unk_F8;
    f32 unk_FC;
    u8 pad_100[0x110 - 0x100];
    u8 unk_110[0x1A90 - 0x110];
    u8 unk_1A90[0x1AB0 - 0x1A90];
    u8 unk_1AB0;
    u8 unk_1AB1;
    u8 unk_1AB2;
    u8 pad_1AB3[0x1AC0 - 0x1AB3];
    f32 unk_1AC0;
    f32 unk_1AC4;
    f32 unk_1AC8;
} Obj_088DFB60;

void func_08864C64();
void func_0885A958(void *);
void func_08925618(void *, s32);
V2_088DFB60 *func_08925A90(void *);

void func_088DFB60(Obj_088DFB60 *arg0, s32 arg1) {
    V2_088DFB60 *v;

    func_08864C64();
    if (arg0->unk_1AB0 != 0) {
        arg0->unk_1AB0 = 0;
    }
    if (arg0->unk_1AB2 == 0) {
        arg0->unk_1AC0 = arg0->unk_30;
        arg0->unk_1AC4 = arg0->unk_34;
        arg0->unk_1AC8 = arg0->unk_38;
    }
    func_0885A958(arg0->unk_1A90);
    func_08925618(arg0->unk_110, arg1);
    v = func_08925A90(arg0->unk_110);
    arg0->unk_F8 = v->unk_00;
    arg0->unk_FC = v->unk_04;
}
