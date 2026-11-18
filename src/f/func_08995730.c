#include "common.h"

void func_0881F5C0(void *, s32, s32);
void func_08865EE0(void *);
extern f32 D_08A06A20[];
extern f32 D_08A06A28[];
extern f32 D_08A06A2C[];

typedef struct { f32 unk_00[3]; } V;
typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    u8 unk_10[0x90];
    u8 unk_A0[0x90];
    s32 unk_130;
    s32 unk_134;
    s32 unk_138;
    u8 unk_13C[12];
    void *unk_148;
    V unk_14C;
    u8 unk_158;
    u8 pad_159[3];
    s32 unk_15C;
    s32 unk_160;
    u8 unk_164;
} T;

void *func_08995730(T *arg0, s32 arg1, s32 arg2) {
    V temp;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    func_08865EE0(arg0->unk_10);
    func_08865EE0(arg0->unk_A0);
    arg0->unk_130 = 0;
    arg0->unk_134 = 0;
    arg0->unk_138 = 0;
    temp.unk_00[0] = D_08A06A20[1];
    temp.unk_00[1] = D_08A06A28[0];
    temp.unk_00[2] = D_08A06A2C[0];
    arg0->unk_148 = arg0;
    arg0->unk_14C = temp;
    arg0->unk_158 = 0;
    arg0->unk_15C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    func_0881F5C0(arg0->unk_13C, 0, 0xC);
    return arg0;
}
