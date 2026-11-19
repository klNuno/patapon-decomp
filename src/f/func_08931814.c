#include "common.h"
typedef struct { u8 pad_00[0xA0]; } E_089316C4;
typedef struct {
    u8 pad_00[0x10];
    E_089316C4 unk_10[1];
} S;
void func_088812A4(E_089316C4 *, s32);
void func_08931814(S *arg0, s32 arg1, s32 arg2) {
    func_088812A4(&arg0->unk_10[arg1], arg2);
}
