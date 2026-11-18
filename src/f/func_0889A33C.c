#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x370 - 0xD0];
    void *unk_370;
} Obj_0889A33C;

s32 func_0893D430(s32 *);
void func_08969254(Obj_0889A33C *, s32, s32);
extern u8 D_08A4583C[];
extern u8 D_08A45858[];
extern u8 D_08A45870[];
extern u8 D_08A45880[];
extern u8 D_08A458CC[];

Obj_0889A33C *func_0889A33C(Obj_0889A33C *arg0, s32 arg1, s32 arg2) {
    func_08969254(arg0, arg2, func_0893D430(&arg1));
    arg0->unk_08 = D_08A4583C;
    arg0->unk_58 = D_08A45858;
    arg0->unk_7C = D_08A45870;
    arg0->unk_CC = D_08A45880;
    arg0->unk_370 = D_08A458CC;
    return arg0;
}
