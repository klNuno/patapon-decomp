#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    f32 unk_50;
    u8 pad_54[4];
    s32 unk_58;
    f32 unk_5C;
    s32 unk_60;
    s32 unk_64[(0x100 - 0x64) / 4];
    void *unk_100;
    u8 pad_104[0x110 - 0x104];
    u8 unk_110[0x550 - 0x110];
    u8 unk_550[0x19A0 - 0x550];
    u8 unk_19A0[0x1A30 - 0x19A0];
    u8 unk_1A30[0x1A90 - 0x1A30];
    u8 unk_1A90[0x1AB0 - 0x1A90];
    u8 unk_1AB0;
    u8 unk_1AB1;
    u8 unk_1AB2;
    u8 pad_1AB3[0x1AC0 - 0x1AB3];
    s32 unk_1AC0;
    s32 unk_1AC4;
    s32 unk_1AC8;
    s32 unk_1ACC;
    f32 unk_1AD0;
    f32 unk_1AD4;
} Obj_088DF998;

s32 func_08858BCC(void);
void func_0885A928(void *);
void func_0885B788(void *, s32);
void func_08864AC4(Obj_088DF998 *);
void func_08864FA0(Obj_088DF998 *, void *, s32);
void func_0887F104(Obj_088DF998 *, s32);
void func_088DF5B8(void *);
void func_088F43D8(void *, s32);
void func_08925240(void *);
extern u8 D_08A4643C[];

Obj_088DF998 *func_088DF998(Obj_088DF998 *arg0, s32 arg1) {
    struct {
        s32 unk_00;
    } temp;

    func_08864AC4(arg0);
    func_08925240(arg0->unk_110);
    arg0->unk_100 = D_08A4643C;
    temp.unk_00 = func_08858BCC();
    func_0885B788(arg0->unk_550, temp.unk_00);
    func_088F43D8(arg0->unk_19A0, arg1);
    func_088DF5B8(arg0->unk_1A30);
    func_0885A928(arg0->unk_1A90);
    arg0->unk_50 = 0.1f;
    arg0->unk_1AB0 = 0;
    arg0->unk_1AB1 = 0;
    arg0->unk_1AB2 = 0;
    arg0->unk_1AC0 = 0;
    arg0->unk_1AC4 = 0;
    arg0->unk_1AC8 = 0;
    arg0->unk_1ACC = 0;
    arg0->unk_1AD0 = 10.0f;
    arg0->unk_1AD4 = 10.0f;
    func_08864FA0(arg0, arg0->unk_1A30, 0);
    func_08864FA0(arg0, arg0->unk_19A0, 1);
    arg0->unk_60 = 0;
    arg0->unk_60 = 1;
    arg0->unk_58 = 0;
    arg0->unk_5C = 88.0f;
    func_0887F104(arg0, arg0->unk_64[arg0->unk_60]);
    return arg0;
}
