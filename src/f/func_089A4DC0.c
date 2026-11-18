#include "common.h"

typedef struct Unk_089A4DC0 {
    u8 pad_00[0x1064];
    s32 unk_1064;
    u8 pad_1068[0x4];
    s32 unk_106C;
    u8 pad_1070[0x3E00];
    s32 unk_4E70[1];
} Unk_089A4DC0;

s32 func_08998080(s32, s32);
s32 func_0899A908(s32, s32);
void func_0899D880(s32, s32, s32);
void func_089A4E48(Unk_089A4DC0 *, s32);

void func_089A4DC0(Unk_089A4DC0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        func_0899D880(func_0899A908(func_08998080(arg0->unk_1064, arg0->unk_106C), arg1), arg2, arg3);
    }
    arg0->unk_4E70[arg2] = 0;
    func_089A4E48(arg0, arg2);
}
