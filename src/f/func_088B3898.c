#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0xA0];
    s32 unk_B0;
    void *unk_B4;
} Obj_088B3898;

typedef struct {
    u8 pad_00[0x30];
} E_088B3898;

typedef struct {
    u8 pad_00[0x8];
    void *unk_08;
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
    u8 pad_374[0x2C];
    s32 unk_3A0;
    u8 pad_3A4[0xC];
    u8 unk_3B0[0x5D0];
    Obj_088B3898 unk_980;
    u8 pad_A38[0x8];
    u8 unk_A40[0x24];
    s32 unk_A64;
    u8 pad_A68[0x28];
    u8 unk_A90[0x24];
    E_088B3898 unk_AB4[3];
    u8 pad_B44[0xC];
    u8 unk_B50[0x50];
    s32 unk_BA0;
    s32 unk_BA4;
    s32 unk_BA8;
} T_088B3898;

s32 func_0893D430(s32 *);
void func_08969254(T_088B3898 *, s32, s32);
void func_0889CAA4(void *, s32, s32, s32);
void func_0887FF9C(void *);
void func_08880CDC(void *, s32);
void func_088825A4(s32, void *);
void func_088763F8(void *);
void func_088763E8(void *);
void func_08876338(void *);
s32 func_0893D3EC(s32 *);
void func_0893C530(void *, s32);
void func_088B3B84(T_088B3898 *);
extern u8 D_08A45C5C[];
extern u8 D_08A45C78[];
extern u8 D_08A45C90[];
extern u8 D_08A45CA0[];
extern u8 D_08A45CEC[];
extern u8 D_08A45D08[];

T_088B3898 *func_088B3898(T_088B3898 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    s32 b;
    E_088B3898 *p;
    Obj_088B3898 *o;

    a = arg1;
    func_08969254(arg0, arg2, func_0893D430(&a));
    arg0->unk_08 = D_08A45C5C;
    arg0->unk_58 = D_08A45C78;
    arg0->unk_7C = D_08A45C90;
    arg0->unk_CC = D_08A45CA0;
    arg0->unk_370 = D_08A45CEC;
    arg0->unk_3A0 = arg4;
    func_0889CAA4(arg0->unk_3B0, arg3, 0, 0);
    o = &arg0->unk_980;
    arg0->unk_980.unk_B4 = D_08A45D08;
    arg0->unk_980.unk_00 = 0;
    func_0887FF9C(o->unk_10);
    if (o->unk_00 != 0) {
        func_08880CDC(o->unk_10, o->unk_B0);
        o->unk_B0 = 0;
        func_088825A4(o->unk_00, o->unk_10);
    }
    arg0->unk_A64 = -1;
    func_088763F8(arg0->unk_A90);
    p = arg0->unk_AB4;
    do {
        func_088763E8(p);
        p++;
    } while (p < arg0->unk_AB4 + 3);
    func_08876338(arg0->unk_A40);
    b = arg1;
    func_0893C530(arg0->unk_B50, func_0893D3EC(&b));
    arg0->unk_BA0 = arg1;
    arg0->unk_BA4 = 0;
    arg0->unk_BA8 = 0;
    func_088B3B84(arg0);
    return arg0;
}
