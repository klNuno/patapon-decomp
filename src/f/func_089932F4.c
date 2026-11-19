#include "common.h"

typedef struct Obj_0887EDC8 {
    u8 pad_00[0x50];
    f32 unk_50;
    u8 pad_54[4];
    s32 unk_58;
    f32 unk_5C;
    u8 pad_60[0xA0];
    u8 *unk_100;
    u8 pad_104[0xC];
    u8 unk_110[1];
} Obj_0887EDC8;

typedef struct S S;

void func_08864AC4(Obj_0887EDC8 *);
void func_08864FA0(Obj_0887EDC8 *, void *, s32);
S *func_089968D0(S *arg0);
extern u8 D_08A4857C[];

Obj_0887EDC8 *func_089932F4(Obj_0887EDC8 *arg0) {
    func_08864AC4(arg0);
    arg0->unk_100 = D_08A4857C;
    func_089968D0((S *)arg0->unk_110);
    arg0->unk_50 = 0.1f;
    func_08864FA0(arg0, arg0->unk_110, 0);
    arg0->unk_58 = 0;
    arg0->unk_5C = 106.0f;
    return arg0;
}
