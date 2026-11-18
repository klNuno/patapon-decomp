#include "common.h"

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[0x4];
    s32 unk_106C;
    u8 pad_1070[0x3F90];
    s32 unk_5000;
    u8 unk_5004[0x16B4];
    s32 *unk_66B8;
    s32 unk_66BC;
} T089A4664;

extern s32 D_089EF868[];

s32 func_08998080(s32, s32);
s32 func_0899A908(s32, s32);
s32 func_0899E14C(s32, s32);
u8 func_089944B8(u8 *, s32, s32, s32);

s32 func_089A4664(T089A4664 *arg0, s32 arg1) {
    s32 temp;
    s32 v;

    if (arg0->unk_66BC == 0) {
        return 0;
    }
    temp = arg0->unk_66B8[arg0->unk_5000];
    v = func_0899A908(func_08998080(arg0->unk_1064, arg0->unk_106C), arg1);
    temp = D_089EF868[temp];
    if ((u8)func_0899E14C(v, temp) == 0) {
        return 0;
    }
    return func_089944B8(arg0->unk_5004, arg0->unk_106C, arg1, temp) != 0;
}
