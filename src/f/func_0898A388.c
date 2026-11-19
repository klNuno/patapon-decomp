#include "common.h"

void func_089437CC(void *, s32, s32);
extern u8 D_08A4832C[];
extern u8 D_08A48344[];

typedef struct {
    u8 *unk_00;
    u8 pad_04[0x14];
    u8 *unk_18;
    u8 pad_1C[0x3A4];
    s32 unk_3C0;
    s32 unk_3C4;
    s32 unk_3C8;
    s32 unk_3CC;
    s32 unk_3D0;
    s32 unk_3D4;
    s32 unk_3D8;
    s32 unk_3DC;
    s32 unk_3E0;
} T;

T *func_0898A388(T *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_089437CC(arg0, arg2, arg3);
    arg0->unk_00 = D_08A4832C;
    arg0->unk_18 = D_08A48344;
    arg0->unk_3C0 = arg1;
    arg0->unk_3C4 = 0;
    arg0->unk_3C8 = 0;
    arg0->unk_3CC = 0;
    arg0->unk_3D0 = 0;
    arg0->unk_3D4 = 0;
    arg0->unk_3D8 = 0;
    arg0->unk_3DC = 0;
    arg0->unk_3E0 = 0;
    return arg0;
}
