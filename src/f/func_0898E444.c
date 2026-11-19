#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_088F2F40;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x90];
    u8 unk_A0[0x10];
    s32 unk_B0;
    s32 unk_B4;
    u8 pad_B8[4];
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
    s32 unk_CC;
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    s32 unk_DC;
} Obj;

void func_08866028(void *);
void func_0887432C(T_088F2F40 *, s32);
void func_088844EC(T_088F2F40 *);
void func_088F2FE4(T_088F2F40 *, void *);

void func_0898E444(Obj *arg0)
{
    T_088F2F40 temp;

    func_088844EC(&temp);
    func_088F2FE4(&temp, arg0->unk_A0);
    func_0887432C(&temp, -1);
    arg0->unk_B0 = 0;
    arg0->unk_B4 = 0;
    arg0->unk_BC = 0;
    arg0->unk_C0 = 0;
    arg0->unk_C4 = 0;
    arg0->unk_CC = 0;
    func_08866028(arg0->unk_10);
    arg0->unk_D0 = -1;
    arg0->unk_D4 = -1;
    arg0->unk_D8 = -1;
    arg0->unk_DC = -1;
    arg0->unk_00 = 0;
    arg0->unk_C8 = 0;
}
