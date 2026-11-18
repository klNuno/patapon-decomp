#include "common.h"

typedef struct {
    u8 pad_00[0x36B18];
    s32 unk_36B18;
} Arg1_08940370;

typedef struct {
    u8 pad_00[0x1C0];
    void *unk_1C0;
    void *unk_1C4;
    Arg1_08940370 *unk_1C8;
    s32 unk_1CC;
    u8 unk_1D0;
    u8 unk_1D1;
    u8 pad_1D2[2];
    void *unk_1D4;
} Obj_08940370;

void func_08941CC8(Obj_08940370 *, s32, s32);
extern u8 D_08A03AB4[];
extern u8 D_08A47414[];

Obj_08940370 *func_08940370(Obj_08940370 *arg0, Arg1_08940370 *arg1, s32 arg2) {
    func_08941CC8(arg0, arg2, arg1->unk_36B18);
    arg0->unk_1C4 = NULL;
    arg0->unk_1C0 = D_08A47414;
    arg0->unk_1C8 = arg1;
    arg0->unk_1CC = arg2;
    arg0->unk_1D0 = 0;
    arg0->unk_1D1 = 0;
    arg0->unk_1D4 = NULL;
    arg0->unk_1C4 = arg1;
    arg0->unk_1D4 = D_08A03AB4;
    return arg0;
}
