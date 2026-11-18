#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    u32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x170 - 0x14];
    s32 unk_170;
} Obj_0899F30C;

s32 func_0899A900(s32);
s32 func_089A5490(s32);

void func_0899F30C(Obj_0899F30C *arg0, s32 arg1) {
    u32 sp1C;
    u32 sp18;

    if (arg0->unk_08 == 0) {
        sp18 = func_0899A900(func_089A5490(arg0->unk_04)) - 1;
        sp1C = arg0->unk_0C;
        arg0->unk_0C = *(sp18 < sp1C ? &sp18 : &sp1C);
    }
    arg0->unk_08 = 1;
    arg0->unk_170 = -1;
    arg0->unk_10 = arg1;
}
