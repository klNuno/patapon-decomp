#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    f32 unk_50;
    u8 pad_54[4];
    s32 unk_58;
    f32 unk_5C;
    s32 unk_60;
    u8 pad_64[0x100 - 0x64];
    void *unk_100;
    u8 pad_104[0x110 - 0x104];
    u8 unk_110[0x548 - 0x110];
    s32 unk_548;
    u8 pad_54C[4];
    u8 unk_550[0x19A0 - 0x550];
    u8 unk_19A0[0x1A00 - 0x19A0];
    u8 unk_1A00[0x1AD0 - 0x1A00];
    u8 unk_1AD0[0x1B60 - 0x1AD0];
    u8 unk_1B60[0x1B80 - 0x1B60];
    u8 unk_1B80;
    u8 unk_1B81;
    u8 unk_1B82;
    u8 pad_1B83[0x1B90 - 0x1B83];
    s32 unk_1B90;
    s32 unk_1B94;
    s32 unk_1B98;
    s32 unk_1B9C;
    f32 unk_1BA0;
    f32 unk_1BA4;
} Obj_0887EDC8;

s32 func_08858BCC(void);
void func_0885A928(void *);
void func_0885B788(void *, s32);
void func_08864AC4(Obj_0887EDC8 *);
void func_08864FA0(Obj_0887EDC8 *, void *, s32);
void func_0887F1CC(void *);
void func_0887F5AC(void *, s32);
void func_089208E8(void *, s32);
void func_08925240(void *);
extern u8 D_08A452EC[];

Obj_0887EDC8 *func_0887EDC8(Obj_0887EDC8 *arg0, s32 arg1) {
    struct {
        s32 unk_00;
    } temp;

    func_08864AC4(arg0);
    func_08925240(arg0->unk_110);
    arg0->unk_100 = D_08A452EC;
    arg0->unk_548 = arg1;
    temp.unk_00 = func_08858BCC();
    func_0885B788(arg0->unk_550, temp.unk_00);
    func_0887F1CC(arg0->unk_19A0);
    func_0887F5AC(arg0->unk_1A00, arg1);
    func_089208E8(arg0->unk_1AD0, arg1);
    func_0885A928(arg0->unk_1B60);
    arg0->unk_50 = 0.1f;
    arg0->unk_1B80 = 0;
    arg0->unk_1B81 = 0;
    arg0->unk_1B82 = 0;
    arg0->unk_1B90 = 0;
    arg0->unk_1B94 = 0;
    arg0->unk_1B98 = 0;
    arg0->unk_1B9C = 0;
    arg0->unk_1BA0 = 10.0f;
    arg0->unk_1BA4 = 10.0f;
    func_08864FA0(arg0, arg0->unk_19A0, 0);
    func_08864FA0(arg0, arg0->unk_1A00, 1);
    func_08864FA0(arg0, arg0->unk_1AD0, 2);
    arg0->unk_60 = 1;
    arg0->unk_58 = 0;
    arg0->unk_5C = 76.0f;
    return arg0;
}
