#include "common.h"

typedef struct {
    u8 pad_00[0x170];
} E_08866690;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} R_08866690;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
    E_08866690 unk_10[(0x5C10 - 0x10) / 0x170];
    E_08866690 *unk_5C10;
    s32 unk_5C14;
} Obj_08866690;

R_08866690 *func_0885AAF8(s32);
void func_088668F8(E_08866690 *, s32, s32, s32);

s32 func_08866690(Obj_08866690 *arg0, s32 arg1, s32 arg2) {
    s32 i;

    if (arg1 != 0 || arg2 != 0) {
        arg0->unk_04 = arg1;
        arg0->unk_00 = arg2;
    }
    arg0->unk_5C14 = func_0885AAF8(arg0->unk_04)->unk_20;
    arg0->unk_5C10 = arg0->unk_10;
    for (i = 0; i < arg0->unk_5C14; i++) {
        func_088668F8(&arg0->unk_5C10[i], arg1, arg2, i);
    }
    return 1;
}
