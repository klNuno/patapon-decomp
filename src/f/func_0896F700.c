#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} S_0896F700;

s32 func_0884EBA0(s32, s32);
s32 func_0884EBB0(s32, s32);
s32 func_08853004(s32);
void func_0896FECC(S_0896F700 *, s32, s32);
void func_0896FEE0(S_0896F700 *, s32, s32, s32, s32);

void func_0896F700(S_0896F700 *arg0) {
    s32 temp;
    s32 a;

    temp = func_08853004(arg0->unk_04);
    a = func_0884EBA0(temp, 0x24);
    func_0896FECC(arg0, a, func_0884EBB0(temp, 0x1F));
    func_0896FEE0(arg0, func_0884EBA0(temp, 0x25), func_0884EBA0(temp, 0x26), func_0884EBB0(temp, 0x20), func_0884EBB0(temp, 0x21));
}
